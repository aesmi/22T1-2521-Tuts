#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>


typedef int Vertex;

typedef struct graph *Graph;


/** Build a graph from a square adjacency matrix. */
Graph buildGraph(int **, int);

/** Check whether two vertices are connected in a graph. */
bool  connected(Graph, Vertex, Vertex);

/** Free all memory associated with a graph. */
void  freeGraph(Graph);


#endif // GRAPH_H
