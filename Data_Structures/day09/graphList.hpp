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
        // FindNeighbours(int);
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
    arr[i].RemoveAt(j);
    arr[j].RemoveAt(i);
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
/*bool Graph::IsEdgeExists(int i,int j){
    if(arr[i] == ){
        return true;
    }
    else{
        return false;
    }
}*/
/*LinkedList Graph::FindNeighbours(int node){
    return arr[node];
}*/
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
}