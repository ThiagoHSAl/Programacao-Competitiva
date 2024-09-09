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
 
int t;
    cin >> t;
 
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
 
        // Usar Void Absorption enquanto valer a pena (a partir de HP > 40)
        while (n > 0 && x > 20) {
            x = x / 2 + 10;
            n--;
        }
 
        // Usar Lightning Strike para finalizar o dragão, se possível
        x -= m * 10;
 
        // Se o HP do dragão for 0 ou menos, ele foi derrotado
        if (x <= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
 
}