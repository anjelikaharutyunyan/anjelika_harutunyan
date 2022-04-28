#include <iostream>
#include "linkedList.h"

using namespace std;

int main() {
    LinkedList node;
    int number;
    cout << "Make a list of 20 element\n";
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        number = 1 + rand() % 10;
        node.Add(number);
    }
    cout << node;
    
    cout << "Add an element after the 4th element\n";
    node.AddAt(5, 10);
    cout << node;
    
    cout << "Delete element 3rd\n";
    node.RemoveAt(3);
    cout << node;
    
    cout << "Add an element from the end\n";
    node.Add(12);
    cout << node;
    
    cout << "Delete the last element\n";
    node.RemoveLast();
    cout << node;
    
    cout << "The 5-th element = " << node.GetDataElementAt(5) << endl;

    cout << "Count = " << node.Count() << endl;
    return 0;
}