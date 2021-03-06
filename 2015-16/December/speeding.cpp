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

int N, M, a, b, cur = 0;
int limit[100];

int main() {
    //setIO("speeding"); 
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        cin >> a >> b;
        for (int j = cur; j < cur + a; j++)
            limit[j] = b;
        
        cur += a;
    }
    cur = 0;
    int ans = 0;
    for (int i = 0; i < M; i++){
        cin >> a >> b;
        for (int j = cur; j < cur + a; j++)
            if (b > limit[j]) ans = max(ans, b - limit[j]);
            
        cur += a;
    } 
    
    cout << ans << endl;
    return 0;
}

