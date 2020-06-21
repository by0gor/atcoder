// https://atcoder.jp/contests/abc085/tasks/abc085_c
// 多重ループの回避策
// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((int)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
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
//     os << vec[i] << (i + 1 == vec.size() ? "" : ' ');
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {

//   ll n, y;
//   cin >> n >> y;
//   rep(i, n)
//   {
//     rep(j, n)
//     {
//       int z = n - (i + j);
//       if (0 <= z && z <= n && 10000 * i + 5000 * j + 1000 * z == y)
//       {
//         cout << i << ' ' << j << ' ' << z << endl;
//         return 0;
//       }
//     }
//   }
//   cout << -1 << ' ' << -1 << ' ' << -1 << endl;
// }

// https://atcoder.jp/contests/abc085/tasks/abc085_b
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
//     os << vec[i] << (i + 1 == vec.size() ? "" : "\n");
//   }
//   // os << '}';
//   return os;
// }
// const int MAX = 100000;
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
// lli a, b, c, e, f, h, k, n, w, ans = 0, count = 0;
// string s, t;
// cin >> n;
// vi d(n), num(n);
// cin >> d;
// SORT(d);
// rep(i, 0, n)
// {
//   num[d[i]]++;
// }
// repe(i, 0, n)
// {
//   if (num[d[i]])
//     count++;
// }
// cout << count << endl;
// }