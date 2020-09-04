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

bool visible[2000][2000];

int main() {
    //setIO("billboard"); 
    for (int i = 0; i < 3; i++){
        int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000; x2 += 1000; y1 += 1000; y2 += 1000;

        for (int j = x1; j < x2; j++)
            for (int k = y1; k < y2; k++){
                if (i == 2) visible[j][k] = false;
                else visible[j][k] = true;
            }
    }
    
    int ans = 0;
    for (int i = 0; i < 2000; i++)
        for (int j = 0; j < 2000; j++)
            if (visible[i][j]) ans++;
    
    cout << ans << endl;
    return 0;
}

