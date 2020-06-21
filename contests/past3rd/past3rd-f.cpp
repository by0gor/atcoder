#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const long double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using P = pair<lli, lli>;
// vector<P> vp;
// vp.emplace_back(a[i], b[i]);
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
// aよりもbが大きいならばaをbで更新する(更新されたならばtrueを返す)
template <typename T>
bool chmax(T &a, const T &b)
{
  if (a < b)
  {
    a = b; // aをbで更新
    return true;
  }
  return false;
}
// aよりもbが小さいならばaをbで更新する(更新されたならばtrueを返す)
template <typename T>
bool chmin(T &a, const T &b)
{
  if (a > b)
  {
    a = b; // aをbで更新
    return true;
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli h, n, w, count = 0, tmp = 0, numnum = 0;
  string ans = "", x, y = "", z = "", a, b, c, res;
  cin >> n;
  vs s(n);
  vector<char> t;
  map<char, lli> g;
  rep(i, 0, n)
  {
    cin >> s[i];
    x = s[i];
    y += x;
  }

  if (n == 1)
  {
    ans = y[0];
    cout << ans << endl;
    return 0;
  }

  rep(j, 0, y.size())
  {
    g[y[j]]++;
  }
  for (auto z : g)
  {
    char ch = z.first;
    lli num = z.second;
    cout << "z.first: " << z.first << " z.second: " << z.second << endl;

    if (num >= n-1 && count < n)
    {
      ans = ch;
      count += 2;
      tmp++;
      numnum = max(numnum, num);
      t.pb(ch);
    }
    // else
    // {
    //   tmp = 0;
    // }
  }
  // cout << "tmp: " << tmp << endl;

  if (tmp < n / 2 && numnum < n)
  {
    cout << -1 << endl;
    return 0;
  }

  // cout << "ans before: " << ans << endl;
  a = ans;
  REV(a);
  if (numnum >= n)
  {
    rep(i, 0, n)
    {
      res += ans;
    }
    cout << res << endl;
    return 0;
  }
  if (n % 2 == 0)
  {
    res = ans + a;
  }
  else
  {
    res = ans + y[1] + a;
  }

  if (ans == "")
  {
    cout << -1 << endl;
  }
  else
  {
    cout << res << endl;
  }
  // cout << "res: " << res << endl;
  // cout << "t: " << t << endl;
}