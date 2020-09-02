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

int b1, b2, s1, s2, g1, g2, p1, p2;
int bs = 0, sg = 0, gp = 0;

int main() {
    //setIO("promote"); 
    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;
    gp = p2 - p1;
    g1 -= gp;
    sg = g2 - g1;
    s1 -= sg;
    bs = s2 - s1;
    cout << bs << endl << sg << endl << gp << endl;
    return 0;
}

