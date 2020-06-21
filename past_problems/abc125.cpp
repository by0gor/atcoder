// https://atcoder.jp/contests/abc125/tasks/abc125_a

// #include <bits/stdc++.h>
// using namespace std;
// int solve()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int a, b, t, n, ans = 0, count = 0;
//   string s;
//   vector<int> v(n, 0);
//   cin >> a >> b >> t;

//   ans = t / a;

//   cout << ans * b << endl;
//   return 0;
// }
// signed main()
// {
//   solve();
// }

// B - Resale
// #include <bits/stdc++.h>
// using namespace std;
// int solve()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int n, ans = 0, count = 0;
//   string s;
//   cin >> n;
//   vector<int> v(n, 0);
//   vector<int> c(n, 0);

//   for (int i = 0; i < n; i++)
//   {
//     cin >> v[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cin >> c[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (v[i] > c[i])
//     {
//       ans += v[i] - c[i];
//     }
//   }
//   cout << ans << endl;
//   return 0;
// }
// signed main()
// {
//   solve();
// }

// C - GCD on Blackboard
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
  if (a < b)
  {
    a ^= b;
    b ^= a;
    a ^= b;
  }
  return b ? gcd(b, a % b) : a;
}
long long lcm(long long a, long long b)
{
  return a * b / gcd(a, b);
}

template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}

int solve()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long n, ans = 0, count = 0;
  string s;
  cin >> n;
  vector<long long> v(n, 0);
  vector<long long> x(n + 1, 0);
  vector<long long> y(n + 1, 0);
  for (long long i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (long long i = 0; i < n; ++i)
  {
    x[i + 1] = gcd(x[i], v[i]);
  }
  for (long long i = n - 1; i >= 0; --i)
  {
    y[i] = gcd(y[i + 1], v[i]);
  }

  for (long long i = 0; i < n; ++i)
  {
    long long l = x[i];
    long long r = y[i + 1];
    chmax(ans, gcd(l, r));
  }
  cout << ans << endl;
  return 0;
}

signed main()
{
  solve();
}