#include "graphList.hpp"
int main(){

    Graph g(3);
    
    g.AddEge(0, 1);
    g.AddEge(1, 2);
    g.AddNode();
    g.AddNode();
    g.AddEge(0, 4);
    g.AddEge(4, 2);
    g.FindNeighbours(1);
    cout << endl;
    g.PrintList();
   // g.RemoveNode();
    //cout << g.IsEdgeExists(0,4);
    //g.PrintList();
    return 0;
}
