#ifndef GRAPH_HH
#define GRAPH_HH

#include "vertex.hh"
#include "edge.hh"
#include "igraph.hh"


class graph : public igraph
{

public:
  virtual void addVertex(vertex);
  virtual void addEdge(vertex,vertex,int);
  virtual void getNeighbors(vertex);
  virtual void isConnected(vertex,vertex);
};
#endif
