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
  lli a, b, h, k, n, m, q, w, ans = 0, count = 0;
  cin >> n >> m >> q;
  vvi g(n, vi(0, 0));
  vlli c(n);
  rep(i, 0, m)
  {
    cin >> a >> b;
    g[a - 1].eb(b);
    g[b - 1].eb(a);
  }

  rep(i, 0, n)
  {
    cin >> c[i];
  }

  vs s(q + 1);
  repe(i, 0, q)
  {
    getline(cin, s[i]);
  }

  repe(i, 1, q)
  {
    istringstream iss(s[i]);
    string t;
    vs v;
    while (iss >> t)
    {
      v.pb(t);
    }

    k = stoi(v[1]);

    if (stoi(v[0]) == 2)
    {
      cout << c[k - 1] << endl;
      w = stoi(v[2]);
      c[k - 1] = w;
    }

    if (stoi(v[0]) == 1)
    {
      cout << c[k - 1] << endl;

      rep(j, 0, g[k - 1].size())
      {
        c[g[k - 1][j] - 1] = c[k - 1];
        // cout << "g[" << z << "][" << j << "]: " << g[z][j] << endl;
        // g[z][j] = c[k - 1];
        // cout << "changed!: "
        //      << "g[" << k - 1 << "][" << j << "] => " << g[k - 1][j] << endl;
      }
    }
  }
}