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
string arr[100][100];

int main() {
    //setIO("name");
    cin >> N;
    for (int i = 0; i < N; i++){
        string t; cin >> t;
        int n; cin >> n;
        arr[i][0] = to_string(n);
        for (int j = 1; j < n + 1; j++) cin >> arr[i][j];
    }
    
    for (int i = 0; i < N - 1; i++){
        for (int j = i + 1; j < N; j++){
            int cnt = 0, firstLen = stoi(arr[i][0]), secLen = stoi(arr[j][0]);
            for (int k = 1; k < firstLen + 1; k++){
                for (int l = 1; l < secLen + 1; l++){
                    if (arr[i][k] == arr[j][l])
                        cnt++;
                }
            }
            
            ans = max(ans, cnt);
        }
    }
    
    cout << ans + 1 << endl;
    return 0;
}

