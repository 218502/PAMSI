#ifndef stoper_hh
#define stoper_hh
#include <ctime>
#include <iostream>
#include "istoper.hh"

class Stoper :public iStoper
{
  clock_t trwanie;
  double czas;
public:
  void start();
  void stop();
  void pokazCzas();
};
#endif
