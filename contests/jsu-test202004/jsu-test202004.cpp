// AtCoder Judge System Update Test Contest 202004 B問題
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> x(n);
//   vector<string> c(n);
//   // vector<vector<int>> vec(n, vector<string>(n));
//   for (int i = 0; i < n; i++)
//   {
//     // cin >> vec.at(i).at(i);
//     cin >> x.at(i) >> c.at(i);
//   }
//   // sort(vec.at().begin(), vec.at().end());
//   sort(x.begin(), x.end());

//   for (int i = 0; i < n; i++)
//   {
//     if (c.at(i) == "R")
//     {
//       cout << x.at(i) << endl;
//     }
//     else
//     {
//       for (int i = 0; i < n; i++)
//       {
//         if (c.at(i) == "B")
//         {
//           cout << x.at(i) << endl;
//         }
//       }
//     }
//   }
// }

// AtCoder Judge System Update Test Contest 202004 A問題
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int s, l, r;
//   cin >> s >> l >> r;

//   if (s <= r && l <= s)
//   {
//     cout << s << endl;
//   }
//   else
//   {
//     while (s > r || s < l)
//     {
//       if (s < l)
//       {
//         s += 1;
//       }
//       else if (r < s)
//       {
//         s -= 1;
//       }
//     }
//     cout << s << endl;
//   }
// }

