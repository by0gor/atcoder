// C - Energy Drink Collector
// https://atcoder.jp/contests/abc121/tasks/abc121_c
// Q.Pair型でのソート。めっちゃ便利。。
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
  lli h, k, n, m, w, ans = 0, count = 0;
  string s, t;
  cin >> n >> m;
  vlli a(n), b(n);
  using P = pair<lli, lli>;
  vector<P> vp;
  rep(i, 0, n)
  {
    cin >> a[i] >> b[i];
    vp.emplace_back(a[i], b[i]);
  }
  SORT(vp);
  for (auto p : vp)
  {
    w = p.first;
    k = p.second;
    count = min(m, k);
    ans += w * count;
    m -= k;
    if (m <= 0)
    {
      cout << ans << endl;
      return 0;
    }
  }
}

// B - Can you solve this?
// https://atcoder.jp/contests/abc121/tasks/abc121_b
// Q. 入力1と入力2の各行を足し合わせ0より大きい場合を計測。1<=n,m<=20なのでやるだけ。
// #include <bits/stdc++.h>
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define rt sqrt
// using namespace std;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vs = vector<string>;
// using ll = long long;
// // vector入力
// template <typename T>
// istream &operator>>(istream &is, vector<T> &vec)
// {
//   for (T &x : vec)
//     is >> x;
//   return is;
// }
// // vector出力
// template <typename T>
// ostream &operator<<(ostream &os, vector<T> &vec)
// {
//   // os << '{';
//   for (int i = 0; i < vec.size(); i++)
//   {
//     os << vec[i] << (i + 1 == vec.size() ? "" : "");
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli c, h, k, m, n, w, ans = 0, count = 0;
//   string s, t;
//   cin >> n >> m >> c;
//   vi a(m), b(m);
//   rep(i, 0, m)
//   {
//     cin >> b[i];
//   }
//   rep(i, 0, n)
//   {
//     ans = 0;
//     rep(j, 0, m)
//     {
//       cin >> a[j];
//       ans += a[j] * b[j];
//     }
//     if (ans + c > 0)
//       count++;
//   }
//   cout << count << endl;
// }