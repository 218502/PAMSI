#ifndef TREE_HH
#define TREE_HH
#include "element.hh"
#include "node.hh"
class tree
{
  node* root;
  node* S;//straznik drzewa, ktory reprezentuje liscie;
public:
  tree(){root=0;}
  int add(element el);
  int find(element el);
  void leftRotate(node *A);
  void rightRotate(node *A);
};

#endif
