#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Set.h"


static Graph generateGraph(void);


Set reachable(Graph g, Vertex src) {
    // TODO: Let's implement this!
    Set s = newSet(numVertices(g));
    return s;
}


int main(int argc, char **argv) {
    Graph g = generateGraph();

    Set s1 = reachable(g, 0);
    printf("Reachable from 0: ");
    showSetContents(s1);

    Set s2 = reachable(g, 1);
    printf("Reachable from 1: ");
    showSetContents(s2);

    Set s3 = reachable(g, 5);
    printf("Reachable from 5: ");
    showSetContents(s3);

    Set s4 = reachable(g, 6);
    printf("Reachable from 6: ");
    showSetContents(s4);

    return 0;
}


static Graph generateGraph(void) {
    Graph g = buildGraph(10);
    insertEdge(g, 0, 1);
    insertEdge(g, 0, 2);
    insertEdge(g, 0, 3);
    insertEdge(g, 2, 1);
    insertEdge(g, 2, 3);
    insertEdge(g, 2, 4);
    insertEdge(g, 2, 5);
    insertEdge(g, 3, 0);
    insertEdge(g, 3, 4);
    insertEdge(g, 4, 2);
    insertEdge(g, 4, 5);
    insertEdge(g, 4, 7);
    insertEdge(g, 4, 8);
    insertEdge(g, 5, 1);
    insertEdge(g, 6, 5);
    insertEdge(g, 6, 7);
    insertEdge(g, 6, 9);
    insertEdge(g, 7, 4);
    insertEdge(g, 7, 5);
    insertEdge(g, 7, 8);
    insertEdge(g, 8, 7);
    insertEdge(g, 9, 7);
    insertEdge(g, 9, 8);

    return g;
}
