// https://atcoder.jp/contests/abc075/tasks/abc075_b
#include <bits/stdc++.h>
using namespace std;
int solve()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, h, w, sx, sy, gx, gy, ans = 0, count = 0;
  const int dx[] = {1, 0, -1, 1, -1, 0, 1, -1};
  const int dy[] = {1, 1, 1, 0, 0, -1, -1, -1};
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }
  sx = 0;
  sy = 0;
  gx = w;
  gy = h;

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
    }
  }

  cout << n << endl;
  return 0;
}
signed main()
{
  solve();
}