// https://atcoder.jp/contests/abc137/tasks/abc137_b
// Q.座標上の隣り合う黒い石を探せ。
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int k, x;
//   cin >> k >> x;
//   int a = x - (k - 1);
//   int b = x + (k - 1);
//   vector<int> vec(k * 2 - 1);
//   for (int i = 0; i < k * 2 - 1; i++)
//   {
//     while (a <= b)
//     {
//       vec.at(i) = a;
//       cout << vec.at(i) << ' ';
//       a++;
//     }
//   }
//   cout << endl;
// }