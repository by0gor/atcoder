#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#pragma GCC optimize("Ofast")
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
  lli k, n, w, count = 0, tmp = 0;
  string a, b, c, t, x, y, ans = "", res = "";
  vector<pair<char, lli>> pr;
  cin >> n;
  vs s(n);
  map<char, lli> g;
  pair<char, lli> h;
  rep(i, 0, n)
  {
    cin >> s[i];
    x = s[i];
    y += x;
  }

  if (n == 1)
  {
    ans = y[0];
    cout << ans << endl;
    return 0;
  }

  rep(i, 0, y.size())
  {
    g[y[i]]++;
  }
  for (auto z : g)
  {
    char ch = z.first;
    lli num = z.second;
    // cout << "z.first: " << z.first << " z.second: " << z.second << endl;

    if (num >= 2)
    {
      // cout << "count: " << count << endl;
      tmp = max(tmp, num);
      // pr.eb(make_pair(ch, tmp));

      if (count < (n / 2))
      {
        ans += ch;
      }
      count++;
    }
  }

  if (tmp <= 1)
  {
    cout << -1 << endl;
    return 0;
  }

  // cout << "ans: " << ans << endl;
  // cout << "tmp: " << tmp << endl;

  a = ans;
  REV(a);

  if (n % 2 == 0) // n=even
  {
    if (count >= n / 2)
    {
      res = ans + a;
      cout << res << endl;
      return 0;
    }
    else if (tmp >= n)
    {
      for (auto z : g)
      {
        char ch = z.first;
        lli num = z.second;

        if (num == tmp)
        {
          rep(i, 0, n)
          {
            res += ch;
          }
          break;
        }
      }
      // res += a;
      cout << res << endl;
      return 0;
    }
    // else if (tmp == n - 1)
    // {
    //   for (auto z : g)
    //   {
    //     char ch = z.first;
    //     lli num = z.second;

    //     if (num == tmp)
    //     {
    //       rep(i, 0, n / 2)
    //       {
    //         res += ch;
    //       }
    //       break;
    //     }
    //   }
    //   b = res;
    //   set<char> ts;
    //   rep(l, 0, res.size())
    //   {
    //     ts.insert(res[l]);
    //   }
    //   for (auto z : g)
    //   {
    //     char ch = z.first;
    //     lli num = z.second;

    //     if (num >= 1 && (ts.count(ch) == 0))
    //     {
    //       res += ch;
    //       break;
    //     }
    //   }
    //   res += b;
    //   cout << res << endl;
    //   return 0;
    // }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }
  else // n=odd
  {
    if (count >= (n - 1) / 2 && tmp < n)
    {
      res = ans;
      set<char> ts;
      rep(l, 0, res.size())
      {
        ts.insert(res[l]);
      }
      for (auto z : g)
      {
        char ch = z.first;
        lli num = z.second;

        if (num >= 1 && (ts.count(ch) == 0))
        {
          res += ch;
          break;
        }
      }
      res += a;
      cout << res << endl;
      return 0;
    }
    else if (tmp >= n)
    {
      for (auto z : g)
      {
        char ch = z.first;
        lli num = z.second;

        if (num == tmp)
        {
          rep(i, 0, n)
          {
            res += ch;
          }
          break;
        }
      }
      // res += a;
      cout << res << endl;
      return 0;
    }
    else if (tmp == n - 1)
    {
      for (auto z : g)
      {
        char ch = z.first;
        lli num = z.second;

        if (num == tmp)
        {
          rep(i, 0, (n - 1) / 2)
          {
            res += ch;
          }
          break;
        }
      }
      b = res;
      set<char> ts;
      rep(l, 0, res.size())
      {
        ts.insert(res[l]);
      }
      for (auto z : g)
      {
        char ch = z.first;
        lli num = z.second;

        if (num >= 1 && (ts.count(ch) == 0))
        {
          res += ch;
          break;
        }
      }
      res += b;
      cout << res << endl;
      return 0;
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }

  // for (auto v : pr)
  // {
  //   cout << "h.first: " << v.first << " h.second: " << v.second << endl;
  // }
}