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
 
bool possible(int d, string path)
{
    int s,i,cmax=0,c=0;
    s=path.length();
    for(i=0;i<s;i++)
    {
        c=0;
       while(path[i]=='L' && i<=s-1)
       {
           c++;
           i++;
       }
       if(c>cmax)
        cmax=c;
    }
    if(d>cmax)
        return 1;
    else
        return 0;
}
int main()
{_
  int t,l,r,m,i;
  string path;
  cin>>t;
  for(i=0;i<t;i++)
  {
   cin>>path;
   l=0;
   r=2e5+10;
   while(l<r)
  {
      m=(l+r)/2;
      if(!possible(m,path))
      l=m+1;
      else
      r=m;
  }
     cout<<l<<endl;
  }
  return 0;
}