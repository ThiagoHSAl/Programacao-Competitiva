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
  int m,n,i,j,costa=0;
  cin>>m>>n;
  vector<vector<char>> nlogonia(m,vector<char>(n));
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>nlogonia[i][j];
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        if(nlogonia[i][j]=='#')
        if((i!=0 && nlogonia[i-1][j]=='.') || (i!=m-1 && nlogonia[i+1][j]=='.') || (j!=0 && nlogonia[i][j-1]=='.') || (j!=n-1 && nlogonia[i][j+1]=='.')||i==0||j==0||i==m-1||j==n-1)
        costa++;
    cout<<costa;
}
