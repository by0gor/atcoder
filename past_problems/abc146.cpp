// https://atcoder.jp/contests/abc146/tasks/abc146_b
// Q.ABCD~のn番先のアルファベットを出力せよ。

// 英大文字を超えた場合(26<)は振り出しに戻るように。

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   string s;
//   cin >> s;
//   for (int i = 0; i < s.size(); i++)
//   {
//     s[i] += n;
//     if (s[i] > 'Z')
//       s[i] -= 26;
//   }
//   cout << s << endl;
// }