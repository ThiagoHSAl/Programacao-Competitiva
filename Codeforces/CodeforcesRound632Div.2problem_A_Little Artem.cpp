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
    int n,m,i,j,k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
      cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 && j==m-1)
                cout<<"W";
            else
                cout<<"B";
        }
      cout<<endl;
    }
    }
}