// C - Go to School
// https://atcoder.jp/contests/abc142/tasks/abc142_c
// Q. 入力を小さい順に並べ、その入力がなされたインデックスを出力。
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
  lli b = 0, c, h, k, n, w, ans = 0, count = 0, tmp = 0;
  string s, t;
  cin >> n;
  vlli a(n), e(n);
  rep(i, 0, n)
  {
    cin >> a[i];
  }
  rep(i, 0, n)
  {
    e[a[i] - 1] = i + 1;
  }
  rep(i, 0, n)
  {
    cout << e[i] << ' ';
  }
  cout << endl;
}
// https://atcoder.jp/contests/abc142/tasks/abc142_b
// Q. やるだけ
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n, k, count = 0;
//   cin >> n >> k;
//   vector<int> h(n);
//   for (int i = 0; i < n; i++)
//     cin >> h[i];
//   for (int i = 0; i < n; i++)
//     if (h[i] >= k)
//       count++;
//   cout << count << endl;
// }