#include <iostream>
#include<list>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
 
int main()
{
    long long int t,n,i,j,pmax,nmin,soma;
    cin>>t;
    for(j=0;j<t;j++)
    {
      cin>>n;
      vector<int> v(n);
      soma=0;
      for(i=0;i<n;i++)
          cin>>v[i];
      i=0;
      while(i<n)
      {
          pmax=0;
          while(v[i]>0)
          {
              if(i==n)
                 break;
              if(v[i]>pmax)
                  pmax=v[i];
              i++;
          }
          if(pmax!=0)
          soma+=pmax;
          nmin=-1000000001;
          while(v[i]<0)
          {
              if(i==n)
                break;
              if(v[i]>nmin)
                  nmin=v[i];
              i++;
          }
          if(nmin!=-1000000001)
          soma+=nmin;
      }
      cout<<soma<<endl;
    }
}
