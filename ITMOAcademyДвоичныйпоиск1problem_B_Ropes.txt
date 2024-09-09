#include <iostream>
#include <vector>
#include <iomanip>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
int verify(const vector<double>& ropes, int n, double m) {
    int q = 0;
    for (int i = 0; i < n; i++) {
        q += (int)(ropes[i] / m);  // Número de pedaços que podem ser cortados com comprimento m
    }
    return q;
}
 
int main() { _
    int n, k;
    cin >> n >> k;
 
    vector<double> ropes(n);
    for (int i = 0; i < n; i++) {
        cin >> ropes[i];
    }
 
    double l = 0, r = 1e7, m;
    double eps = 1e-7;
 
    while (r - l > eps) {
        m = (l + r) / 2;
        if (verify(ropes, n, m) >= k) {
            l = m;  // Pode tentar um comprimento maior
        } else {
            r = m;  // Deve tentar um comprimento menor
        }
    }
 
    cout << fixed << setprecision(6) << l << endl;
 
    return 0;
}