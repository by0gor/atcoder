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
  lli h, k, n, Q, w, ans = 0, count = 1;
  string s, t;
  cin >> n >> Q;
  vvi c(n);
  rep(i, 0, n)
  {
    c[i].pb(i + 1);
  }

  vs q(Q + 1);
  repe(i, 0, Q)
  {
    getline(cin, q[i]);
  }
  repe(i, 1, Q)
  {
    // cout << c << endl;
    istringstream iss(q[i]);
    string t;
    vs v;
    while (iss >> t)
    {
      v.pb(t);
    }
    lli a1 = stoi(v[0]);
    lli a2 = stoi(v[1]);
    lli a3 = stoi(v[2]);
    auto itr = find(c[a1 - 1].begin(), c[a1 - 1].end(), a3);
    lli dis = distance(c[a1 - 1].begin(), itr);

    // rep(aa, 0, n)
    // {
    //   rep(bb, 0, c[aa].size())
    //   {
    //     cout << "c[" << aa << "][" << bb << "]: " << c[aa][bb] << endl;
    //   }
    // }

    // cout << "dis: " << dis << endl;

    // cout << "c[" << a1 - 1 << "].size(): " << c[a1 - 1].size() << endl;
    // if (c[a1 - 1].size() > 0)
    lli length = c[a1 - 1].size();
    rep(j, dis, length)
    {
      // cout << "c[" << 0 << "].size(): " << c[0].size() << endl;
      // cout << "c[" << 1 << "].size(): " << c[1].size() << endl;
      // cout << "c[" << 2 << "].size(): " << c[2].size() << endl;
      if (c[a1 - 1].size() > 0)
      {
        lli b = 0;
        b = c[a1 - 1][dis];
        // cout << "b: " << b << endl;
        c[a2 - 1].push_back(b);
        c[a1 - 1].erase(c[a1 - 1].begin() + dis);
      }
    }
  }
  while (count <= n)
  {
    rep(aa, 0, n)
    {
      rep(bb, 0, c[aa].size())
      {
        // cout << "c[" << aa << "][" << bb << "]: " << c[aa][bb] << endl;
        if (c[aa][bb] == count)
        {
          cout << aa + 1 << endl;
          count++;
        }
      }
    }
  }
}
