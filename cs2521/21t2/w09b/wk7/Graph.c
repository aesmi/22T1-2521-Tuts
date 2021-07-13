#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "Graph.h"


#define GRAPH_ERR   "Could not allocate memory for graph container"
#define MATRIX_ERR  "Could not allocate memory for adjacency matrix"


struct graph {
    bool **adjMatrix;
    int    nV;
};


static void *mallocSafely(size_t bytes, const char *warning) {
    void *mem = malloc(bytes);
    if (mem == NULL) {
        fprintf(stderr, warning);
        exit(EXIT_FAILURE);
    }

    return mem;
}


Graph buildGraph(int **matrix, int dim) {
    Graph g = mallocSafely(sizeof(*g), GRAPH_ERR);

    g->adjMatrix = mallocSafely(dim * sizeof(bool *), MATRIX_ERR);
    for (Vertex i = 0; i < dim; i++) {
        g->adjMatrix[i] = mallocSafely(dim * sizeof(bool), MATRIX_ERR);
        for (Vertex j = 0; j < dim; j++) {
            g->adjMatrix[i][j] = matrix[i][j] && matrix[j][i];
        }
    }

    g->nV = dim;

    return g;
}

bool connected(Graph g, Vertex u, Vertex v) {
    return g->adjMatrix[u][v] && g->adjMatrix[v][u];
}

void freeGraph(Graph g) {
    free(g->adjMatrix);
    free(g);
}
