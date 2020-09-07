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

int a1x, a1y, a2x, a2y, b1x, b1y, b2x, b2y;
int maxX = 0, minX = 10, maxY = 0, minY = 0;

int main() {
    //setIO("square");
    cin >> a1x >> a1y >> a2x >> a2y >> b1x >> b1y >> b2x >> b2y;
    maxX = max(a1x, max(a2x, max(b1x, b2x)));
    maxY = max(a1y, max(a2y, max(b1y, b2y)));
    minX = min(a1x, min(a2x, min(b1x, b2x)));
    minY = min(a1y, min(a2y, min(b1y, b2y)));
    int xDiff = maxX - minX, yDiff = maxY - minY;
    int ans = max(xDiff, yDiff) * max(xDiff, yDiff);
    cout << ans << endl;
    return 0;
}

