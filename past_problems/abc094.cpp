// B - Toll Gates
// https://atcoder.jp/contests/abc094/tasks/abc094_b
// 大小比較と判定ごとの計算。ちょい複雑。
#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define INF 1000000000000 //10^12
#define MOD 10000007      //10^9+7
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using vs = vector<string>;
using ll = long long;
// vector入力
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (T &x : vec)
    is >> x;
  return is;
}
// vector出力
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
  // os << '{';
  for (int i = 0; i < vec.size(); i++)
  {
    os << vec[i] << (i + 1 == vec.size() ? "" : "");
  }
  // os << '}';
  return os;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli b, c, h, k, n, m, x, w, ans = 0, count = 0, xd = 0, xa = 0, count2 = 0;
  string s, t;
  cin >> n >> m >> x;
  vi a(m);
  rep(i, 0, m)
  {
    cin >> a[i];
  }
  rep(i, 0, m)
  {
    b = i;
    if (a[i] < x)
    {
      xd++;
    }
    else
    {
      xa++;
    }
  }
  // cout << xd << "  " << xa << endl;
  rep(i, 0, m)
  {
    if (xd <= xa)
    {
      rep(j, 1, n)
      {
        if (a[i] == j && a[i] < x)
          count++;
      }
    }
    else
    {
      rep(j, 1, n)
      {
        if (a[i] == j && a[i] > x)
          count2++;
      }
    }
  }
  cout << max(count, count2) << endl;
}