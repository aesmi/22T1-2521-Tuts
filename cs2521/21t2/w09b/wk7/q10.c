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


bool isEulerPath(Graph g, Edge *e, int nE) {
    return false;
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
    Edge path2[] = path1;

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

    printf(
        "Is path1 an Euler path in graph 1? %s\n",
        isEulerPath(g1, path1, 2) ? "yes" : "no"
    );

    printf(
        "Is path2 an Euler path in graph 2? %s\n",
        isEulerPath(g2, path2, 2) ? "yes" : "no"
    );

    printf(
        "Is path3 an Euler path in graph 3? %s\n",
        isEulerPath(g3, path3, 4) ? "yes" : "no"
    );

    printf(
        "Is path4 an Euler path in graph 4? %s\n",
        isEulerPath(g4, path4, 5) ? "yes" : "no"
    );

    return 0;
}


static Graph generateGraph1(void) {
    int dim = 3;
    int matrix[3][3] = {
        { 0, 1, 0 },
        { 1, 0, 1 },
        { 0, 1, 0 }
    };

    return buildGraph(matrix, dim);
}

static Graph generateGraph2(void) {
    int dim = 3;
    int matrix[3][3] = {
        { 0, 1, 1 },
        { 1, 0, 1 },
        { 1, 1, 0 }
    };

    return buildGraph(matrix, dim);
}

static Graph generateGraph3(void) {
    int dim = 4;
    int matrix[4][4] = {
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 },
        { 1, 1, 0, 1 },
        { 0, 0, 1, 0 }
    };

    return buildGraph(matrix, dim);
}

static Graph generateGraph4(void) {
    int dim = 4;
    int matrix[4][4] = {
        { 0, 1, 1, 1 },
        { 1, 0, 1, 1 },
        { 1, 1, 0, 1 },
        { 1, 1, 1, 0 }
    };

    return buildGraph(matrix, dim);
}
