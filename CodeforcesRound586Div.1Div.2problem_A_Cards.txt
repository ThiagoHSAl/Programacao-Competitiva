#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
  string deck;
  int tamanho,counter1=0,counter0=0,i;
  cin>>tamanho;
  cin>>deck;
  for(i=0;i<tamanho;i++)
  {
    if(deck[i]=='n')
        counter1++;
  }
  counter0=(tamanho-(counter1*3))/4;
  for(i=0;i<counter1;i++)
    cout<<"1 ";
  for(i=0;i<counter0;i++)
    cout<<"0 ";
return 0;
}