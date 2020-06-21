#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define _GLIBCXX_DEBUG
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
#define ppb pop_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli c, k, n, x, y, xx, yy, w, count = 0;
  long double a, b, h, m, sh, lo, ang, ans, d, e, f, g;
  string s, t;
  cin >> a >> b >> h >> m;

  sh = (h * 30) + m / 2;
  lo = m * 6;
  ang = abs(lo - sh);
  ang = min(ang, (360 - ang));
  // cout << "ang: " << ang << endl;

  f = (PI * (ang)) / 180.0;
  long double sss = sin(f);
  long double ccc = cos(f);
  // cout << "sss: " << sss << endl;
  // printf("%.10f\n", ccc);

  // ans = a / sss;
  // cout << ans << endl;
  // ans = b / sss;
  // cout << ans << endl;

  // ans = a / ccc;
  // cout << ans << endl;

  ans = (a * a) + (b * b) - (2 * a * b * ccc);
  ans = sqrt(ans);
  // cout << ans << endl;
  printf("%.15Lf\n", ans);

  // vlli d(n);
  // rep(i, 0, n)
  // {
  //   cin >> d[i];
  // }
  // ans = a * a + b * b;
  // x = a * cos(2 * PI / 12 * (3 - h));
  // y = a * sin(2 * PI / 12 * (3 - h));
  // cout << "x: " << x << endl;
  // cout << "y: " << y << endl;
  // xx = b * cos(2 * PI / 60 * (15 - m));
  // yy = b * sin(2 * PI / 60 * (15 - m));

  // cout << "xx: " << xx << endl;
  // cout << "yy: " << yy << endl;

  // ans = (abs(xx) - abs(x)) * (abs(xx) - abs(x)) + (abs(yy) - abs(y)) * (abs(yy) - abs(y));

  // cout << ans << endl;

  // ans = sqrt(ans);
  // cout << "after: " << ans << endl;

  // long double tan = b / a;
  // long double cos = tan * tan + 1;
  // cos = pow(cos, -1);

  // cout << "tan: " << tan << endl;
  // cout << "cos: " << cos << endl;
}