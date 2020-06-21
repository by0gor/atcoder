#include <bits/stdc++.h>
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define INF 1000000000000 //10^12
#define MOD 10000007      //10^9+7
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using vs = vector<string>;
using ll = long long;
// vector入力
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (T &x : vec)
    is >> x;
  return is;
}
// vector出力
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
  // os << '{';
  for (int i = 0; i < vec.size(); i++)
  {
    os << vec[i] << (i + 1 == vec.size() ? "" : "");
  }
  // os << '}';
  return os;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli h, k, n, m, q, w, ans = 0, count = 0;
  string s, t;
  cin >> n >> m >> q;
  vi a(q), b(q), c(q), d(q);
  vlli e(10);
  rep(i, 0, q)
  {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }
  for (e[0] = 1; e[0] <= m; e[0]++)
  {
    for (e[1] = e[0]; e[1] <= m; e[1]++)
    {
      for (e[2] = e[1]; e[2] <= m; e[2]++)
      {
        for (e[3] = e[2]; e[3] <= m; e[3]++)
        {
          for (e[4] = e[3]; e[4] <= m; e[4]++)
          {
            for (e[5] = e[4]; e[5] <= m; e[5]++)
            {
              for (e[6] = e[5]; e[6] <= m; e[6]++)
              {
                for (e[7] = e[6]; e[7] <= m; e[7]++)
                {
                  for (e[8] = e[7]; e[8] <= m; e[8]++)
                  {
                    for (e[9] = e[8]; e[9] <= m; e[9]++)
                    {
                      lli tmp = 0;
                      rep(i, 0, q)
                      {
                        if (e[b[i] - 1] - e[a[i] - 1] == c[i])
                        {
                          tmp += d[i];
                        }
                      }
                      if (tmp > ans)
                        ans = tmp;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
}