#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n, ans(0);
  cin >> n;
  stack<int> st;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    if (tmp == 0)
      st.pop();
    else
      st.push(tmp);
  }

  while (!st.empty())
  {
    ans += st.top();
    st.pop();
  }

  cout << ans;
}