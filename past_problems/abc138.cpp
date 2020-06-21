// C - Alchemist
// https://atcoder.jp/contests/abc138/tasks/abc138_c
// Q. 入力を足し合わせて2で除算。その最大値を求めよう。ソートして除算での減少分を最小化すればよし。
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
  lli a, b, c, h, k, n, w;
  long double ans = 0, count = 0;
  string s, t;
  cin >> n;
  vi v(n);
  rep(i, 0, n)
  {
    cin >> v[i];
  }
  SORT(v);
  ans = v[0];
  rep(i, 1, n)
  {
    ans += v[i];
    ans /= 2;
  }
  cout << ans << endl;
}

// https: //atcoder.jp/contests/abc138/tasks/abc138_b
// Q.double, printf("%.10lf\n", ans);の使い方、逆数の総和
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   double ans = 0;
//   cin >> n;
//   vector<double> vec(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> vec.at(i);
//     ans += 1 / vec.at(i);
//   }
//   ans = 1 / ans;
//   printf("%.10lf\n", ans);
// }

/* */
// #include <bits/stdc++.h>
// using namespace std;

// 最大公約数(gcd), 最小公倍数(lcm)
// int gcd(int a, int b)
// {
//   if (a < b)
//   {
//     a ^= b;
//     b ^= a;
//     a ^= b;
//   }
//   return b ? gcd(b, a % b) : a;
// }
// int lcm(int a, int b)
// {
//   return a * b / gcd(a, b);
// }

// int main()
// {
//   long long n;
//   double l = 0, m = 0;
//   cin >> n;
//   vector<long long> a(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a.at(i);
//   }
//   if (n == 1)
//   {
//     cout << a.at(0) << endl;
//     return 0;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       l = lcm(a.at(i), a.at(j));
//     }
//     m += l / a.at(i);
//   }
//   printf("%.10lf\n", l / m);
// }