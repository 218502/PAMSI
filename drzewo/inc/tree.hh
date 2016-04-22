#ifndef TREE_HH
#define TREE_HH
#include "element.hh"
#include "node.hh"
class tree
{
  int Size;
  node* root;
public:
  tree(){Size=0;}
  int add(element el);
  int find(element el);
};

#endif
