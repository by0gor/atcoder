// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516
// Q.k区間内の総和の最大値を出力せよ、累積和。
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

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli c, d, e, f, h, k, n, w, ans = 0, count = -INF;
//   string s, t;
//   cin >> n >> k;
//   vi a(n);
//   rep(i, 0, n)
//   {
//     cin >> a[i];
//   }
//   vi b(n + 1, 0);
//   rep(i, 0, n)
//   {
//     b[i + 1] = b[i] + a[i];
//   }
//   rep(i, 0, n - k)
//   {
//     ans = b[k + i] - b[i];
//     if (count < ans)
//       count = ans;
//   }
//   cout << count << endl;
// }