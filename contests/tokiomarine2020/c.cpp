// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define MIN(x) *min_element(ALL(x))
// #define _GLIBCXX_DEBUG
// const lli INF = 2147483647;
// const lli MINF = -2147483648;
// const lli LINF = 9223372036854775807;
// const lli MOD = 1000000007; //10^9+7
// const double PI = acos(-1);
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// #pragma GCC optimize("Ofast")
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vvli = vector<vlli>;
// using vs = vector<string>;
// using vvs = vector<vs>;
// using vb = vector<bool>;
// using vvb = vector<vb>;
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
// // aよりもbが大きいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmax(T &a, const T &b)
// {
//   if (a < b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }
// // aよりもbが小さいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmin(T &a, const T &b)
// {
//   if (a > b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli b, c, h, k, n, w, ans = 0, count = 0;
//   string s, t;
//   vector<pair<string, pair<lli, lli>>> pr;
//   cin >> n >> k;
//   vlli a(n), d(n, 0);
//   rep(i, 0, n)
//   {
//     cin >> a[i];
//   }

//   if (k > (n / 2))
//   {
//     rep(i, 0, n)
//     {
//       cout << n << " ";
//     }
//     cout << endl;
//     return 0;
//   }

//   while (count < 50 && k > 0)
//   {
//     rep(i, 0, n)
//     {
//       double mi = (i + 1) - a[i] - 0.5;
//       double pl = (i + 1) + a[i] + 0.5;

//       repe(j, mi + 0.5, pl + 0.5)
//       {
//         if (j >= mi && j <= pl && j >= 1 && j <= n)
//         {
//           d[j - 1]++;
//         }
//       }
//     }
//     bool changed = false;
//     rep(i, 0, n)
//     {
//       if (a[i] != d[i])
//         changed = true;
//       a[i] = d[i];
//       d[i] = 0;
//     }
//     if (!changed)
//     {
//       break;
//     }
//     count++;
//     k--;
//   }
//   rep(i, 0, n)
//   {
//     cout << a[i] << " ";
//   }
//   cout << endl;
// }
/**
 *    author:  tourist
 *    created: 13.06.2020 15:34:38       
**/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> b(n + 1);
  while (k--)
  {
    for (int i = 0; i <= n; i++)
    {
      b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
      int from = max(i - a[i], 0);
      int to = min(i + a[i], n - 1);
      b[from] += 1;
      b[to + 1] -= 1;
    }
    // for (int i = 0; i <= n; i++)
    // {
    //   cout << b[i] << " ";
    // }
    // cout << endl;
    bool changed = false;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != b[i])
        changed = true;
      a[i] = b[i];
      b[i + 1] += b[i];
    }
    if (!changed)
    {
      break;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << a[i];
  }
  cout << '\n';
  return 0;
}
