#ifndef SORT_HH
#define SORT_HH

void Sortowanie(int* wsk, int left, int right)
{
    int i = left;
    int j = right;
    int x = wsk[(left+right)/2];
    do
    {
        while(wsk[i]<x)
             i++;
       
        while(wsk[j]>x)
             j--;
       
        if(i<=j)
        {
            swap(wsk[i], wsk[j]);
            i++;
            j--;
        }
    } while(i<=j);
   
    if(left<j)
      Sortowanie( wsk, left, j );

    if( right > i )
      Sortowanie( wsk, i, right );
   
}
#endif
