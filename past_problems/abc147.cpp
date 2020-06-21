// https://atcoder.jp/contests/abc147/tasks/abc147_b
// Q.回文にするまでの回数！

// reverse(t.begin(), t.end());
// 変数には入れられない！のでs=tとしてtで入れ替えてそれとsを比較する

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string s, t;
//   cin >> s;
//   t = s;
//   reverse(t.begin(), t.end());
//   int count = 0;
//   for (int i = 0; i < s.length()/2; i++)
//   {
//     if (s[i] != t[i])
//     {
//       count++;
//     }
//   }
//   cout << count << endl;
// }