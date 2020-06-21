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

// struct Data
// {
//   lli ex_pos; // 元の位置
//   lli num;    // 実際のデータ
// };

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli c, e, f, h, k, n, m, M, w, r1, r2, r3, ans = 0, ct = 0, round = 0;
  string s, t;
  cin >> n >> m;
  vlli a(n), b(n), mi;
  vector<vlli> d(n), flag(n, vlli(3, 0));
  vlli z(n), rz(n);
  M = m;
  rep(i, 0, n)
  {
    cin >> a[i];
    z[i] = i;
    rz[i] = i;
  }
  rep(i, 0, n)
  {
    cin >> b[i];
  }
  cin >> r1 >> r2 >> r3;
  rep(i, 0, n)
  {
    c = a[i] * b[i];
    e = a[i] * (b[i] * b[i]);
    f = a[i] * (b[i] * b[i] * b[i]);
    d[i].pb(c);
    d[i].pb(e);
    d[i].pb(f);
    // z[i].num = f;
  }
  // count = d[0][2];
  rep(i, 0, n)
  {
    w = d[i][2];
    mi.pb(w);
  }
  sort(z.begin(), z.end(), [&mi](lli i1, lli i2) {
    return mi[i1] < mi[i2];
  });
  sort(rz.begin(), rz.end(), [&mi](lli i1, lli i2) {
    return mi[i1] < mi[i2];
  });
  REV(rz);
  while (round <= 2)
  {
    if (round == 0)
    {
      rep(i, 0, z.size())
      {
        if (m > 0 && flag[z[i]][round] == 0)
        {
          ans += d[z[i]][round];
          flag[z[i]][round] = 1;
          m--;
        }
      }
      m = M;
      round++;
    }
    else if (round == 1)
    {
      rep(i, 0, z.size())
      {
        if (m > 0 && flag[z[i]][round] == 0)
        {
          if (i < z.size() - 1 && flag[z[i]][round - 1] == 1 && (d[z[i]][round - 1] + d[z[i]][round]) > d[z[i + 1]][round])
          {
            ans += d[z[i + 1]][round];
            m--;
            break;
          }
          ans += d[z[i]][round];

          flag[z[i]][round] = 1;
          m--;
        }
      }
      m = M;
      round++;
    }
    else if (round == 2)
    {
      rep(i, 0, rz.size())
      {
        if (m > 0 && flag[rz[i]][round] == 0)
        {
          ans += d[rz[i]][round];
          flag[rz[i]][round] = 1;
          m--;
        }
      }
      m = M;
      round++;
    }
  }
  cout << rz << endl;
  cout << flag << endl;
  cout << "ans: " << ans << endl;

  rep(i, 0, n)
  {
    ct = count(flag[i].begin(), flag[i].end(), 1);
    if (ct >= 1)
    {
      ans -= d[i][ct - 1];
    }
    ct = 0;
  }
  cout << "ans2: " << ans << endl;
}