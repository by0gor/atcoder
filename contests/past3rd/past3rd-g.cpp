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
  lli a, b, c, k, n, X, Y, ans = 0, count = 0;
  string s, t;

  const lli dx[] = {1, 0, -1, 1, -1, 0};
  const lli dy[] = {1, 1, 1, 0, 0, -1};

  cin >> n >> X >> Y;

  vector<vs> field(3000, vs(3000, "o"));

  rep(i, 0, n)
  {
    cin >> a >> b;
    a += 1500;
    b += 1500;
    field[a][b] = 'x';
  }

  lli sx, sy, gx, gy;
  sx = 1500;
  sy = 1500;
  gx = X + 1500;
  gy = Y + 1500;

  vector<vector<lli>> dist(3000, vector<lli>(3000, -1));
  dist[sx][sy] = 1500; // スタートを 0 に

  vector<vector<lli>> prev_x(3000, vector<lli>(3000, -1));
  vector<vector<lli>> prev_y(3000, vector<lli>(3000, -1));

  queue<pair<lli, lli>> que;
  que.push(make_pair(sx, sy)); // スタートを push

  while (!que.empty())
  {
    pair<lli, lli> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
    lli x = current_pos.first;
    lli y = current_pos.second;
    que.pop(); // キューから pop を忘れずに

    // 隣接頂点を探索
    for (lli direction = 0; direction < 6; ++direction)
    {
      lli next_x = x + dx[direction];
      lli next_y = y + dy[direction];
      if (next_x < 1000 || next_x >= 3000 || next_y < 1000 || next_y >= 3000)
        continue; // 場外アウトならダメ
      if (field[next_x][next_y] == "x")
        continue; // 壁はダメ

      // まだ見ていない頂点なら push
      if (dist[next_x][next_y] == -1)
      {
        que.push(make_pair(next_x, next_y));
        dist[next_x][next_y] = dist[x][y] + 1LL; // (next_x, next_y) の距離も更新
        prev_x[next_x][next_y] = x;              // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
        prev_y[next_x][next_y] = y;              // どの頂点から情報が伝播して来たか、横方向の座標をメモ
      }
    }
  }
  lli x = gx, y = gy;
  while (x != -1 && y != -1)
  {
    field[x][y] = 'P'; // 通過したことを示す

    // 前の頂点へ行く
    lli px = prev_x[x][y];
    lli py = prev_y[x][y];
    x = px, y = py;
  }
  ans = dist[X + 1500][Y + 1500] - 1500LL;
  if (ans < 0 || ans == 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
}