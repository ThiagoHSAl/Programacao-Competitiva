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
 
int main()
{_
 
int t,a,b,i,n,j;
    cin >> t;
    for(i=0;i<t;i++)
    {
     cin>>n;
     a=0;
     b=0;
      for(j=1;j<=n/2;j++)
      {
          a+=pow(2,n-j);
      }
 
      for(j=1;j<=((n/2)-1);j++)
      {
          b+=pow(2,j);
      }
      b+=pow(2,n);
      cout<<b-a<<endl;
    }
 
}