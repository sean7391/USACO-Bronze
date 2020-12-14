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

int ans = 0;
pii B, R, L;

int main() {
    //setIO("buckets"); 
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++){
            char c; cin >> c;
            if (c == 'B'){
                B.f = i; 
                B.s = j;
            }
            else if (c == 'R'){
                R.f = i;
                R.s = j;
            }
            else if (c == 'L'){
                L.f = i;
                L.s = j;
            }
        }
        
    if (B.f != L.f && B.s != L.s)
        ans = abs(B.f - L.f) + abs(B.s - L.s);
    else if (B.f == L.f){
        if (R.f == B.f && R.s > min(B.s, L.s) && R.s < max(B.s, L.s)) ans = abs(B.s - L.s) + 2;
        else ans = abs(B.s - L.s);
    }
    else{
        if (R.s == B.s && R.f > min(B.f, L.f) && R.f < max(B.f, L.f)) ans = abs(B.f - L.f) + 2;
        else ans = abs(B.f - L.f);
    }
    
    cout << ans - 1 << endl; 
    return 0;
}

