// AtCoder ABC161 D問題
// https://atcoder.jp/contests/abc162/tasks/abc162_d
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
// #define rt sqrt
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
//   lli h, k, n, w, R = 0, B = 0, G = 0, ans = 0, count = 0;
//   string s, t;
//   cin >> n;
//   cin >> s;
//   rep(i, 0, n)
//   {
//     if (s[i] == 'R')
//     {
//       R++;
//     }
//     if (s[i] == 'G')
//     {
//       G++;
//     }
//     if (s[i] == 'B')
//     {
//       B++;
//     }
//   }
//   ans = R * G * B;
//   repe(i, 1, n)
//   {
//     rep(j, 0, n)
//     {
//       if (s[j] != s[j + i] && s[j] != s[j + i * 2] && s[j + i] != s[j + i * 2] && j + i * 2 < n)
//         ans--;
//     }
//   }
//   cout << ans << endl;
// }

// AtCoder ABC162 C問題
// #include <bits/stdc++.h>
// using namespace std;
// int64_t getgcd(int64_t n, int64_t m)
// {
//   int64_t r;
//   if (n > m)
//   {
//     int64_t t = m;
//     m = n;
//     n = t;
//   }
//   while ((r = m % n) != 0)
//   {
//     m = n;
//     n = r;
//   }
//   return n;
// }
// int main()
// {
//   int64_t k;
//   cin >> k;
//   int64_t gcd;
//   int64_t ans;
//   vector<int64_t> z(1);
//   vector<int64_t> vecA(k);
//   vector<int64_t> vecB(k);
//   vector<int64_t> vecC(k);
//   for (int i = 0; i < k; i++)
//   {
//     vecA.at(i) = i + 1;
//     vecB.at(i) = i + 1;
//     vecC.at(i) = i + 1;
//   }

//   for (int64_t i = 0; i < k; i++)
//   {
//     for (int64_t j = 0; j < k; j++)
//     {
//       for (int64_t l = 0; l < k; l++)
//       {
//         gcd = getgcd(getgcd(vecA.at(i), vecB.at(j)), vecC.at(l));
//         ans += gcd;
//       }
//     }
//     z.at(0) = ans;
//   }
//   cout << z.at(0) << endl;
// }

// int main()
// {
//   int64_t k;
//   cin >> k;
//   int64_t ans = (k * k * k - (k - 1));
//   for (int64_t i = 1; i <= k; i++)
//   {
//     ans += i;
//   }
//   ans -= 1;
//   cout << ans << endl;
// }
// AtCoder ABC162 B問題
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int64_t a;
//   cin >> a;
//   int64_t count = 0;
//   int64_t ans = 0;
//   for (int64_t i = 1; i <= a; i++)
//   {
//     if (i % 3 == 0 && i % 5 == 0) // iが3の倍数かつ5の倍数
//       count += 1;
//     else if (i % 3 == 0) // iが3の倍数(かつ、5の倍数でない)
//       count += 1;
//     else if (i % 5 == 0) // iが5の倍数(かつ、3の倍数でない)
//       count += 1;
//     else // iが3の倍数でも5の倍数でもない
//       ans += i;
//   }
//   cout << ans << endl;
// }

// AtCoder ABC162 A問題
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   string n;
//   cin >> n;
//   string str = n;
//   int count = 0;
//   for (char c : str)
//   {
//     if (c == '7')
//     {
//       count += 1;
//     }
//   }
//   if (count > 0)
//   {
//     cout << "Yes" << endl;
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }