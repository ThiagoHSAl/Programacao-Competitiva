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
 
string caracteres="AHIMOTUVWXY";
bool check (string mirror, int m){
    int i,l,r,palindromo=0;
    string check;
    if(m>mirror.size())
        return false;
    for(i=0;i<=mirror.size()-m;i++)
       {
          l=i;
          r=i+m-1;
          palindromo=1;
           while(l<r){
               if(mirror[l]!=mirror[r]){
                   palindromo=0;
                   break;
               }
               l++;
               r--;
           }
            if(palindromo){
                check=mirror.substr(i,m);
                if(check.find_first_not_of(caracteres) == string::npos)
                    return true;
            }
           }
      return false;
}
int main(){_
 
  int l,r,m,i,t,ans;
  string mirror;
  cin>>t;
  while(t--){
  cin>>mirror;
  ans=0;
  l=1;
  r=mirror.size();
  while(l<=r){
      m=(l+r)/2;
      if(!check(mirror,m)&&!check(mirror,m+1))
          r=m-1;
      else{
          ans=m;
          l=m+1;
      }
  }
  cout<<ans<<endl;
}
}