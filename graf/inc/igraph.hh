#ifndef IGRAPH_HH
#define IGRAPH_HH
#include "graphsearch.hh"

class igraph : public graphSearch
{
  virtual void addVertex(vertex v)=0;
  virtual void addEdge(vertex x, vertex y, int weight)=0;
  virtual void getNeighbors(vertex x)=0;
  virtual void isConnected(vertex x, vertex y)=0;
};
#endif
