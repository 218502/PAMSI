#ifndef stoper_hh
#define stoper_hh
#include <ctime>
#include <iostream>
class Stoper{
  clock_t trwanie;
  double czas;
public:
  void start();
  void stop();
  void pokazCzas();
};
#endif
