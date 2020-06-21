// C - Average Length
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
using vp = vector<P>;
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

int origin(lli z)
{
  lli xx = 1;
  repe(i, 1, z)
  {
    xx = xx * i;
  }
  return xx;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, k, n, w, ans = 0, count = 0;
  long double res = 0;
  string s, t;
  cin >> n;
  vlli x(n), y(n), z;
  pair<lli, lli> d[8];
  rep(i, 0, n)
  {
    cin >> x[i] >> y[i];
    d[i].first = x[i];
    d[i].second = y[i];
  }
  long double par = origin(n);
  rep(i, 0, n)
  {
    z.pb(i);
  }
  do
  {
    rep(i, 0, n - 1)
    {
      res += hypot(d[z[i + 1]].second - d[z[i]].second, d[z[i + 1]].first - d[z[i]].first);
    }
  } while (next_permutation(ALL(z)));
  cout << fixed << setprecision(12) << res / par << endl;
}

// https://atcoder.jp/contests/abc145/tasks/abc145_b
// 文字列の部分取得にはsubstr!!
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   string s;
//   cin >> s;
//   string t = s.substr(0, n / 2);
//   string y = s.substr(n / 2, n);
//   if (t == y)
//   {
//     cout << "Yes" << endl;
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }