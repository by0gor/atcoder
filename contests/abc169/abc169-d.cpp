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
  sort(ret.begin(), ret.end()); // 昇順に並べる
  return ret;
}

bool is_prime(lli N)
{
  if (N == 1)
    return false;
  for (lli i = 2; i * i <= N; ++i)
  {
    if (N % i == 0)
      return false;
  }
  return true;
}

vector<pair<long long, long long>> prime_factorize(long long N)
{
  vector<pair<long long, long long>> res;
  for (long long a = 2; a * a <= N; ++a)
  {
    if (N % a != 0)
      continue;
    long long ex = 0; // 指数

    // 割れる限り割り続ける
    while (N % a == 0)
    {
      ++ex;
      N /= a;
    }

    // その結果を push
    res.push_back({a, ex});
  }

  // 最後に残った数について
  if (N != 1)
    res.push_back({N, 1});
  return res;
}

set<lli> Eratosthenes(const lli N)
{
  vector<bool> is_prime(N + 1);
  for (lli i = 0; i <= N; i++)
  {
    is_prime[i] = true;
  }
  set<lli> P;
  for (lli i = 2; i <= N; i++)
  {
    if (is_prime[i])
    {
      for (lli j = 2 * i; j <= N; j += i)
      {
        is_prime[j] = false;
      }
      P.insert(i);
    }
  }
  return P;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a = 0, b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n;
  vlli d;

  set<lli> e = {4, 8, 16, 32, 64, 128, 256, 512, 9, 27, 81, 243, 729, 25, 125, 625, 49, 343, 121, 1000000007};
  if (n == 1)
  {
    cout << 0 << endl;
    return 0;
  }
  else if (is_prime(n))
  {
    cout << 1 << endl;
    return 0;
  }
  set<lli> f = Eratosthenes(n);
  d = divisor(n);
  // n %= MOD;
  c = n;
  // rep(i, 0, 2000100)
  // {
  //   if (is_prime(i))
  //   {
  //     e.insert(i);
  //   }
  // }
  rep(i, 0, 20)
  {
    a = pow(2, i);
    f.insert(a);
    a = pow(3, i);
    f.insert(a);
  }
  rep(i, 0, 10)
  {
    a = pow(5, i);
    f.insert(a);
    a = pow(7, i);
    f.insert(a);
  }
  rep(i, 0, 7)
  {
    a = pow(11, i);
    f.insert(a);
    a = pow(13, i);
    f.insert(a);
    a = pow(17, i);
    f.insert(a);
    a = pow(19, i);
    f.insert(a);
  }
  rep(i, 0, 5)
  {
    a = pow(23, i);
    f.insert(a);
    a = pow(29, i);
    f.insert(a);
    a = pow(31, i);
    f.insert(a);
    a = pow(37, i);
    f.insert(a);
    a = pow(41, i);
    f.insert(a);
    a = pow(43, i);
    f.insert(a);
    a = pow(47, i);
    f.insert(a);
  }
  rep(i, 0, 3)
  {
    a = pow(53, i);
    f.insert(a);
    a = pow(59, i);
    f.insert(a);
    a = pow(61, i);
    f.insert(a);
    a = pow(67, i);
    f.insert(a);
    a = pow(71, i);
    f.insert(a);
    a = pow(73, i);
    f.insert(a);
    a = pow(79, i);
    f.insert(a);
    a = pow(83, i);
    f.insert(a);
    a = pow(89, i);
    f.insert(a);
    a = pow(97, i);
    f.insert(a);
  }
  rep(i, 0, d.size())
  {
    if (f.count(d[i]) && (n % d[i] == 0) && d[i] != 1)
    {
      n /= d[i];
      count++;
      cout << d[i] << ": " << n << endl;
    }
    if (n <= 1 || d[i] > n)
    {
      break;
    }
  }
  cout << count << endl;
  // cout << d << endl;
  // cout << e << endl;

  // const auto &res = prime_factorize(c);
  // // cout << N << ":";
  // for (auto p : res)
  // {
  //   for (int i = 0; i < p.second; ++i)
  //   {
  //     ans++;
  //     cout << " " << p.first;
  //   }
  // }
  // cout << ans << endl;
}
// 997764507000
// 1000000000000
// 999999999999