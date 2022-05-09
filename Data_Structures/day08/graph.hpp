#include <iostream>

using namespace std;

class Graph
{
private:
    bool **matrix;
    int verticeCount;

public:
    void InputMatrix(bool **, int);
    void PrintMatrix();
    void AddEdge(int, int);
    void RemoveEdge(int, int);
    void AddNode();
    void RemoveNode();
    bool IsEdgeExists(int,int);
    int* NodeNeighbours(int);
   //void NodeConnections(int);
    Graph(int);
    ~Graph();
};
Graph::Graph(int verticeCount)
{
    this->verticeCount = verticeCount;
    matrix = new bool *[verticeCount];
    for (int i = 0; i < verticeCount; ++i) {
        matrix[i] = new bool[verticeCount];
        for (int j = 0; j < verticeCount; ++j){
            matrix[i][j] = false;
        }
    }
}
Graph::~Graph()
{
    delete matrix;
}
void Graph::InputMatrix(bool **arr, int size)
{
    for (int i = 0; i < size; ++i){
        arr[i] = new bool[size];
        for (int j = 0; j < size; ++j){
            cin >> arr[i][j];
        }
    }
}
void Graph::PrintMatrix()
{
    for (int i = 0; i < verticeCount; ++i){
        for (int j = 0; j < verticeCount; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Graph::AddEdge(int i, int j)
{
    matrix[i][j] = true;
    matrix[j][i] = true;
}
void Graph::RemoveEdge(int i, int j)
{
    matrix[i][j] = false;
    matrix[j][i] = false;
}
void Graph::AddNode()
{
    verticeCount++;
    bool **newArr = new bool *[verticeCount];
    for (int i = 0; i < verticeCount; i++){
        newArr[i] = new bool[verticeCount];
        for (int j = 0; j < verticeCount; j++){
            if (i != verticeCount - 1 && j != verticeCount - 1){
                newArr[i][j] = matrix[i][j];
            } else {
                newArr[i][j] = false;
            }
        }
    }
    delete matrix;
    matrix = newArr;
}
void Graph::RemoveNode()
{
    verticeCount--;
    bool **newArr = new bool *[verticeCount];
    for (int i = 0; i < verticeCount; ++i) {
        newArr[i] = new bool[verticeCount];
        for (int j = 0; j < verticeCount; ++j) {
            newArr[i][j] = matrix[i][j];
        }
    }
    delete matrix;
    matrix = newArr;
}
bool Graph::IsEdgeExists(int i, int j){
    if (matrix[i][j]) {
        return true;
    }
    return false;
}
int* Graph:: NodeNeighbours(int vertice){
int*  arr = new int [verticeCount];
  for (int i = 0; i < verticeCount; i++){
    if (matrix[vertice][i])
    {
      arr[i] = i;
      cout << arr[i] << " ";
    }
  }
  return arr;
  delete arr;
}




