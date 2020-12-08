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

int N, M;

int main() {
    //setIO("revegetate"); 
    cin >> N >> M;
    vector<int> pastures[N + 1];
    int types[N + 1]; memset(types, 0, sizeof(types));
    
    for (int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        pastures[a].pb(b);
        pastures[b].pb(a);
    }
    
    bool works = true;
    for (int i = 1; i < N + 1; i++){
        for (int k = 1; k <= 4; k++){
            works = true;
            for (int j = 0; j < sz(pastures[i]); j++){
                if (types[pastures[i][j]] == k){
                    works = false;
                    break;
                }
            }
            
            if (works){
                types[i] = k;
                break;
            }
        }
    }
    
    for (int i = 1; i < N + 1; i++) cout << types[i];
    cout << endl;
    return 0;
}

