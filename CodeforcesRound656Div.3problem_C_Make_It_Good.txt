#include <iostream>
#include <string>
#include<sstream>
#include<fstream>
#include<bits/stdc++.h>
 
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
 
 
int main(){_
  int t,n,i,j;
    cin>>t;
    for(j=0;j<t;j++)
        {
           cin>>n;
           vector<int> v(n);
           for(i=0;i<n;i++)
           cin>>v[i];   
           for(i=n-1;i>=1;i--)
              if(v[i-1]<v[i])
              {
                i-=1;
                break;
              }
           for(i=i;i>=1;i--)
              if(v[i-1]>v[i])
               break;
            cout<<i<<endl; 
        }       
}