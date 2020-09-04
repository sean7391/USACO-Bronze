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

int N, ans = INT_MAX;
vector<pii> x, y;

int main() {
    //setIO("reduce"); 
    cin >> N; 
    for (int i = 0; i < N; i++){
        int a, b; cin >> a >> b;
        x.pb({a, b});
        y.pb({b, a});
    }
    sort(all(x)); sort(all(y));
    pii lMost, rMost, bMost, tMost;
    lMost = x[0]; rMost = x[N - 1];
    bMost.f = y[0].s; bMost.s = y[0].f; tMost.f = y[N - 1].s; tMost.s = y[N - 1].f;
    
    int xMin = INT_MAX, xMax = -1, yMin = INT_MAX, yMax = -1;
    for (int i = 0; i < N; i++){
        if (x[i].f == lMost.f && x[i].s == lMost.s) continue;
        xMin = min(xMin, x[i].f);
        xMax = max(xMax, x[i].f);
        yMin = min(yMin, x[i].s);
        yMax = max(yMax, x[i].s);
    }
    ans = min(ans, (yMax - yMin) * (xMax - xMin));
    xMin = INT_MAX; xMax = -1; yMin = INT_MAX; yMax = -1;
    for (int i = 0; i < N; i++){
        if (x[i].f == rMost.f && x[i].s == rMost.s) continue;
        xMin = min(xMin, x[i].f);
        xMax = max(xMax, x[i].f);
        yMin = min(yMin, x[i].s);
        yMax = max(yMax, x[i].s);
    }
    ans = min(ans, (yMax - yMin) * (xMax - xMin));
    xMin = INT_MAX; xMax = -1; yMin = INT_MAX; yMax = -1;
    for (int i = 0; i < N; i++){
        if (x[i].f == bMost.f && x[i].s == bMost.s) continue;
        xMin = min(xMin, x[i].f);
        xMax = max(xMax, x[i].f);
        yMin = min(yMin, x[i].s);
        yMax = max(yMax, x[i].s);
    }
    ans = min(ans, (yMax - yMin) * (xMax - xMin));
    xMin = INT_MAX; xMax = -1; yMin = INT_MAX; yMax = -1;
    for (int i = 0; i < N; i++){
        if (x[i].f == tMost.f && x[i].s == tMost.s) continue;
        xMin = min(xMin, x[i].f);
        xMax = max(xMax, x[i].f);
        yMin = min(yMin, x[i].s);
        yMax = max(yMax, x[i].s);
    }
    ans = min(ans, (yMax - yMin) * (xMax - xMin));
    
    cout << ans << endl;
    return 0;
}

