#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


//------------------- Quick sorting ----------------

int partition(int arr[10000], int start, int end)
{
	int pivot = arr[start];
	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	int i = start, j = end;
	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}
	return pivotIndex;
}
void quickSort(int arr[10000], int start, int end)
{
	if (start >= end)
		return;
	int p = partition(arr, start, end);
	quickSort(arr, start, p - 1);
	quickSort(arr, p + 1, end);
}
//----------------- Merge sorting -----------------
void merge(int *, int, int, int);
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[10000];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = c[i];
    }
}


int main()
{
    int arr[10000];
    int copy[10000];
    for (int i = 0; i < 10000; i++)
    {
        int random = rand() % 10000 + 1;
        arr[i] = random;
        copy[i] = arr[i];
    }
    
    //------------------Bubble sorting ------------------
    clock_t start = clock();
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    clock_t end = clock();
    double finish = double(end - start) / CLOCKS_PER_SEC;

    for (int i = 0; i < 10000; i++)
    {
        arr[i] = copy[i];
    }
    //--------------------Swapped Bubble sorting-----------------
    clock_t start1 = clock();
    bool swapped = false;
    for (int i = 0; i < 10000; i++)
    {
        swapped = false;
        for (int j = 0; j < 10000 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    clock_t end1 = clock();
    double finish1 = double(end1 - start1) / CLOCKS_PER_SEC;

    for (int i = 0; i < 10000; i++)
    {
        arr[i] = copy[i];
    }
    //------------------ our insertion sorting----------------
    clock_t start2 = clock();
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    clock_t end2 = clock();
    double finish2 = double(end2 - start2) / CLOCKS_PER_SEC;
    //----------------Insertion sorting---------------------
    clock_t start3 = clock();
    int key, j;
    for (int i = 1; i < 10000; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
    clock_t end3 = clock();
    double finish3 = double(end3 - start3) / CLOCKS_PER_SEC;
    
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = copy[i];
    }
    //-------------------Quick sorting ----------------------
    clock_t start5 = clock();
    int n = 10000;
    quickSort(arr, 0, n - 1);
    clock_t end5 = clock();
    double finish5 = double(end5 - start5) / CLOCKS_PER_SEC;
   
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = copy[i];
    }
    //-------------------Quick------------------------------
    clock_t start4 = clock();
    merge_sort(arr, 0, 10000 - 1);
    /*for (int i = 0; i < 10000; i++)
    {
        cout << arr[i] << "\t";
    }*/
    clock_t end4 = clock();
    double finish4 = double(end4 - start4) / CLOCKS_PER_SEC;

    cout << "Sorted arrays \n";
    cout << "\nBubble sorting : " << finish << endl;
    cout << "\nBubble sorting swap: " << finish3 << endl;
    cout << "\nOur Insertion sorting : " << finish2 << endl;
    cout << "\nInsertion sorting : " << finish1 << endl;
    cout << "\nMerge sorting: " << finish4 << endl;
    cout << "\nQuick sorting: " << finish5 << endl;
    return 0;
}