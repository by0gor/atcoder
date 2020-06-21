// https://atcoder.jp/contests/abc143/tasks/abc143_b
// Q.数値配列から任意の2つを取り出した総和

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> d(n);
//   int ans = 0;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> d.at(i);
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       ans += d.at(i) * d.at(j);
//     }
//   }
//   cout << ans << endl;
// }