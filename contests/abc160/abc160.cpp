// AtCoder ABC160 C
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int K, N;
//   cin >> K >> N;

//   vector<int> vec(N);
//   vec.push_back(K);
//   vec.push_back(0);
//   for (int i = 0; i < N; i++)
//   {
//     cin >> vec.at(i);
//   }
//   vector<int> dif(0);
//   for (int i = 0; i < N; i++)
//   {
//     int d = vec.at(i + 1) - vec.at(i);
//     dif.push_back(d);
//   }
//   int e = vec.at(0) - 0;
//   int f = dif.at(N - 1);
//   int end = e + f;
//   int g = *max_element(dif.begin(), dif.end());
//   int ans;
//   for (int i = 0; i < N; i++)
//   {
//     ans += dif.at(i);
//   }
//   ans -= dif.at(N - 1);
//   if (g <= end)
//   {
//     cout << ans << endl;
//   }
//   else
//   {
//     cout << end + ans - g << endl;
//   }
// }
// cout << e << endl;
// cout << f << endl;

// for (auto a : vec)
// {
//   cout << a;
// }
// cout << endl;

// for (auto b : dif)
// {
//   cout << b;
// }
// cout << endl;

// AtCoder ABC160 B
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int64_t X;
//   cin >> X;
//   int a = X / 500;
//   int b = (X % 500) / 5;
//   cout << 1000 * a + 5 * b << endl;
// }

// AtCoder ABC160 A
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   string s;
//   cin >> s;

//   if (s.at(2) == s.at(3))
//   {
//     if (s.at(4) == s.at(5))
//     {
//       cout << "Yes" << endl;
//     }
//     else
//     {
//       cout << "No" << endl;
//     }
//   }
//   else
//   {
//     cout << "No" << endl;
//   }
// }