#ifndef TREE_HH
#define TREE_HH
#include "element.hh"
#include "node.hh"
class tree
{
  node* root;
  node S;//straznik drzewa, ktory reprezentuje liscie;
public:
  tree(){S.black=1;S.up=&S;S.left=&S;S.right=&S;root=&S;}
  int add(element el);
  int find(element el);
  void leftRotate(node *A);
  void rightRotate(node *A);
};

#endif
