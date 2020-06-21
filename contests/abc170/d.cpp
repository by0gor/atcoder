#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#pragma GCC optimize("Ofast")
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using vvli = vector<vlli>;
using vs = vector<string>;
using vvs = vector<vs>;
using vb = vector<bool>;
using vvb = vector<vb>;
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

/*  divisor(n)
    入力：整数 n
    出力：nのすべての約数
    計算量：O(√n)
*/
vlli divisor(lli n)
{
  vlli ret;
  for (lli i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ret.push_back(i);
      if (i * i != n)
        ret.push_back(n / i);
    }
  }
  // sort(ret.begin(), ret.end()); // 昇順に並べる
  return ret;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n;
  vlli a(n), d, e;
  unordered_set<lli> g, y;
  rep(i, 0, n)
  {
    cin >> a[i];
    g.insert(a[i]);
    y.insert(a[i]);
    e.push_back(a[i]);
  }
  rep(i, 0, n)
  {
    d = divisor(a[i]);

    rep(j, 0, d.size())
    {
      rep(k, 0, e.size())
      {
        if (i != k && d[j] == e[k])
        {
          y.erase(a[i]);
          break;
        }
      }
    }
  }
  if (n == 1)
  {
    cout << 1 << endl;
  }
  else if (g.size() == 1)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << y.size() << endl;
  }
}