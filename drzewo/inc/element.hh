#ifndef ELEMENT_HH
#define ELEMENT_HH

class element
{
public:
  int key;
  int value;
  int color;//jezeli color=0 element jest czarny, jezeli 1 to czerwony
  element(){key=0;value=0;color=0;}
};


#endif
