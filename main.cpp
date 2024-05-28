#include<bits/stdc++.h>
using namespace std;
#define int long long
unsigned xrand() {
  static unsigned x = 314159265, y = 358979323, z = 846264338, w = 327950288;
  unsigned t = x ^ x << 11; x = y; y = z; z = w; return w = w ^ w >> 19 ^ t ^ t >> 8;
}
int xrand(int a, int b) { return a + xrand() % (b - a + 1); }
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
void solve(){
    int n;cin>>n;
    unordered_map<int, int, custom_hash> mp;
    //https://codeforces.com/contest/1850/submission/214809950
    //https://codeforces.com/contest/1850/submission/216507343
    // the first one got tled bcz of collisions within hash would recommed you using
    // custom hash while hashing in cf the ds at line 23 is an instance of that.
}
signed main(){
    solve();
}