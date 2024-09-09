#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int m,n,soma,i,j,check=0;
    cin>>n;
    vector<int> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    cin>>m;
    vector<int> v2(m);
    for(i=0;i<m;i++)
        cin>>v2[i];
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
          if(check)
            break;
        soma=v1[i]+v2[j];
        if((find(v1.begin(),v1.end(),soma)==v1.end())&&(find(v2.begin(),v2.end(),soma)==v2.end()))
        {
            cout<<v1[i]<<" "<<v2[j]<<endl;
            check=1;
            break;
        }
      }
    }
return 0;
}