// C - Build Stairs
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
  lli a, b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n;
  vlli d(n);
  rep(i, 0, n)
  {
    cin >> d[i];
  }
  lli now = -1;
  rep(i, 0, n)
  {
    // cout << "i: " << i << " now: " << now << endl;
    if (d[i] == now)
      continue;
    if (d[i] - 1 >= now)
      now = d[i] - 1;
    else
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}

// https: //atcoder.jp/contests/abc136/tasks/abc136_b
// Q.数値から文字列、文字列から数値のキャスト変換せよ

// intからStringに変換 to_string
// int num = 4321;
// str = to_string(num);

// Stringからintに変換 stoi
// string numStr = "1234";
// int num = stoi(numStr);

// char[]からStringに変換
// char c_str[] = {"hello world!"};
// std::string s_str = c_str;

// Stringからchar*に変換
// std::string str = "hello world!";
// const char* cstr = str.c_str();

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int a = to_string(n).size();
//   int ans = 0;
//   for (int i = 1; i <= n; i++)
//   {
//     string b = to_string(i);
//     if (b.size() % 2 == 1)
//       ans++;
//   }
//   cout << ans << endl;
// }