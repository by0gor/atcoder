// https://atcoder.jp/contests/abc159/tasks/abc159_d
// #include <bits/stdc++.h>
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// // #define MOD 10000007      //10^9+7
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define rt sqrt
// using namespace std;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vs = vector<string>;
// using ll = long long;
// // typedef long long ll;
// #define REP(i, n) for (lli i = 0; i < (n); ++i)
// #define FOR(i, a, b) for (lli i = (a); i < (b); ++i)
// #define FORR(i, a, b) for (lli i = (b)-1LL; i >= (a); --i)
// constexpr lli MOD = 1000000007ll;
// // constexpr ll MOD=998244353ll;
// constexpr lli MAX = 510000ll;
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

// lli fact[MAX], fact_inv[MAX];

// // 繰り返し二乗法
// lli power(lli a, lli b)
// {
//   lli res = 1LL;
//   while (b > 0LL)
//   {
//     if (b & 1LL)
//     {
//       res = res * a % MOD;
//     }
//     a = a * a % MOD;
//     b >>= 1LL;
//   }
//   return res;
// }

// lli comb(lli n, lli r)
// {
//   return (fact[n] * fact_inv[r]) % MOD * fact_inv[n - r] % MOD;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli b[200010LL] = {0}, c, h, k, n, w, ans = 0LL, tmp = 0LL, count = 0LL;
//   string s, t;
//   cin >> n;
//   vlli a(n);

//   fact[0] = 1LL;
//   // 階乗の計算
//   REP(i, n)
//   fact[i + 1LL] = fact[i] * (i + 1LL) % MOD;
//   fact_inv[n] = power(fact[n], MOD - 2LL);
//   // 逆元の計算
//   FORR(i, 0, n)
//   fact_inv[i] = fact_inv[i + 1LL] * (i + 1LL) % MOD;

//   rep(i, 0, n)
//   {
//     cin >> a[i];
//     b[a[i] - 1LL]++;
//   }
//   rep(i, 0, n)
//   {
//     // cout << "b:" << b[i] << endl;
//     if (b[i] >= 2LL)
//     {
//       ans += b[i] * (b[i] - 1) / 2;
//     }
//   }
//   // cout << "ans:" << ans << endl;
//   rep(i, 0, n)
//   {
//     tmp = ans;
//     if (b[a[i] - 1] >= 2)
//     {
//       // lli diff = b[a[i] - 1] * (b[a[i] - 1] - 1) / 2;
//       // cout << "diff:" << diff << endl;
//       tmp -= b[a[i] - 1] * (b[a[i] - 1] - 1) / 2;
//       tmp += (b[a[i] - 1] - 2) * (b[a[i] - 1] - 1) / 2;
//     }
//     cout << tmp << endl;
//   }
// }

// AtCoder ABC159 C
// #include <bits/stdc++.h>
// #include <cstdio>
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//   double l;
//   cin >> l;
//   double a = l / 3;
//   cout << fixed << setprecision(10) << a * a * a << endl;
// }

// AtCoder ABC159 B
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   string s;
//   cin >> s;
//   string a = s;
//   reverse(a.begin(), a.end());

//   string b = s.substr(0, (s.size() - 1) / 2);
//   string c = b;
//   reverse(c.begin(), c.end());

//   string d = s.substr((s.size() + 2) / 2, s.size());
//   string e = d;
//   reverse(e.begin(), e.end());

//   if (a == s)
//   {
//     if (c == b)
//     {
//       if (e == d)
//       {
//         cout << "Yes" << endl;
//       }
//       else
//       {
//         cout << "No" << endl;
//       }
//     }
//     else
//     {
//       cout << "No" << endl;
//     }
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }
// cout << "s:" << s << endl;
// cout << "a:" << a << endl;
// cout << "b:" << b << endl;
// cout << "c:" << c << endl;
// cout << "d:" << d << endl;
// cout << "e:" << e << endl;

// AtCoder ABC159 A

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   int ans = 0;
//   int f = 0;
//   int g = 0;

//   for (int i = 1; i < n; i++)
//   {
//     f = f + i;
//   }
//   for (int i = 1; i < m; i++)
//   {
//     g = g + i;
//   }

//   cout << f + g << endl;
// }