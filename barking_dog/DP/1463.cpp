#include <bits/stdc++.h>
using namespace std;

int d[1000002];
int num;

int dp(int n)
{
  for (int i = 2; i <= n; i++)
  {
    d[i] = d[i - 1] + 1;
    if (i % 2 == 0)
      d[i] = min(d[i], d[i / 2] + 1);
    if (i % 3 == 0)
      d[i] = min(d[i], d[i / 3] + 1);
  }
  return d[n];
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  d[1] = 0;
  cin >> num;
  cout << dp(num);
}