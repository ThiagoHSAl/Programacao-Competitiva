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
    int n,i,contador=0,elemento;
    cin>>n;
    vector<int> v(200001,0);
    for(i=0;i<n;i++)
        {
          cin>>elemento;
            v[elemento]++;
        }
     for(i=0;i<200001;i++)
         {
           v[i]/=2;
           contador+=v[i];
         }
       cout<<contador/2;           
}