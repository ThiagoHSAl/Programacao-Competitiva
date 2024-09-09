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

 int n,mergulho1,mergulho2,fita,i,invalid=0;
 long long int distancia=0;
 mergulho1=-1;
 cin>>n>>fita;
 for(i=0;i<n;i++)
{
    cin>>mergulho2;
    if(min(mergulho2,fita-mergulho2)>=mergulho1)
    {
        distancia+=min(mergulho2,fita-mergulho2);
        mergulho1=min(mergulho2,fita-mergulho2);
    }

    else if(max(mergulho2,fita-mergulho2)>=mergulho1)
    {
      distancia+=max(mergulho2,fita-mergulho2);
      mergulho1=max(mergulho2,fita-mergulho2);
    }
    else
    {
        invalid=1;
        break;
    }

}
if(invalid==0)
cout<<distancia;
else
    cout<<"-1";
}
