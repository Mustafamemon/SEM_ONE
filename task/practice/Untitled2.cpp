    #include <vector>
    #include <list>
    #include <map>
    #include <set>
    #include <deque>
    #include <queue>
    #include <stack>
    #include <bitset>
    #include <algorithm>
    #include <functional>
    #include <numeric>
    #include <utility>
    #include <sstream>
    #include <iostream>
    #include <iomanip>
    #include <cstdio>
    #include <cmath>
    #include <cstdlib>
    #include <cctype>
    #include <string>
    #include <cstring>
    #include <cstdio>
    #include <cmath>
    #include <cstdlib>
    #include <ctime>
    #include <fstream>
    #include <cassert>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    //#include <sys/resource.h>
    using namespace std;
    using namespace __gnu_pbds;
     
    typedef long long ll;
    typedef long double ld;
    typedef vector<int> vi;
    typedef vector<vector<int>> vvi;
    typedef pair<int, int> pii;
    typedef vector<vector<pair<int, int>>> vvpii;
    typedef vector<ll> vl;
    typedef vector<vector<ll>> vvl;
    typedef pair<ll, ll> pll;
    typedef vector<vector<pair<ll, ll>>> vvpll;
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    pbds;
     
    #define fbo find_by_order
    #define ook order_of_key
     
    template<typename T, typename U> static void amin(
      T &x, U y) {
      if(y < x) {
        x = y;
      }
    }
     
    template<typename T, typename U> static void amax(
      T &x, U y) {
      if(x < y) {
        x = y;
      }
    }
     
    #ifdef loc
    template<class T, class U>
      ostream &operator<<(ostream &out, const pair<T, U> &a) {
      out << "[" << a.first << " " << a.second << "]";
      return out;
    }
    template<class T>
      ostream &operator<<(ostream &out, const vector<T> &a) {
      for(auto && it : a) {
        out << it << " ";
      }
      return out;
    }
    template<class T>
      ostream &operator<<(ostream &out, const set<T> &a) {
        for(auto &it : a) {
          out << it << " ";
        }
        return out;
      }
    template<class T>
      ostream &operator<<(ostream &out, const multiset<T> &a) {
      for(auto &it : a) {
        out << it << " ";
      }
      return out;
    }
    template<class T, class U>
      ostream &operator<<(ostream &out, const map<T, U> &a) {
      for(auto &it : a) {
        out << it.first << " -> " << it.second << " | ";
      }
      return out;
    }
    template<class T, class U>
      ostream &operator<<(ostream &out, const multimap<T, U> &a) {
      for(auto &it : a) {
        out << it.first << " -> " << it.second << " | ";
      }
      return out;
    }
    #define pra(a, n) cerr << #a << " : "; for(int i = 0; i <= n; ++i) cerr << a[i] << " "; cerr << endl;
    #define praa(a, n, m) cerr << #a << " : " << endl; for(int i = 0; i <= n; ++i) { for(int j = 0;j <= m; ++j) cerr << a[i][j] << " "; cerr << endl; }
    #define pr(...) __f(#__VA_ARGS__, __VA_ARGS__)
    #define prl() cerr << __LINE__ << ": " << __PRETTY_FUNCTION__ << endl;
    template <typename Arg1>
    void __f(const char *name, Arg1 &&arg1) {
      cerr << name << " : " << arg1 << std::endl;
    }
    template <typename Arg1, typename... Args>
    void __f(const char *names, Arg1 &&arg1, Args &&... args) {
      const char *comma = strchr(names + 1, ',');
      cerr.write(names, comma - names) << " : " << arg1 << " | ";
      __f(comma + 1, args...);
    }
    #else
    #define pr(...)
    #define pra(a,n)
    #define praa(a,n,m)
    #define prl()
    #endif
     
    #define inc_stack_limit const rlim_t kStackSize = 64 * 1024 * 1024; struct rlimit rl; rl.rlim_cur = kStackSize; setrlimit(RLIMIT_STACK, &rl);
    #define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    #define mp make_pair
    #define pb push_back
    #define eb emplace_back
    #define all(x) (x).begin(), (x).end()
    #define sz(a) int(a.size())
    #define rep(i, s, n)  for(int i = s; i <= n; ++i)
    #define rev(i, n, s)  for(int i = n; i >= s; --i)
    #define fore(x, a) for(auto &&x : a)
    #define fill(a, x) memset((a), (x), sizeof(a))
    #define tcase int __T; cin >> __T; rep(Tc, 1, __T)
    #define F first
    #define S second
    #define gc getchar
     
    const int mod = 1000000007;
    const int S = 100005;
    const ll inf = mod * (ll)mod;
    const double eps = 1e-12;
     
     
    set<vector<vector<bool>>> a, d;
     
    bool v[10][10];
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    int n, m;
    int p[100][10];
     
     
    int main() {
    #ifdef loc
      if(!freopen((string(FOLDER) + "inp.txt").c_str(), "r", stdin)) {
        assert(0);
      }
      freopen((string(FOLDER) + "out.txt").c_str(), "w", stdout);
    #endif
      int k;
      cin >> n >> m >> k;
      k--;
      a.insert(vector<vector<bool>>(1, vector<bool>(1, 1)));
      while(k-- > 0) {
        d = a;
        a.clear();
        fore(b, d) {
          int r = sz(b), c = sz(b[0]);
          rep(i, 0, r - 1) {
            rep(j, 0, c - 1) {
              if(b[i][j]) {
                rep(s, 0, 3) {
                  int ni = i + dx[s], nj = j + dy[s];
                  if(ni >= 0 && ni < r && nj >= 0 && nj < c && b[ni][nj]) {
                    continue;
                  }
                  int ox = 0, oy = 0;
                  if(ni < 0) {
                    ox = 1;
                  }
                  if(nj < 0) {
                    oy = 1;
                  }
                  vector<vector<bool>> e(r + int(ni < 0 ||
                                                 ni >= r), vector<bool>(c + int(nj < 0 || nj >= c)));
                  rep(ii, ox, ox + r - 1) {
                    rep(jj, oy, oy + c - 1) {
                      e[ii][jj] = b[ii - ox][jj - oy];
                    }
                  }
                  e[ni + ox][nj + oy] = 1;
                  a.insert(e);
                }
              }
            }
          }
        }
      }
      rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
          cin >> p[i][j];
        }
      }
      int res = 1;
      fore(b, a) {
        //pr(b);
        int r = sz(b), c = sz(b[0]);
        rep(i, 0, n - r) {
          rep(j, 0, m - c) {
            int e = 0;
            rep(ii, i, i + r - 1) {
              rep(jj, j, j + c - 1) {
                if(b[ii - i][jj - j]) {
                  e += p[ii][jj];
                }
              }
            }
            res = int((res * (ll)e) % mod);
          }
        }
      }
      cout << res << endl;
      return 0;
    } 
