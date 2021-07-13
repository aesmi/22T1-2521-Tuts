#include <stdio.h>

#include "Graph.h"


typedef struct edge {
    Vertex u;
    Vertex v;
} Edge;


static Graph generateGraph1(void);
static Graph generateGraph2(void);
static Graph generateGraph3(void);
static Graph generateGraph4(void);
static void  printPath(Edge *, int);


bool isEulerPath(Graph g, Edge *e, int nE) {
    // TODO: Let's write this!
    return true;
}


int main(void) {
    // A path in graph 1
    // 0 - > 1 -> 2
    Edge path1[] = {
        { .u = 0, .v = 1 },
        { .u = 1, .v = 2 }
    };

    // A path in graph 2
    // 0 -> 1 -> 2
    Edge *path2 = path1;

    // A path in graph 3
    // 0 -> 2 -> 3 -> 2 -> 1
    Edge path3[] = {
        { .u = 0, .v = 2 },
        { .u = 2, .v = 3 },
        { .u = 3, .v = 2 },
        { .u = 2, .v = 1}
    };

    // A path in graph 4
    // 0 -> 1 -> 2 -> 0 -> 3 -> 1
    Edge path4[] = {
        { .u = 0, .v = 1 },
        { .u = 1, .v = 2 },
        { .u = 2, .v = 0 },
        { .u = 0, .v = 3 },
        { .u = 3, .v = 1 }
    };

    Graph g1 = generateGraph1();
    Graph g2 = generateGraph2();
    Graph g3 = generateGraph3();
    Graph g4 = generateGraph4();

    printPath(path1, 2);
    printf(
        "Is this an Euler path in graph 1? %s\n\n",
        isEulerPath(g1, path1, 2) ? "yes" : "no"
    );

    printPath(path2, 2);
    printf(
        "Is this an Euler path in graph 2? %s\n\n",
        isEulerPath(g2, path2, 2) ? "yes" : "no"
    );

    printPath(path3, 4);
    printf(
        "Is this an Euler path in graph 3? %s\n\n",
        isEulerPath(g3, path3, 4) ? "yes" : "no"
    );

    printPath(path4, 5);
    printf(
        "Is this an Euler path in graph 4? %s\n",
        isEulerPath(g4, path4, 5) ? "yes" : "no"
    );

    return 0;
}


static Graph generateGraph1(void) {
    Graph g = buildGraph(3);
    insertEdge(g, 0, 1);
    insertEdge(g, 1, 2);
    return g;
}

static Graph generateGraph2(void) {
    Graph g = generateGraph1();
    insertEdge(g, 2, 0);
    return g;
}

static Graph generateGraph3(void) {
    Graph g = buildGraph(4);
    insertEdge(g, 0, 2);
    insertEdge(g, 1, 2);
    insertEdge(g, 2, 3);
    return g;
}

static Graph generateGraph4(void) {
    Graph g = generateGraph3();
    insertEdge(g, 0, 1);
    insertEdge(g, 0, 3);
    insertEdge(g, 1, 3);
    return g;
}

static void printPath(Edge *e, int nE) {
    printf("%d", e[0].u);
    for (int i = 0; i < nE; i++) {
        printf(" -> %d", e[i].v);
    }
    printf("\n");
}
