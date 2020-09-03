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

int N, B, ans = INT_MAX;
vector<pii> cows, cows2;

int calcM(int xLine, int yLine){
    int first = 0, second = 0, third = 0, fourth = 0;
    for (int i = 0; i < sz(cows); i++){
        if (cows[i].f > xLine && cows[i].s > yLine) first++;
        else if (cows[i].f < xLine && cows[i].s > yLine) second++;
        else if (cows[i].f < xLine && cows[i].s < yLine) third++;
        else fourth++;
    }
    
    return max(first, max(second, (max(third, fourth))));
}

int main() {
    //setIO("balancing"); 
    cin >> N >> B; 
    for (int i = 0; i < N; i++){
        int a, b; cin >> a >> b; 
        cows.pb({a, b});
        cows2.pb({b, a});
    }
    sort(all(cows)); sort(all(cows2));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            ans = min(ans, calcM(cows[i].f + 1, cows2[j].f + 1));

    cout << ans << endl;
    return 0;
}

