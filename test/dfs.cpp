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
using vvli = vector<vlli>;
using vs = vector<string>;
using vvs = vector<vs>;
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

lli a, b, c, h, k, m, n, w, ans = 0, count = 0;
string s, t;
vector<pair<string, pair<lli, lli>>> pr;

// 計算量はO(N+M)のみ。
void dfs(vvli &g, lli v, vector<bool> &seen, vlli &first_order, vlli &last_order, lli &first_ptr, lli &last_ptr, lli &ptr)
{
  first_order[v] = first_ptr++; // 各頂点の行き掛け順をインクリメントしつつメモ。
  // first_order[v] = ptr++; // 各頂点のタイムスタンプを取得したい場合はfirst_ptrとlast_ptrをptrに統一する。

  seen[v] = true;
  for (auto next_v : g[v])
  {
    if (seen[next_v] == true)
      continue;
    dfs(g, next_v, seen, first_order, last_order, first_ptr, last_ptr); // タイムスタンプ欲しい場合はptrも追加。
    cout << "first!" << endl;
  }
  last_order[v] = last_ptr++; // 各頂点の帰り掛け順をインクリメントしつつメモ。
  // last_order[v] = ptr++; // 各頂点のタイムスタンプを取得したい場合はfirst_ptrとlast_ptrをptrに統一する。
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  cin >> m;
  vvli g(n);
  vector<bool> seen(n, false);
  rep(i, 0, m)
  {
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vlli first_order(n);
  vlli last_order(n);
  // seen.assign(n, false);
  lli first_ptr = 0, last_ptr = 0, ptr = 0;
  dfs(g, 0, seen, first_order, last_order, first_ptr, last_ptr); // タイムスタンプ欲しい場合はptrも追加。

  rep(i, 0, n)
  {
    rep(j, 0, g[i].size())
    {
      cout << g[i][j] << " ";
    }
    cout << endl;
  }
  rep(i, 0, n)
  {
    cout << i << ": " << first_order[i] << ", " << last_order[i] << endl;
  }
  cout << seen << endl;
}