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
    string game;
    int i,contador=0;
    cin>>game;
    for(i=1;i<game.length();i++)
    {
        if(game[i]==game[i-1])
        {
            contador++;
            game.erase(i-1,2);
            i=0;
        }
    }
    if(contador%2==0)
    cout<<"No";
    else
    cout<<"Yes";
    return 0;
}