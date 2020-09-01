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

int N, M, D, S, ans = 0;
int p[1000] m[1000], t[1000], s[50], st[50];

int main() {
    //setIO("badmilk"); 
    cin >> N >> M >> D >> S;
    for (int i = 0; i < D; i++) cin >> p[i] >> m[i] >> t[i];
    for (int i = 0; i < S; i++) cin >> s[i] >> st[i];

    for (int i = 1; i <= M; i++){
        bool good = false;
        for (int j = 0; j < S; j++){
            for (int k = 0; k < D; k++) {
                if (p[k] == s[j] && i == m[k] && t[k] < st[j]){
                    good = true;
                    break;
                }
                
                good = false;
            }
            if (!good) break;
        }
        
        if (good){
            int num = 0;
            for (int j = 1; j <= N; j++){
                for (int k = 0; k < D; k++){
                    if (m[k] == i && p[k] == j){
                        num++;
                        break;
                    }
                }
            }
            
            ans = max(ans, num);
        }
    }
    
    cout << ans << endl;
    return 0;
}

