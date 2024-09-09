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
    int n,i,j,k,check,tamanho;
    cin>>n;
    for(i=0;i<n;i++)
{
    cin>>tamanho;
    vector<int> v1(tamanho),v2(tamanho);
    for(j=0;j<tamanho;j++)
        cin>>v1[j];
    sort(v1.begin(),v1.end());
    j=0;
    k=tamanho-1;
    check=0;
        while(check<tamanho)
        {
            v2[check]=v1[j];
            check++;
            j++;
            v2[check]=v1[k];
            check++;
            k--;
        }
    k=0;
    for(j=tamanho-1;j>=0;j--)
        {
            v1[k]=v2[j];
            k++;
        }
    for(j=0;j<tamanho;j++)
        cout<<v1[j]<<" ";
    cout<<endl;
}   
    return 0;
}