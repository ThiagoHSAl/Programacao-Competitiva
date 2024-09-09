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
double check(vector<double> a, double n, double m, double k){
    int i;
    double sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
            sum1+=a[i]-m;
        if(a[i]<m)
            sum2+=m-a[i];
    }        
   sum1-=sum1*k/100;
   return sum1-sum2; 
}
int main(){_
    double n,k,i,l,r,m,eps=1e-9;
           cin>>n>>k;
    vector<double> a(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    l=a[0];
    r=a[n-1];       
    while(r-l>eps){
        m=(r+l)/2;
        if(check(a,n,m,k)>=0)
            l=m;
        else
            r=m;
    }
           cout<<fixed<<setprecision(9)<<(l+r)/2;
    return 0;
}