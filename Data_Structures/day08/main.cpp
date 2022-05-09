#include "graph.hpp"

int main() {

    Graph g(3);
    g.AddEdge(0, 1);
    g.AddEdge(0, 2);
    g.AddEdge(1, 2);
    g.PrintMatrix();
    cout << g.IsEdgeExists(1,2);
    cout << endl;
    g.AddNode();
    g.PrintMatrix();
    g.RemoveEdge(0, 2);
    g.PrintMatrix();
    g.NodeNeighbours(0);

    return 0;
}