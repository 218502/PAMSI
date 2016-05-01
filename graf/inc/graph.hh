#ifndef GRAPH_HH
#define GRAPH_HH

#include "igraph.hh"
#include "lista.hh"

class graph : public igraph
{
  List A[1000000];//macierz sasiedztwa
  int size;
public:
  graph(){size=0;}
  void addVertex(int);
  void addEdge(int,int);
  List getNeighbors(int);
  bool isConnected(int,int);
  int getsize();
};
#endif
