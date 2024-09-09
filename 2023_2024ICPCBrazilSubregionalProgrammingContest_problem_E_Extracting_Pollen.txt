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
#define MAXN 1000005
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
 
int n, k;
int v[MAXN];
  int nxt[MAXN];
  int freq[MAXN];
 
int pollen(int x)
{
  int ans = 0;
  while (x > 0)
  {
    ans += (x % 10);
    x /= 10;
  }
  return ans;
}
int main()
{_
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    freq[v[i]]++;
  }
  for (int i = 0; i < MAXN; i++)
  {
    nxt[i] = i - pollen(i);
  }
  int ans = 0;
  for (int i = MAXN - 1; i > 0; i--)
  {
    k -= freq[i];
    freq[nxt[i]] += freq[i];
    if (k <= 0)
    {
      ans = i;
      break;
    }
  }
  cout << pollen(ans) << endl;
}