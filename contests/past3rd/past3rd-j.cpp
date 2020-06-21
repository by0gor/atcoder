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
  lli h, k, n, m, w, ans = 0, count = 0, tmp = 0, res = 0;
  string s, t;
  cin >> n >> m;
  // map<lli, lli> c;
  vlli b(n, 0), d(INF, 0);
  // rep(i, 0, n)
  // {
  //   c[i] = 0;
  // }
  vlli a(m);
  rep(i, 0, m)
  {
    cin >> a[i];
    if (a[i] > tmp)
    {
      tmp = a[i];
      d[i] = res;
      res++;
      
    }
    else
    {
      res--;
    }
  }
  b[0] = a[0];
  h = a[0];
  rep(i, 0, m)
  {
    // for (auto it : c)
    // {
    //   // cout << "before--- " << it.first << ": " << it.second << endl;
    //   lli num = it.second; // it.first が it.second 個ある

    //   if (num < a[i])
    //   {
    //     c[it.first] = a[i];
    //     // cout << it.first << ": " << c[it.first] << endl;
    //     cout << it.first + 1 << endl;
    //     count++;
    //     break;
    //   }
    // }

    rep(j, 0, n)
    {
      if (b[j] < a[i])
      {
        b[j] = a[i];
        cout << j + 1 << endl;
        count++;
        break;
      }
    }
    // if (h != a[i])
    // {
    //   h = max(h, a[i]);
    // }
    // else
    // {
    // }

    // if (h == a[i])
    // {
    //   cout << ans + 1 << endl;
    // }
    // else
    // {
    //   ans++;
    //   cout << ans + 1 << endl;
    // }

    if (count == 0)
    {
      cout << -1 << endl;
    }
    count = 0;
  }
}