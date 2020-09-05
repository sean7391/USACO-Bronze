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
vector<int> days, delta;
vector<string> names;

int main() {
    //setIO("measurement"); 
    cin >> N; days.rsz(N); delta.rsz(N); names.rsz(N);
    vector<int> DAYS, DELTA; vector<string> NAMES;
    for (int i = 0; i < N; i++) cin >> days[i] >> names[i] >> delta[i];
    vector<int> inds(N); iota(all(inds), 0);
    sort(all(inds), [](int a, int b){return days[a] < days[b];});
    trav(t, inds){
        DAYS.pb(days[t]);
        DELTA.pb(delta[t]);
        NAMES.pb(names[t]);
    }
    swap(days, DAYS); swap(delta, DELTA); swap(names, NAMES);
    
    int M = 7, B = 7, E = 7;
    for (int i = 0; i < N; i++){
        bool wasTop = false, wasAlone = false, isTop = false, isAlone = false;
        if (names[i] == "Bessie"){
            if (B >= M && B >= E) wasTop = true;
            if (wasTop && B > E && B > M) wasAlone = true;
            B += delta[i];
            if (B >= M && B >= E) isTop = true;
            if (isTop && B > E && B > M) isAlone = true;
            if (wasTop != isTop || isAlone != wasAlone) ans++;
        }
        else if (names[i] == "Mildred"){
            if (M >= B && M >= E) wasTop = true;
            if (wasTop && M > B && M > E) wasAlone = true;
            M += delta[i];
            if (M >= B && M >= E) isTop = true;
            if (isTop && M > B && M > E) isAlone = true;
            if (wasTop != isTop || isAlone != wasAlone) ans++;
        }
        else{
            if (E >= B && E >= M) wasTop = true;
            if (wasTop && E > B && E > M) wasAlone = true;
            E += delta[i];
            if (E >= B && E >= M) isTop = true;
            if (wasTop && E > B && E > M) isAlone = true;
            if (wasTop != isTop || isAlone != wasAlone) ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}

