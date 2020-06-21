// C - Walk on Multiplication Table
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
const lli MOD = 1000000007; //10^9+7
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
  lli a, b, c, h, k, n, w, ans = LINF, count = 0;
  string s, t;
  cin >> n;
  // vi d;
  if (is_prime(n))
  {
    cout << n - 1 << "\n";
    return 0;
  }
  // const auto &res = prime_factorize(N);
  // cout << N << ":";
  // for (auto p : res)
  // {
  //   for (int i = 0; i < p.second; ++i)
  //     cout << " " << p.first;
  // }
  // cout << endl;

  // do
  // {
  //   rep(i, 0, d.size() - 1)
  //   {
  //     rep(j, 0, d.size() - 1)
  //     {
  //       ans = min(ans, d[])
  //     }
  //   }
  // } while (next_permutation(ALL(d)));
  repe(i, 1, sqrt(n))
  {
    if (n % i == 0)
    {
      a = i;
      b = n / i;
      ans = min(ans, a + b - 2);
    }
  }
  cout << ans << "\n";
}

// https://atcoder.jp/contests/abc144/tasks/abc144_b
// 九九、多重ループで判定。

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int count = 0;
//   for (int i = 1; i < 10; i++)
//   {
//     for (int j = 1; j < 10; j++)
//     {
//       if (n == i * j)
//       {
//         count += 1;
//       }
//     }
//   }
//   if (count != 0)
//   {
//     cout << "Yes" << endl;
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }