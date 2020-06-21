// C - City Savers
// https://atcoder.jp/contests/abc135/tasks/abc135_c
// Q.多重if文はmin関数等で処理しましょう
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
#define pb push_back
#define eb emplace_back
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
  lli c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> n;
  vlli a(n + 1), b(n);
  rep(i, 0, n + 1)
  {
    cin >> a[i];
  }
  rep(i, 0, n)
  {
    cin >> b[i];
  }
  rep(i, 0, n)
  {
    //   if (a[i] - b[i] <= 0)
    //   {
    //     ans += a[i];
    //     // cout << i << " " << a[i] << " " << b[i] << endl;

    //     b[i] = abs(a[i] - b[i]);
    //     a[i] = 0;
    //     if (a[i + 1] - b[i] <= 0)
    //     {
    //       // cout << a[i + 1] << "   " << b[i] << endl;
    //       ans += a[i + 1];
    //       b[i] = abs(a[i + 1] - b[i]);
    //       a[i + 1] = 0;
    //     }
    //     else
    //     {
    //       // cout << i << " " << a[i + 1] << " " << b[i] << endl;
    //       ans += b[i];
    //       a[i + 1] -= b[i];
    //       b[i] = 0;
    //     }
    //   }
    //   else
    //   {
    //     ans += b[i];
    //     a[i] -= b[i];
    //     b[i] = 0;
    //   }

    ll c = min(a[i], b[i]);
    b[i] -= c;
    a[i] -= c;
    ans += c;
    c = min(a[i + 1], b[i]);
    b[i] -= c;
    a[i + 1] -= c;
    ans += c;
  }
  cout << ans << endl;
}

// https: //atcoder.jp/contests/abc135/tasks/abc135_b
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n, ans = 0;
//   cin >> n;
//   vector<int> p(n);
//   vector<int> q(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> p.at(i);
//     q.at(i) = i + 1;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (p.at(i) != q.at(i))
//       ans++;
//   }
//   if (ans > 2)
//   {
//     cout << "NO" << endl;
//   }
//   else
//   {
//     cout << "YES" << endl;
//   }
// }