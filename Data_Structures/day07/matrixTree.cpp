#include <iostream>
#include "BinaryyTree.cpp"
using namespace std;
void InputArray(int **arr, int size)
{

    for (int i = 0; i < size; ++i)
    {
        arr[i] = new int[size];
        for (int j = 0; j < size; ++j)
        {
            cin >> arr[i][j];
        }
    }
}
void PrintArray(int **arr, int size)
{

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool CheckRoot(int **arr, int size)
{
    int RootCount = 0;
    int CountOfZero = 0;
    int CountOfOne = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[j][i] == 0)
            {
                ++CountOfZero;
            }
            if (CountOfZero == size)
            {
                ++RootCount;
            }
            if (RootCount > 1)
            {
                return false;
            }
            if (arr[j][i] == 1)
            {
                ++CountOfOne;
            }
            if (CountOfOne > 1)
            {
                return false;
            }
        }
        CountOfZero = 0;
        CountOfOne = 0;
    }
    return true;
}
int GetRoot(int **arr, int size)
{
    int count = 0;
    int RootIndex = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[j][i] == 0)
            {
                count++;
            }
            if (count == size)
            {
                RootIndex = i;
                return i;
            }
        }
        count = 0;
    }
    return RootIndex;
}
bool IsTree(int **arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i][j] == 1 && arr[j][i] == 1)
            {
                return false;
            }
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (count > 2)
            {
                return false;
            }
        }
        count = 0;
    }
    if (!CheckRoot(arr, size))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int size;
    cout << "Enter size: ";
    cin >> size;
    int **arr = new int *[size];
    InputArray(arr, size);
    PrintArray(arr, size);
    int root;
    if (IsTree(arr, size))
    {
        root = GetRoot(arr, size);
        int array[size];
        array[0] = root;
        int arrIndex = 1;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i][j] == 1)
                {
                    array[arrIndex] = j;
                    arrIndex++;
                }
            }
        }
        Tree tree;
        for (int i = 0; i < size; i++)
        {
            tree.insertNode(array[i]);
        }
        tree.printDFS();
        cout << endl;
    }
    else
    {
        cout << " It's not binary tree   \n";
    }
    return 0;
}