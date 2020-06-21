
// https://atcoder.jp/contests/abc084/tasks/abc084_d

// #include <bits/stdc++.h>
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define root sqrt
// using namespace std;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vs = vector<string>;
// using ll = long long;
// // vector入力
// template <typename T>
// istream &operator>>(istream &is, vector<T> &vec)
// {
//   for (T &x : vec)
//     is >> x;
//   return is;
// }
// // vector出力
// template <typename T>
// ostream &operator<<(ostream &os, vector<T> &vec)
// {
//   // os << '{';
//   for (int i = 0; i < vec.size(); i++)
//   {
//     os << vec[i] << (i + 1 == vec.size() ? "" : "");
//   }
//   // os << '}';
//   return os;
// }

// bool is_prime(int N)
// {
//   if (N == 1)
//     return false;
//   for (int i = 2; i * i <= N; ++i)
//   {
//     if (N % i == 0)
//       return false;
//   }
//   return true;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli d, e, f, h, k, n, w, q, ans = 0, count = 0;
//   string s, t;
//   cin >> q;
//   int l, r;
//   int re[1000010];

//   // ◆素数判定(エラトステネスの篩)
//   int MAX = 101010;
//   vector<int> is_prime(MAX, 1);
//   is_prime[0] = 0, is_prime[1] = 0;
//   for (int i = 2; i < MAX; ++i)
//   {
//     if (!is_prime[i])
//       continue;
//     for (int j = i * 2; j < MAX; j += i)
//       is_prime[j] = 0;
//   }

//   vi res(MAX, 0);
//   rep(i, 0, MAX)
//   {
//     if (i % 2 == 0)
//       continue;
//     if (is_prime[i] && is_prime[(i + 1) / 2])
//     {
//       res[i] = 1;
//     }
//   }

//   vi z(MAX + 1, 0);
//   rep(i, 0, MAX)
//   {
//     z[i + 1] = z[i] + res[i];
//   }
//   rep(i, 0, q)
//   {
//     cin >> l >> r;
//     r++;
//     cout << z[r] - z[l] << endl;
//   }
// }

// B - Postal Code
// 判定。0~9かどうかの判定は'0'<=s[i]<='9'でいける。
#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
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
#define eb emplace_back
#pragma GCC optimize("Ofast")
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
  lli a, b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> a >> b;
  cin >> s;
  rep(i, 0, a)
  {
    if (!('0' <= s[i] && s[i] <= '9'))
    {
      cout << "No"
           << "\n";
      return 0;
    }
  }
  rep(i, a + 1, a + b + 1)
  {
    if (!('0' <= s[i] && s[i] <= '9'))
    {
      cout << "No"
           << "\n";
      return 0;
    }
  }
  if (s[a] == '-')
  {
    cout << "Yes"
         << "\n";
  }
  else
  {
    cout << "No"
         << "\n";
  }
}