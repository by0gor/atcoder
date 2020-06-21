// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
// Q. 条件判定の問題。各場合ごとのif文をやるだけ。
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
//   lli a, b, c, h, k, n, w, ans = 0, count = 0;
//   string s, t;
//   cin >> n >> a >> b;
//   cin >> s;
//   rep(i, 0, n)
//   {
//     if (s[i] == 'a' && count < a + b)
//     {
//       count++;
//       cout << "Yes" << endl;
//     }
//     else if (s[i] == 'b' && count < a + b && ans < b)
//     {
//       count++;
//       ans++;
//       cout << "Yes" << endl;
//     }
//     else if (s[i] == 'c')
//     {
//       cout << "No" << endl;
//     }
//     else
//     {
//       cout << "No" << endl;
//     }
//   }
// }

// B - 仲良しうさぎ
// https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
// Q.各インデックスに入力されたインデックスの番号がそれぞれで一致しているペア数を出力。
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
  lli c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> n;
  vlli a(n);
  rep(i, 0, n)
  {
    cin >> a[i];
  }
  rep(i, 0, n)
  {
    if (a[a[i] - 1] == i + 1)
    {
      count++;
    }
  }

  cout << count / 2 << endl;
}