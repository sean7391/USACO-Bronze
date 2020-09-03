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

int N;
int visited[2000][2000];

int main() {
    //setIO("mowing"); 
    cin >> N;
    int x = 1000, y = 1000, t = 1, ans = 1e9;
    bool good = false;;
    for (int i = 0; i < N; i++){
        char c; int a; cin >> c >> a;
        if (c == 'N'){
            for (int j = 1; j <= a; j++){
                if (visited[x][y] > 0){
                    ans = min(ans, t - visited[x][y]);
                    good = true;
                }
                visited[x][y] = t;
                t++;
                x++;
            }
        }
        else if (c == 'S'){
            for (int j = 1; j <= a; j++){
                if (visited[x][y] > 0){
                    ans = min(ans, t - visited[x][y]);
                    good = true;
                }
                visited[x][y] = t;
                t++;
                x--;
            }
        }
        else if (c == 'E'){
            for (int j = 1; j <= a; j++){
                if (visited[x][y] > 0){
                    ans = min(ans, t - visited[x][y]);
                    good = true;
                }
                visited[x][y] = t;
                t++;
                y++;
            }
        }
        else{
            for (int j = 1; j <= a; j++){
                if (visited[x][y] > 0){
                    ans = min(ans, t - visited[x][y]);
                    good = true;
                }
                visited[x][y] = t;
                t++;
                y--;
            }
        }
    }
    
    if (good) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}

