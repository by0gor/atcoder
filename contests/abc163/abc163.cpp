// D問題
// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
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
//     os << vec[i] << (i + 1 == vec.size() ? "" : "\n");
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {
//   ll n, k, a = 0LL, m = 1e9 + 7;
//   cin >> n >> k;
//   while (k <= n + 1)
//   {
//     a = (a + (n - k + 1) * k + 1) % m;
//     k++;
//   }
//   cout << a << endl;
// }

// C

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
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
//     os << vec[i] << (i + 1 == vec.size() ? "" : "\n");
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {
//   ll n;
//   cin >> n;
//   vi a(n - 1);
//   vi b(n);
//   cin >> a;
//   rep(i, n - 1)
//   {
//     a[i]--;
//     b[a[i]]++;
//   }
//   cout << b << endl;
// }

// B問題

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
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
//   ll n, m, ans = 0LL;
//   cin >> n >> m;
//   vi a(m);
//   cin >> a;
//   rep(i, m)
//   {
//     ans += a[i];
//   }
//   if (n - ans >= 0)
//   {
//     cout << n - ans << endl;
//   }
//   else
//   {
//     cout << -1 << endl;
//   }
// }

// A問題
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
//   int r;
//   cin >> r;
//   double ans = 3.141592648777698869248;
//   printf("%.10lf\n", r * 2 * ans);
// }
