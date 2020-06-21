// C - Count Order
// https://atcoder.jp/contests/abc150/tasks/abc150_c
// Q. 順列全列挙。
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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, k, n, w, ans = 0, ans2 = 0, count = 0;
  string s, t;
  cin >> n;
  vlli p(n), q(n), z;
  rep(i, 0, n)
  {
    cin >> p[i];
  }
  rep(i, 0, n)
  {
    cin >> q[i];
  }
  repe(i, 1, n)
  {
    z.pb(i);
  }
  do
  {
    count++;
    if (p == z)
    {
      ans = count;
    }
    if (q == z)
    {
      ans2 = count;
    }
  } while (next_permutation(ALL(z)));
  cout << abs(ans - ans2) << "\n";
}

// https://atcoder.jp/contests/abc150/tasks/abc150_b
// Q. 入力内にABC がいくつ含まれるかを求める

// substr
// 文字列を部分的に取得する
// https://cpprefjp.github.io/reference/string/basic_string/substr.html

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   int ans = 0;
//   string s;
//   cin >> n >> s;
//   for (int i = 0; i < n; i++)
//   {
//     if (s.substr(i, 3) == "ABC")
//       ans++;
//   }
//   cout << ans << endl;
// }