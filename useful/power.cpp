/*
◆二次元配列の初期化
memset(seen, 0, sizeof(seen)); // seen 配列全体を false に初期化

◆イテレータ https://atcoder.jp/contests/apg4b/tasks/APG4b_ai
  vector<int> a = {3, 1, 5, 6, 7, 2, 4};
 
  auto itr1 = a.begin();  // aの先頭を指すイテレータ
  itr1 = itr1 + 2;        // a[2]を指すイテレータ
  auto itr2 = itr1 + 4;   // 末尾の要素(a[6])を指すイテレータ
 
  cout << *itr1 << endl;  // itr1が指す要素(a[2])へのアクセス
  cout << *itr2 << endl;  // itr2が指す要素(a[6])へのアクセス
5
4
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it;
  }
3 1 5 6 7 2 4

イテレータの型はコンテナ毎に定義されていて、複雑なものになっています。 手書きするのは大変なので通常はautoを用います。
コンテナ.begin()
コンテナ.end()
イテレータ1 == イテレータ2 // 2つのイテレータが同じ位置を指すときにtrueになります。

前後のイテレータを得る
next(イテレータ)     // 次の要素を指すイテレータ
next(イテレータ, k)  // k個先の要素を指すイテレータ
イテレータ + k       // k個先の要素を指すイテレータ (map/setでは使えない)
prev(イテレータ)     // 1つ後ろの要素を指すイテレータ
prev(イテレータ, k)  // k個後ろの要素を指すイテレータ
イテレータ - k       // k個後ろの要素を指すイテレータ (map/setでは使えない)

イテレータ間の距離
distance(イテレータ1, イテレータ2) // 「イテレータ1を何回進めるとイテレータ2に一致するか」を返します。
イテレータの移動
イテレータ++; //1つ進める
advance(イテレータ, k); // k個分進める
イテレータ--; // 1つ後ろに進める
advance(イテレータ, -k);  // k回分後ろに進める

*イテレータ // イテレータが指す要素へのアクセス

イテレータが指す要素のメンバへのアクセス
イテレータ->メンバ変数
イテレータ->メンバ関数()  // メンバ関数の呼び出し

コンテナ.erase(イテレータ);  // イテレータが指す要素を削除
for (auto it = コンテナ.begin(); it != コンテナ.end()) {
  if (要素を削除する条件) {
    // eraseは削除後の次の要素のイテレータを返します。
    it = コンテナ.erase(it);  // itの指す要素を削除
  } else {
    it++;
  }
}

  vector<pair<int, int>> a = {{1, 4}, {2, 5}, {3, 6}};
  auto itr = a.begin() + 1;
  // cout << (*itr).first << ", " << (*itr).second << endl; と書くのと同じ
  cout << (itr->first) << ", " << (itr->second) << endl;
2, 5

i番目の要素を指すイテレータ
next(コンテナ.begin(), i)

各要素に対して処理
for (auto it = コンテナ.begin(); it != コンテナ.end(); it++) {
  // 各要素に対する処理
}

prev(コンテナ.end())


◆小文字/大文字変換
小文字→大文字の変換は(char)toupper(文字)、
大文字→小文字の変換は(char)tolower(文字)で利用できます。

大文字の判定はC++で用意されている関数を使ってisupper(文字)で行うこともできます。
同様の便利な関数として小文字の判定を行うislower(文字)や、
10進数の数字かどうかをチェックするisdigit(文字)などもあります。

◆Bit演算
宣言・初期化 「ビット数」の部分は定数でなければならず、変数を使うことはできないことに注意してください。
bitset<ビット数> 変数名;  // すべてのビットが0の状態で初期化される
bitset<ビット数> 変数名("ビット列(長さはビット数に合わせる)");  // 指定したビット列で初期化される
ex) bitset<4> b("1010");

ビット毎のAND演算        &        変数1 & 変数2
ビット毎のOR演算         |        変数1 | 変数2
ビット毎のXOR演算        ^        変数1 ^ 変数2
ビット毎のNOT演算        ~        ~変数
論理左シフト演算        <<        変数 << シフトするビット数
論理右シフト演算        >>        変数 >> シフトするビット数

int main() {
  bitset<8> a("00011011");
  bitset<8> b("00110101");
 
  auto c = a & b;
  cout << "1: " << c << endl;         // 1: 00010001
  cout << "2: " << (c << 1) << endl;  // 2: 00100010
  cout << "3: " << (c << 2) << endl;  // 3: 01000100
  cout << "4: " << (c << 3) << endl;  // 4: 10001000
  cout << "5: " << (c << 4) << endl;  // 5: 00010000
 
  c <<= 4;
  c ^= bitset<8>("11010000"); // XOR演算の複合代入演算子
  cout << "6: " << c << endl; // 6: 11000000
}
1: 00010001
2: 00100010
3: 01000100
4: 10001000
5: 00010000
6: 11000000

bitsetの操作
変数.set(位置, 値);
変更するビットの位置を0始まりのインデックスで指定します。値は0か1を指定します。

変数.test(調べる位置);
調べるビットの位置を0始まりのインデックスで指定します。ビットが1ならtrueを、ビットが0ならfalseを返します。

int main() {
  bitset<4> S;
  S.set(0, 1);  // 0番目のビットを1にする
  cout << S << endl;
 
  if (S.test(3)) {
    cout << "4th bit is 1" << endl;
  } else {
    cout << "4th bit is 0" << endl;
  }
}

ビット演算に用いる演算子は優先順位が低いものが多いので、明示的に()でくくる必要がある場合があります。
優先順位を全て暗記するのは大変なので、ミスを防ぐためにもビット演算を行う際には常に()でくくるようにしましょう。

全てのビットを1にする        変数.set();
特定のビットを1にする        変数.set(1にする位置);
特定のビットの値を変更する    変数.set(位置, 値);
全てのビットを0にする        変数.reset();
特定のビットを0にする        変数.reset(0にする位置);
全てのビットを反転する       変数.flip();
特定のビットを反転する       変数.flip(反転する位置);
特定のビットが1になっているかを調べる        変数.test(調べる位置);
全てのビットが1になっているかを判定する       変数.all()
いずれかのビットが1になっているかを判定する    変数.any()
1のビットの個数を数える      変数.count()
ビット列を文字列化する       変数.to_string()
ビットに対するアクセス       変数[位置]


◆構造体 構造体によって、「複数の型をまとめた新しい型」を作ることが出来る
// 構造体の定義は関数の外側、内側のどちらにも書くことができます。構造体型の値のことをオブジェクトといいます。
struct 構造体名 {
  型1 メンバ変数名1
  型2 メンバ変数名2
  型3 メンバ変数名3
  ...(必要な分だけ書く)
};  // ← セミコロンが必要

// 宣言・初期化
構造体名 変数名;

// 構造体の値を生成
auto 変数名 = 構造体名();

// 宣言と同時に、メンバ変数の初期化を行う場合
構造体名 オブジェク名 = {メンバ変数1の値, メンバ変数2の値, メンバ変数3の値, ...(必要な分だけ書く)};

struct MyPair {
  int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
  string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
};
int main() {
  MyPair p = {12345, "hello"};  // MyPair型の値を宣言
  cout << "p.x = " << p.x << endl; // p.x = 12345
  cout << "p.y = " << p.y << endl; // p.y = hello
}

// メンバ関数も下記のように使える
struct MyPair {
  int x;
  string y;
  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};
 
int main() {
  MyPair p = { 12345, "Hello" };
  p.print();  // オブジェクト`p`の`print`を呼び出す
 
  MyPair q = { 67890, "APG4b" };
  q.print();  // オブジェクト`q`の`print`を呼び出す
}

x = 12345
y = Hello
x = 67890
y = APG4b

// コンストラクタ オブジェクトが作られるときに、独自の初期化処理などを行いたい場合にコンストラクタを使うことができます。

struct NumString {
  int length;
  string s;
  // コンストラクタ
  NumString(int num) {
    cout << "constructor called" << endl;
 
    // 引数のnumを文字列化したものをsに代入し、sの文字数をlengthに代入する
    s = to_string(num);  // (STLの関数)
    length = s.size();
  }
};
 
int main() {
  NumString num(12345);  // コンストラクタに 12345 が渡される
  cout << "num.s = " << num.s << endl;
  cout << "num.length = " << num.length << endl;
}

constructor called
num.s = 12345
num.length = 5

◆lower_bound / upper_bound 昇順にソートされた配列において、「x以上の最小の要素」を求める
  vector<int> a = {0, 10, 13, 14, 20};
  // aにおいて、12 以上最小の要素は 13
  cout << *lower_bound(a.begin(), a.end(), 12) << endl; // 13
 
  // 14 以上最小の要素は 14
  cout << *lower_bound(a.begin(), a.end(), 14) << endl; // 14
 
  // 10 を超える最小の要素は 13
  cout << *upper_bound(a.begin(), a.end(), 10) << endl; // 13

◆スタック
stack<値の型> 変数名;
変数.push(値); // 値の追加
変数.top() // 次の値へのアクセス
変数.pop() // 値の削除
変数.size() // 要素数の取得
変数.empty()  // 空ならtrueを返す

◆両端キュー(deque,デック)
deque<値の型> 変数名;
変数.push_back(値);   // 末尾への値の追加
変数.push_front(値);  // 先頭への値の追加

変数.front()  // 先頭の値へのアクセス
変数.back()   // 末尾の値へのアクセス
変数.at(i)  // i番目へのアクセス

変数.pop_front();  // 先頭の要素の削除
変数.pop_back();   // 末尾の要素の削除

変数.size()
変数.empty()  // 空ならtrueを返す

◆キュー
queue<lli> q;
変数.push(値); // 要素を追加
変数.front() // 先頭の要素へのアクセス
変数.pop() // // 先頭の要素が削除される
変数.size() // 要素数の取得
変数.empty()  // 空ならtrueを返す

◆優先度付きキュー
priority_queue<lli> pq;
変数.push(値); // 要素を追加
変数.top() // 最大の要素の取得
変数.pop() // 最大の要素を削除
変数.size() // 要素数の取得
変数.empty()  // 空ならtrueを返す

  priority_queue<lli> pq;

  // priority_queue<型, vector<型>, greater<型>> 変数; // 小さい順に取り出される優先度付きキュー  
  priority_queue<lli, vlli, greater<lli>> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最小の値を出力
    pq.pop();  // 最小の値を削除
  }

◆set
- 配列の中に出現する値の種類数（重複の無い集合の要素数）
- 集合の中にある値が含まれるかを高速に計算する
- 集合の中に含まれる最小値（最大値）を求める

set<値の型> 変数名;
変数.insert(値);
変数.erase(値);
if (変数.count(値)) {
  //「値」が含まれる
}
else {
  //「値」は含まれない
}
変数.size()
変数.empty()  // 空ならtrueを返す

*begin(変数) // 最小値の取得
*rbegin(変数) // 最大値の取得

// ループでは値が小さいものから順に取り出されます。値を追加した順ではないことに注意してください。
for (auto value : 変数名) {
  // valueを使う
}

◆配列内の総和 再帰関数で実装
int sum_vec_from_i(vlli &a, lli i)
{
  if (i == a.size())
  {
    return 0;
  }
  lli s = sum_vec_from_i(a, i + 1);
  return a[i] + s;
}
int sum_vec(vlli &a)
{
  return sum_vec_from_i(a, 0);
}

vlli d = {4, 7, 3, 2, 7, 9};
cout << sum_vec(d) << endl;

◆sum_range関数。x~yの総和を算出。
int sum_range(lli x, lli y)
{
  if (x == y)
  {
    return x;
  }
  return sum_range(x, y - 1) + y;
}
cout << sum_range(3, 7) << endl; // 3+4+5+6+7=25

◆sumを再帰関数で実装する
int sum(int n) {
  if (n == 0) {
    return 0;
  }
 
  // sum関数の中でsum関数を呼び出している
  int s = sum(n - 1);
  return s + n;
}
cout << sum(10) << endl;   // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

◆素因数分解 https://qiita.com/drken/items/a14e9af0ca2d857dad23#4-%E7%B4%A0%E5%9B%A0%E6%95%B0%E5%88%86%E8%A7%A3
vector<pair<long long, long long>> prime_factorize(long long N)
{
  vector<pair<long long, long long>> res;
  for (long long a = 2; a * a <= N; ++a)
  {
    if (N % a != 0)
      continue;
    long long ex = 0; // 指数

    // 割れる限り割り続ける
    while (N % a == 0)
    {
      ++ex;
      N /= a;
    }

    // その結果を push
    res.push_back({a, ex});
  }

  // 最後に残った数について
  if (N != 1)
    res.push_back({N, 1});
  return res;
}

  // const auto &res = prime_factorize(N);
  // cout << N << ":";
  // for (auto p : res)
  // {
  //   for (int i = 0; i < p.second; ++i)
  //     cout << " " << p.first;
  // }
  // cout << endl;

◆順列全列挙 abc145
  pair<lli, lli> d[8];
  rep(i, 0, n)
  {
    cin >> x[i] >> y[i];
    d[i].first = x[i];
    d[i].second = y[i];
  }
  rep(i, 0, n)
  {
    z.pb(i);
  }
  do
  {
    rep(i, 0, n - 1)
    {
      res += hypot(d[z[i + 1]].second - d[z[i]].second, d[z[i + 1]].first - d[z[i]].first);
    }
  } while (next_permutation(ALL(z)));
  cout << fixed << setprecision(12) << res / par << endl;

◆n!(階乗)の実装 origin(n);
int origin(lli z)
{
  lli xx = 1;
  repe(i, 1, z)
  {
    xx = xx * i;
  }
  return xx;
}

◆stringに含まれる特定の文字の個数
template <class T = string, class U = char>
int char_count(T text, U character)
{
  int ans = 0;
  for (U i : text)
  {
    ans += (i == character);
  }
  return ans;
}
char_count(s, '0')

◆stringな数値をint型として受け取りたいとき
string s="0123";
vi a(4);
rep(i,0, 4) a[i] = s[i] - '0';

◆Pair配列を作るとき
  using P = pair<lli, lli>;
  vector<P> vp;
  vp.emplace_back(a[i], b[i]);

◆順列の全列挙 do-while文とnext_permutation
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());
  do {
    // 1行で今の並び方を出力
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));

累乗: pow(3, n) // 3^n
絶対値: abs(-5) // 5
平方根(ルート): sqrt(25) // 5
最大公約数: gcd(int x, int y)
最小公倍数: lcm(int x, int y)
文字列の部分検索: if(s.substr(i, 3) == "ABC")
文字列の逆転: reverse(t.begin(), t.end());
  ※変数には入れられない！のでs=tとしてtで入れ替えてそれとsを比較する
小数第何位: double ans=0; printf("%.10lf\n", ans);
あるいは
cout<<fixed<<setprecision(12)<<ans<<endl;
◆pow関数でこんなこともできる。
z = pow(2,0.5);
cout << z << endl; // 1.41421

◆大文字・小文字変換
string s;
  cin >> s;
  rep(i,0,s.size()){
    if(65 <= s.at(i) && s.at(i) <= 90){ // この範囲は大文字が格納されている
      cout << (char)(s.at(i)+32); // 大文字を小文字に変換
    }else if(97 <= s.at(i) && s.at(i) <= 122){ // この範囲は小文字が格納されている
      cout << (char)(s.at(i)-32); // 小文字を大文字に変換
    }else {
      cout << s.at(i);
    }
  }
  cout << endl;

◆素数判定
bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}
◆mapの使い方
  map<lli,lli> c;
  for (auto it : c)
  {
    lli num = it.second; // it.first が it.second 個ある
    ans += num * (num - 1) / 2;
  }

◆素数判定(エラトステネスの篩)
// エラトステネスのふるい
int MAX = 101010;
vector<int> is_prime(MAX, 1);
is_prime[0] = 0, is_prime[1] = 0;
for (int i = 2; i < MAX; ++i) {
    if (!is_prime[i]) continue;
    for (int j = i*2; j < MAX; j += i) is_prime[j] = 0;
}

◆intからStringに変換 to_string
int num = 4321;
string str = to_string(num);

◆Stringからintに変換 stoi,stoll,stod
string numStr = "1234";
int num = stoi(numStr);

◆Stringからchar配列への変換
const char* cs = s.data();

◆char[]からStringに変換
char c_str[] = {"hello world!"};
string s_str = c_str;

◆Stringからchar*に変換
string str = "hello world!";
const char* cstr = str.c_str();

◆文字/数値からchar,charから文字/数値
char c = '1';
int i = c - '0';
printf("%d", i); // 1

◆型変換参考 https://marycore.jp/prog/c-lang/convert-or-cast-char-to-int/

◆配列内に該当の要素が含まれているか(Boolean,インデックスを返すor何らかの処理)
auto found_itr = find(vec.begin(), vec.end(), 5);
bool found = (found_itr != vec.end());
if (found)
{
  int index = distance(vec.begin(), found_itr);
  cout << index << endl;
}

◆特殊な比較関数 (50 と近い順にソートとか)
bool cmp(int a, int b) {
  return abs(a - 50) < abs(b - 50);
}
sort(a.begin(), a.end(), cmp);  // 50 と近い順にソート

◆ 
const int MAX = 100000; // 配列の値は 100000 未満だとします

int n; // 要素数
cin >> n;
vector<int> a(n); // 整列したい配列ベクトル (サイズ を n に初期化)
for (int i = 0; i < n; ++i) {
    cin >> a[i]; // 整列したい配列を取得
}

//  各要素の個数をカウントします 
//  num[v] := v の個数 
int num[MAX] = {0};
for (int i = 0; i < n; ++i)
{
  ++num[a[i]]; // a[i] をカウントします
}
//  num の累積和をとります
//  sum[v] := v 以下の値の個数 
int sum[MAX] = {0};
for (int v = 1; v < MAX; ++v)
{
  sum[v] = sum[v - 1] + num[v];
}
//  sum を元にソート 
//  sorted: a をソートしたもの 
vector<int> sorted(n);
for (int i = n - 1; i >= 0; --i)
{
  sorted[--sum[a[i]]] = a[i];
}

◆累積和 https://qiita.com/drken/items/56a6b68edef8fc605821
  vi a(n);
  rep(i, 0, n)
  {
    cin >> a[i];
  }
  vi b(n + 1, 0);
  rep(i, 0, n)
  {
    b[i + 1] = b[i] + a[i];
  }
  int left, right;
  cin >> left >> right;
  cout << b[right] - b[left] << endl;

◆正規表現 regex_match, regex https://qiita.com/sea_ship/items/7c8811b5cf37d700adc4
cout << (regex_match(s, regex("(dream(er)?|eraser?)+")) ? "YES" : "NO") << endl;
cout << (regex_match(S, regex("(dream|dreamer|erase|eraser)*")) ? "YES" : "NO") << endl;

◆正規表現 指定した文字列以外削除
string s = regex_replace(s, regex("[^AC]"), "");

*/

// https://github.com/git/git/security/advisories/GHSA-qm7j-c969-7j4q
// https://news.mynavi.jp/article/20200418-1018783/
// https://gunosy.com/articles/adod8