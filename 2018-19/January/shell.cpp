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
int a[100], b[100], g[100];

int main() {
    //setIO("shell"); 
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i] >> b[i] >> g[i];
    
    for (int i = 1; i <= 3; i++){
        int cnt = 0;
        int arr[] = {1, 2, 3};
        for (int j = 0; j < N; j++){
            int t = arr[a[j] - 1];
            arr[a[j] - 1] = arr[b[j] - 1];
            arr[b[j] - 1] = t;
            
            if (arr[g[j] - 1] == i) cnt++;
        }
        
        ans = max(ans, cnt);
    }
    
    cout << ans << endl;
    return 0;
}

