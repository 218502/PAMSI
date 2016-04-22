#ifndef node_hh
#define node_hh
#include <string>
#include "element.hh"
class node
{
  element element;
  node* left;
  node* right;
  friend class tree;
};

#endif
