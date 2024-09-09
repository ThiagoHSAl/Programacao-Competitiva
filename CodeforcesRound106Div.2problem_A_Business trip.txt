#include<bits/stdc++.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    int i,k,grow=0,count=0;
    vector<int> meses(12);
    cin>>k;
    for(i=0;i<12;i++)
        {
         cin>>meses[i];           
        }
    sort(meses.begin(),meses.end(),greater<>());
    for(i=0;i<12;i++)
        {
          if(grow>=k)
              break;
            grow+=meses[i];
            count++;
        }
    if(grow>=k)
        cout<<count<<endl;
    if(grow<k)
        cout<<"-1"<<endl;
    return 0;
}