#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
// const lli MOD = 1000000007; //10^9+7
const long double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
#define pb push_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using P = pair<lli, lli>;
// vector<P> vp;
// vp.emplace_back(a[i], b[i]);
using vs = vector<string>;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORR(i, a, b) for (int i = (b)-1; i >= (a); --i)
constexpr ll MOD = 1000000007ll;
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return 1;
  }
  return 0;
}

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

constexpr int MAX = 510000;

ll fact[MAX], fact_inv[MAX];

// 繰り返し二乗法
ll power(ll a, ll b)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = res * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}

ll comb(ll n, ll r)
{
  return (fact[n] * fact_inv[r]) % MOD * fact_inv[n - r] % MOD;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, k, n, m, w, ans = 0, count = 0;
  string s, t;
  cin >> n >> m >> k;

  fact[0] = 1;
  // 階乗の計算
  REP(i, n)
  fact[i + 1] = fact[i] * (i + 1) % MOD;
  fact_inv[n] = power(fact[n], MOD - 2);
  // 逆元の計算
  FORR(i, 0, n)
  fact_inv[i] = fact_inv[i + 1] * (i + 1) % MOD;
  // nCrの計算
  cout << "6C3: " << comb(n, m) << '\n';
  // cout << "666C390: " << comb(666, 390) << '\n';
}