// https://atcoder.jp/contests/abc133/tasks/abc133_b
// むずすぎ。平方根、ルート、sqrt。多重ループ。repマクロ。sqrtの切り捨てに注意。

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// using namespace std;
// typedef long long ll;

// signed main()
// {
//   int n, d, ans = 0;
//   cin >> n >> d;
//   vector<vector<int>> x(n, vector<int>(d));
//   rep(i, n)
//   {
//     rep(j, d)
//     {
//       cin >> x[i][j];
//     }
//   }
//   rep(i, n)
//   {
//     rep(j, i)
//     {
//       int sq = 0;
//       rep(k, d)
//       {
//         int s = x[i][k] - x[j][k];
//         sq += s * s;
//       }
//       int t = sqrt(sq);
//       if (t * t == sq)
//         ans++;
//     }
//   }
//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// int main()
// {
//   int n, d, ans = 0;
//   cin >> n >> d;
//   vector<vector<int>> x(n, vector<int>(d));
//   rep(i, n)
//   {
//     rep(j, d) cin >> x[i][j];
//   }
//   rep(i, n)
//   {
//     rep(j, i)
//     {
//       int sq = 0;
//       rep(k, d)
//       {
//         int s = x[i][k] - x[j][k];
//         sq += s * s;
//       }
//       int t = sqrt(sq) + 0.5;
//       if (t * t == sq)
//         ans++;
//     }
//   }
//   cout << ans << endl;
// }