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
 
    int n,h,mh,contador=0,i;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>mh;
        if(h>=mh)
            contador++;
    }
    cout<<contador;
}