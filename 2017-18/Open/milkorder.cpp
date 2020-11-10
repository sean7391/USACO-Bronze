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

int N, M, K, hy[101], final[101], ans;

bool isFixed(int a){
    for (int i = 1; i < N + 1; i++) if (final[i] == a) return true;
    return false;
}

int fixedPos(int a){
    for (int i = 1; i < N + 1; i++) if (final[i] == a) return i;
    return -1;
}

bool oneHy = false;

int main() {
    //setIO("milkorder"); 
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++){
        cin >> hy[i];
        if (hy[i] == 1) oneHy = true;
    }
    for (int i = 0; i < K; i++){
        int a, b; cin >> a >> b;
        final[b] = a;
    }
    
    if (oneHy){
        int cur = 1;
        for (int i = 0; i < M; i++){
            if (isFixed(hy[i]))
                cur = fixedPos(hy[i]) + 1;
            else{
                while (final[cur] != 0) cur++;
                final[cur] = hy[i];
                cur++;
            }
        }
    }
    else{
        int end = N;
        for (int i = M - 1; i >= 0; i--){
            if (isFixed(hy[i]))
                end = fixedPos(hy[i]) - 1;
            else{
                while (final[end] != 0) end--;
                final[end] = hy[i];
                end--;
            }
        }
    }
    
    if (isFixed(1)) cout << fixedPos(1) << endl;
    else{
        for (int i = 1; i < N + 1; i++)
            if (final[i] == 0){
                cout << i << endl;
                return 0;
            }
    }

    return 0;
}

