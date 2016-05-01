#ifndef node_hh
#define node_hh

class node
{
public:
  int element;
  node* nastepny;
  friend class List;
};

#endif
