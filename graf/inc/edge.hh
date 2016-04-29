#ifndef EDGE_HH
#define EDGE_HH
#include "vertex.hh"

class edge
{
  vertex *l,*p;
  int weight;
public:
  edge(){l=0;p=0;weight=1;}
};

#endif
