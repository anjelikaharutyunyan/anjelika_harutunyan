#include <iostream>
#include "linkedList.hpp"
using namespace std;

class Graph {

    private:
        LinkedList *arr;
        int verticeCount;
    public:
        Graph(int verticeCount);
        void AddEge(int,int);
        void RemoveEdge(int,int);
        void AddNode();
        void RemoveNode();
        bool IsEdgeExists(int,int);
        void FindNeighbours(int);
        //void FindConnections(int);
        void PrintList();
        ~Graph();
};
Graph::Graph(int verticeCount) {
    this->verticeCount = verticeCount;
    arr = new LinkedList [verticeCount];
    for (int i = 0; i < verticeCount; ++i) {
        arr[i]._head = NULL;   
    }
}
Graph::~Graph() {
    delete [] arr;
}
void Graph::AddEge(int i, int j) {
    arr[i].Add(j);
    arr[j].Add(i);
}
/*void Graph::RemoveEdge(int i,int j){
    arr[j].RemoveAt(j);
    arr[i].RemoveAt(i);    
}*/
void Graph::AddNode() {
    ++verticeCount;
    LinkedList *newArr = new LinkedList[verticeCount];
    for(int i = 0; i < verticeCount - 1; i++) {
        newArr[i] = arr[i];
    }
    arr = newArr;
}
void Graph::RemoveNode(){
    --verticeCount;
    LinkedList *newArr = new LinkedList[verticeCount];
    for (int i = 0; i < verticeCount-1; i++)
    {
        newArr[i] = arr[i];
    }
    arr = newArr;
}
// sa head-in heti gorc chanum bayc mnacacin duzy sxaly tama
bool Graph::IsEdgeExists(int i, int j){
    while(arr[i]._tail != NULL){
 if(arr[i]._head->_next->_data == j){
        return true;
     }
    else{
        return false;
    }
    } 
        return false;
}
void Graph::FindNeighbours(int i){
    Node* temp = arr[i]._head;
    cout <<  "The neighbours of " << i << " are: ";
while (temp) {
            cout <<temp->_data << " ";
            temp = temp->_next;
        }
}
void Graph::PrintList(){
    for(int i = 0; i < verticeCount; i++){
        cout << i << " --> ";
        Node* temporary_list = arr[i]._head;
        while(temporary_list) {
            cout << temporary_list->_data << " ";
            temporary_list = temporary_list->_next;
        }
        cout << endl;
    }
    cout << endl;
}
