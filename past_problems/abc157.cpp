// https://atcoder.jp/contests/abc157/tasks/abc157_c
// Q.1000までの数値で指定の桁が指定の数値になっているもので最小のものを出力せよ
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
// using vlli = vector<lli>;
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
//   lli a, b, h, k, n, m, w, ans = 0, count = 0;
//   string t;
//   cin >> n >> m;
//   vi s(m), c(m);

//   rep(i, 0, m)
//   {
//     cin >> s[i] >> c[i];
//   }
//   rep(i, 0, 1000)
//   {
//     t = to_string(i);
//     if (t.size() != n)
//       continue;
//     bool flag = true;
//     rep(i, 0, m)
//     {
//       if (t[s[i] - 1] != c[i] + '0')
//       {
//         flag = false;
//         break;
//       }
//     }
//     if (flag)
//     {
//       cout << i << endl;
//       return 0;
//     }
//   }
//   cout << -1 << endl;
// }
// https://atcoder.jp/contests/abc157/tasks/abc157_b
// Q.ビンゴ
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
// using vlli = vector<lli>;
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
//   lli c, h, n, w, ans = 0, count = 0;
//   string s, t;
//   vvi a(3, vi(3));
//   cin >> a;
//   cin >> n;
//   vi b(n);
//   rep(i, 0, n)
//   {
//     cin >> b[i];
//   }
//   rep(i, 0, 3)
//   {
//     rep(j, 0, 3)
//     {
//       rep(k, 0, n)
//       {
//         if (b[k] == a[i][j])
//           a[i][j] = 0;
//       }
//     }
//   }
//   repe(i, 0, 0)
//   {
//     repe(j, 0, 0)
//     {
//       if ((a[i][j] == 0 && a[i + 1][j] == 0 && a[i + 2][j] == 0) || (a[i][j] == 0 && a[i][j + 1] == 0 && a[i][j + 2] == 0) || (a[i][j] == 0 && a[i + 1][j + 1] == 0 && a[i + 2][j + 2] == 0) || (a[i][j + 1] == 0 && a[i + 1][j + 1] == 0 && a[i + 2][j + 1] == 0) || (a[i][j + 2] == 0 && a[i + 1][j + 2] == 0 && a[i + 2][j + 2] == 0) || (a[i + 1][j] == 0 && a[i + 1][j + 1] == 0 && a[i + 1][j + 2] == 0) || (a[i + 2][j] == 0 && a[i + 2][j + 1] == 0 && a[i + 2][j + 2] == 0) || (a[i][j + 2] == 0 && a[i + 1][j + 1] == 0 && a[i + 2][j] == 0))
//       {
//         cout << "Yes" << endl;
//         return 0;
//       }
//     }
//   }
//   cout << "No" << endl;
// }