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
  lli a, b, c, h, k, n, L, T1, T2, T3, w, ans = 0, count = 0;
  string s, t;
  cin >> n >> L;
  vlli x(n);
  rep(i, 0, n)
  {
    cin >> x[i];
  }
  cin >> T1 >> T2 >> T3;

  if (T1 <= T2 && T2 <= T3)
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      auto itr1 = find(x.begin(), x.end(), count + 1);
      auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);

      if (itr1 != x.end())
      {
        if (itr2 != x.end())
        {
          ans += T1 + (T2 * 3);
          count += 4;
        }
        else
        {
          ans += T1 + T2;
          count += 2;
        }
      }
      else
      {
        ans += T1;
        count += 1;
      }
      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }
  else if (T1 <= T2 && T2 > T3 && T1 <= T3)
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      // auto itr1 = find(x.begin(), x.end(), count + 1);
      // auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);

      ans += T1;
      count += 1;

      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }
  else if (T2 <= T1 && T1 <= T3) // probably be error
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      auto itr1 = find(x.begin(), x.end(), count + 1);
      auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);
      auto itr4 = find(x.begin(), x.end(), count + 4);

      if (itr4 != x.end())
      {
        if (itr1 != x.end() && itr2 == x.end())
        {
          ans += T1 + T2;
          count += 2;
        }
        else if (itr1 != x.end() && itr2 != x.end())
        {
          ans += T1 + (T2 * 3);
          count += 4;
        }
        else if (itr1 == x.end() && itr2 != x.end())
        {
          ans += T1;
          count += 1;
        }
      }
      else
      {
        ans += T1 + (T2 * 3);
        count += 4;
      }
      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }
  else if (T2 <= T1 && T1 > T3 && T2 <= T3)
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      auto itr1 = find(x.begin(), x.end(), count + 1);
      auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);
      auto itr4 = find(x.begin(), x.end(), count + 4);

      if (itr4 != x.end())
      {
        if (itr1 != x.end() && itr2 == x.end())
        {
          ans += T1 + T2;
          count += 2;
        }
        else if (itr1 != x.end() && itr2 != x.end())
        {
          ans += T1 + (T2 * 3);
          count += 4;
        }
        else if (itr1 == x.end() && itr2 != x.end())
        {
          ans += T1;
          count += 1;
        }
      }
      else
      {
        ans += T1 + (T2 * 3);
        count += 4;
      }
      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }
  else if (T3 <= T1 && T1 <= T2)
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      // auto itr1 = find(x.begin(), x.end(), count + 1);
      // auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);

      ans += T1;
      count += 1;

      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }
  else if (T3 <= T1 && T1 > T2 && T3 <= T2)
  {
    while (count < L)
    {
      auto itr0 = find(x.begin(), x.end(), count);
      // auto itr1 = find(x.begin(), x.end(), count + 1);
      // auto itr2 = find(x.begin(), x.end(), count + 2);
      // auto itr3 = find(x.begin(), x.end(), count + 3);

      ans += T1 + (T2 * 3);
      count += 4;

      if (itr0 != x.end())
      {
        ans += T3;
      }
      // cout << "count: " << count << endl;
    }
  }

  if (count != L)
  {
    a = count - L;
    if (a == 3)
    {
      ans -= ((T1 + T2) / 2) + (T2 * 2);
    }
    else if (a == 2)
    {
      ans -= ((T1 + T2) / 2) + T2;
    }
    else
    {
      ans -= ((T1 + T2) / 2);
    }
  }
  cout << ans << endl;
}
