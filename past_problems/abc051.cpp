// https://atcoder.jp/contests/abc051/tasks/abc051_b
// Q.3重ループはやばい.2500**3はTLE必至のため、2重で済む設計にする

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
//     os << vec[i] << (i + 1 == vec.size() ? '' : ' ');
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {
//   ll k, s, ans = 0LL;
//   cin >> k >> s;
//   rep(i, k)
//   {
//     rep(j, k)
//     {
//       ll z = s - (i + j);
//       if (0 <= z && z <= k)
//         ans++;
//     }
//   }
//   cout << ans << endl;
// }