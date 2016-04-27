#ifndef node_hh
#define node_hh
#include <string>
#include "element.hh"
class node
{
  element el;
  node *left;
  node *right;
  node *up;
  int black;//0-czerwony, 1-czarny
  friend class tree;
public:
  node(){el.value=0;el.key=0;black=0;}
  element getel(){return el;}
};

#endif
