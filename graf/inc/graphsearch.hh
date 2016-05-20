#ifndef GRAPHSEARCH_HH
#define GRAPHSEARCH_HH

#include "graph.hh"
#include "lista.hh"

class graphSearch
{
  graph sgraph;
  bool visited[1000001];
  List S;
  int vk;
public:
  void findPathBFS(int,int);
  void findPathDFS(int,int);
  bool DFS(int);
  void BFS(int);
  void addVertex(int x)
  {
    sgraph.addVertex(x);
  }
  void addEdge(int x,int y)
  {
    sgraph.addEdge(x,y);
  }
  List getNeighbors(int x)
  {
    return sgraph.getNeighbors(x);
  }
  bool isConnected(int x, int y)
  {
    return sgraph.isConnected(x,y);
  }

};

#endif
