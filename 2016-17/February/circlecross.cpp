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

int ans = 0, freq[52];
char arr[52];
bool visited[52];

int main() {
    //setIO("circlecross"); 
    for (int i = 0; i < 52; i++) cin >> arr[i];
    for (int i = 0; i < 51; i++){
        if (visited[arr[i] - 'A']) continue;
        memset(freq, 0, sizeof(freq));
        for (int j = i + 1; j < 52; j++){
            if (arr[j] == arr[i]) break;
            else freq[arr[j] - 'A']++;
        }
        
        for (int i = 0; i < 52; i++) if (freq[i] == 1) ans++;
        visited[arr[i] - 'A'] = true;
    }
    
    cout << ans/2 << endl;
    return 0;
}

