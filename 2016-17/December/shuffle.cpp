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

int N;

int main() {
    //setIO("shuffle"); 
    cin >> N; int arr[N + 1], loc[N + 1], ans[N + 1];
    for (int i = 1; i <= N; i++){
        int a; cin >> a; 
        loc[a] = i;
    }
    for (int i = 1; i <= N; i++) cin >> arr[i];
    
    copy(arr + 1, arr + N + 1, ans + 1);
    for (int i = 0; i < 3; i++){
        for (int j = 1; j <= N; j++)
            ans[loc[j]] = arr[j];
            
        copy(ans + 1, ans + N + 1, arr + 1);
    }
    
    for (int i = 1; i <= N; i++) cout << ans[i] << endl;
    return 0;
}

