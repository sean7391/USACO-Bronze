#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define trav(a, x) for (auto& a: x)
#define ins insert
#define pq priority_queue
#define sz(x) (int)x.size()
#define rsz resize
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define endl "\n"

typedef long long ll;
typedef pair<int, int> pii; 

const int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

void setIO(string s){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int N, ans = 0;

int main() {
    //setIO("blist"); 
    cin >> N; int s[N], t[N], b[N];
    for (int i = 0; i < N; i++) cin >> s[i] >> t[i] >> b[i];
    
    int buckets = 0;
    for (int i = 1; i <= 1000; i++){
        for (int j = 0; j < N; j++)
            if (s[j] == i) 
                buckets += b[j];
 
        for (int j = 0; j < N; j++)
            if (t[j] == i)
                buckets -= b[j];
                
        ans = max(ans, buckets);
    }
    
    cout << ans << endl;
    return 0;
}

