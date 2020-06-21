// C - Next Prime
// https://atcoder.jp/contests/abc149/tasks/abc149_c
// Q.n以上の最小の素数。
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
bool is_prime(long long N)
{
  if (N == 1)
    return false;
  for (long long i = 2; i * i <= N; ++i)
  {
    if (N % i == 0)
      return false;
  }
  return true;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> n;
  rep(i, n, 100010)
  {
    if (is_prime(i))
    {
      cout << i << endl;
      return 0;
    }
  }
}

// https://atcoder.jp/contests/abc149/tasks/abc149_b
// Q. 引き算。TLE回避する方法。

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   long long a, b, k;
//   cin >> a >> b >> k;
//   cout << max(0LL, (a - k)) << ' ' << max(0LL, (b - max(0LL, (k - a)))) << endl;
// }