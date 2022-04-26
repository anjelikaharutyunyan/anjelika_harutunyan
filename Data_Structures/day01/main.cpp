#include "linkedList.h"
#include <iostream>
using namespace std;
int main(){

LinkedList list;
Node *head = NULL;
for(int i = 0; i < 10; i++)
{
 list.add(rand()%10);
}

list.addAt(list.getHead()->next->next,1);
list.remove();
list.removeAt(list.getHead()->next->next);
int element = list.getElement(1);
int count = list.countOfNodes();
list.display();

    return 0;
}
