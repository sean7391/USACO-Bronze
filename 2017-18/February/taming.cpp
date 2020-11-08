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

int N, m = 0, M = 0;
bool bad = false;

int main() {
    //setIO("taming"); 
    cin >> N; int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    arr[0] = 0;
    
    for (int i = 1; i < N; i++){
        if (arr[i] != -1){
            int x = arr[i], j = i;
            while(x >= 0){
                if (j < 0) bad = true;
                if (arr[j] != -1 && arr[j] != x) bad = true;
                arr[j] = x;
                x--; j--;
            }
        }
    }
    
    for (int i = 0 ; i < N; i++){
        if (arr[i] == 0){
            m++;
            M++;
        }
        if (arr[i] == -1) M++;
    }
    
    if (bad) cout << -1 << endl;
    else cout << m << " " << M << endl;
    return 0;
}

