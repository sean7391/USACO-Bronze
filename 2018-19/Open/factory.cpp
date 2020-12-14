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

int N, ans = -1;
vector<int> adj[101];
int target;
bool found = false;

void dfs(int v){
    trav(u, adj[v]){
        if (u == target){
            found = true;
            break;
        }
        dfs(u);
    }
}

int main() {
    //setIO("factory"); 
    cin >> N;
    for (int i = 0; i < N - 1; i++){
        int a, b; cin >> a >> b;
        adj[a].pb(b);
    }
    
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            if (i == j) continue;
            target = i;
            found = false;
            dfs(j);
            if (!found) break;
        }
        
        if (!found) continue;
        else{
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}

// WHY DID I USE DFS FOR THIS HAHA

