#include "IRunnable.hh"
#include <iostream>
#include "stoper.hh"
#include "GraphSearch.hh"

using namespace std;

int main()
{
  int powt,elem;
  powt=10;
  elem=2;
  int rozmiary[2]= {10, 100};
  Stoper czas;
  IRunnable* test= new GraphSearch();
  double srednia;
  for (int j = 0; j< elem; ++j)
   {
    for(int i = 0; i < powt; ++i)
      {
       test->prepare(rozmiary[j]);
       czas.start();
       if(test->run())
	 {
          czas.stop();
          czas.pokazCzas();
	 }
       else
        cout << "NOK"<<endl;
       }
    cout <<"*****END*****"<< endl;
   }
}
