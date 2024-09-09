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
 
bool check(vector<int> del, string have, string want, int m)
{
    int i,j=0,t1,t2;
    bool check=false;
    for(i=0;i<m;i++)
        have[del[i]]='#';
    have.erase(remove(have.begin(),have.end(),'#'),have.end());
    t1=have.length();
    t2=want.length();
    for(i=0;i<t1;i++)
        {
            if(have[i]==want[j])
                j++;
            if(j==t2)
                {
                    check=true;
                    break;
                }
        }
    return check;
}
int main(){_
    int i,t,l,r,m;
    string have,want;
    cin>>have>>want;       
    t=have.length();
    vector<int> del(t);
    for(i=0;i<t;i++)
    {
      cin>>del[i];
      del[i]--;
    }
    l=0;
    r=t;
    while(l<=r)
    {
        m=(l+r)/2;
        if(check(del,have,want,m))
            l=m+1;
        else
            r=m-1;
    }    
    cout<<r;            
    return 0;