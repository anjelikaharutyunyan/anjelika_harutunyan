#include "graphList.hpp"
int main(){

    Graph g(3);
    
    g.AddEge(0, 1);
    g.AddEge(1, 2);
    g.AddNode();
    g.AddNode();
    g.AddEge(0, 4);
    g.AddEge(4, 2);
    g.PrintList();
    g.PrintList();
    g.RemoveNode();
    g.PrintList();
    return 0;
}