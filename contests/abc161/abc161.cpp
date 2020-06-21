// AtCoder ABC161 C問題

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int64_t n, k;
//   cin >> n >> k;
//   n %= k;
//   cout << min((k - n), n) << endl;
// }

// int64_t a = abs(n - k);
// if (n <= k)
// {
//   cout << min(n, a) << endl;
// }
// else if (k == 1)
// {
//   cout << 0 << endl;
// }
// else if (n % k == 0)
// {
//   cout << 0 << endl;
// }
// else if ((n - k) % 2 == 1)
// {
//   cout << 1 << endl;
// }
// else if ((n - k) % 2 == 0)
// {
//   cout << 2 << endl;
// }
// else
// {
//   cout << min((k - a), a) << endl;
// }
// }

// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;

// int main()
// {
//   long long n, k;
//   cin >> n >> k;
//   long long a = abs(n - k);
//   long long b = abs(a - k);

//   if (n % k == 0LL)
//   {
//     cout << 0 << endl;
//   }
//   else if ((n - k) % 2 == 1)
//   {
//     cout << 1 << endl;
//   }
//   else
//   {
//     cout << 2 << endl;
//   }
// }

// AtCoder ABC161 B

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   double n, m;
//   cin >> n >> m;

//   vector<double> vec(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> vec.at(i);
//   }

//   double sum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     sum += vec.at(i);
//   }
//   // cout << "sum: " << sum << endl;
//   double x = sum / (4 * m);
//   // cout << "x: " << x << endl;
//   double count = 0;
//   for (int i = 0; i < n; i++)

//   {
//     if (vec.at(i) >= x)
//     {
//       count += 1;
//     }
//   }
//   // cout << "count: " << count << endl;
//   if (count >= m)
//   {
//     cout << "Yes" << endl;
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }

// AtCoder ABC161 A
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int a, b, c;
//   cin >> a >> b >> c;
//   int d = c;
//   int e = b;
//   b = a;
//   a = e;
//   c = a;
//   a = d;
//   printf("%d %d %d\n", a, b, c);
// }