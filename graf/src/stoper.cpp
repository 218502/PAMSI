#include "stoper.hh"
using namespace std;
void Stoper::start()
{
  trwanie=clock();
}
void Stoper::stop(){
  czas=(clock() - trwanie) / (double) CLOCKS_PER_SEC;
  }
void Stoper::pokazCzas(){
    cout<<"Czas trwania: "<<czas<<endl;
  }
