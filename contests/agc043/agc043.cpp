// // AtCoder AGC043 A -answer

// #include <bits/stdc++.h>
// using namespace std;
// int H, W, a, b, dp[105][105];
// char chars[105][105];
// int main()
// {
//   cin >> H >> W;
//   for (int i = 0; i < H; i++)
//   {
//     for (int j = 0; j < W; j++)
//     {
//       cin >> chars[i][j];
//     }
//   }

//   if (chars[0][0] == '#')
//   {
//     dp[0][0] = 1;
//   }

//   for (int i = 1; i < H; i++)
//   {
//     if (chars[i][0] == '#')
//     {
//       if (chars[i - 1][0] == '#')
//       {
//         dp[i][0] = dp[i - 1][0];
//       }
//       else
//       {
//         dp[i][0] = dp[i - 1][0] + 1;
//       }
//     }
//     else
//     {
//       dp[i][0] = dp[i - 1][0];
//     }
//   }

//   for (int j = 1; j < W; j++)
//   {
//     int i = 0;
//     if (chars[0][j] == '#')
//     {
//       if (chars[0][j - 1] == '#')
//       {
//         dp[0][j] = dp[0][j - 1];
//       }
//       else
//       {
//         dp[0][j] = dp[0][j - 1] + 1;
//       }
//     }
//     else
//     {
//       dp[i][j] = dp[0][j - 1];
//     }
//   }

//   for (int i = 1; i < H; i++)
//   {
//     for (int j = 1; j < W; j++)
//     {
//       if (chars[i][j] == '#')
//       {
//         if (chars[i - 1][j] == '#')
//         {
//           a = dp[i - 1][j];
//         }
//         else
//         {
//           a = dp[i - 1][j] + 1;
//         }
//         if (chars[i][j - 1] == '#')
//         {
//           b = dp[i][j - 1];
//         }
//         else
//         {
//           b = dp[i][j - 1] + 1;
//         }
//         dp[i][j] = min(a, b);
//       }
//       else
//       {
//         dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]);
//       }
//     }
//   }

//   cout << dp[H - 1][W - 1] << endl;
//   return 0;
// }

// // AtCoder AGC043 A
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //   int h, w;
// //   cin >> h >> w;

// //   vector<bool> row(h, false);
// //   vector<bool> col(w, false);
// //   vector<vector<char>> vec(h, vector<char>(w));
// //   double count1 = 0;
// //   for (int i = 0; i < h; i++)
// //   {
// //     for (int j = 0; j < w; j++)
// //     {
// //       cin >> vec.at(i).at(j);
// //     }
// //   }

// //   if (vec.at(0).at(0) == '#')
// //   {
// //     count1 += 1;
// //   }
// //   if (vec.at(h - 1).at(w - 1) == '#')
// //   {
// //     count1 += 1;
// //   }

// //   // for (int i = 0; i < h; i++)
// //   // {
// //   //   for (int j = 0; j < w; j++)
// //   //   {
// //   //     if (vec.at(i).at(j) == '#')
// //   //     {
// //   //       row.at(i) = true;
// //   //       col.at(j) = true;
// //   //     }
// //   //   }
// //   // }

// //   // for (int j = 0; j < w; j++)
// //   // {
// //   //   cout << row.at(j) << endl;
// //   // }

// //   for (int i = 1; i < h; i++)
// //   {
// //     // if (row.at(i))
// //     {
// //       for (int j = 1; j < w; j++)
// //       {
// //         // if (col.at(j))
// //         if ((vec.at(i - 1).at(j - 1) == '#') && (vec.at(i).at(j - 1) == '#') && (vec.at(i - 1).at(j) == '#') && (vec.at(i).at(j) == '.'))
// //         {
// //           count1 += 1;
// //         }
// //         else if ((vec.at(i - 1).at(j - 1) == '.') && (vec.at(i).at(j - 1) == '#') && (vec.at(i - 1).at(j) == '#') && (vec.at(i).at(j) == '.'))
// //         {
// //           count1 += 1;
// //         }
// //       }
// //     }
// //     // else
// //     // {
// //     //   for (int j = 0; j < w; j++)
// //     //   {
// //     //     if (col.at(j) == false)
// //     //     {
// //     //       count1 += 1;
// //     //     }
// //     //   }
// //     // }
// //   }
// //   cout << count1 << endl;
// // }
