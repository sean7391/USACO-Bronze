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
int freqa[26], freqb[26], ans[26];

int main() {
    //setIO("blocks");
    cin >> N;
    for (int i = 0; i < N; i++){
        string a, b; cin >> a >> b;
        memset(freqa, 0, sizeof(freqa));
        memset(freqb, 0, sizeof(freqb));
        for (int j = 0; j < a.length(); j++) freqa[a[j] - 'a']++;
        for (int j = 0; j < b.length(); j++) freqb[b[j] - 'a']++;
        for (int j = 0; j < 26; j++) ans[j] += max(freqa[j], freqb[j]);
    }
    
    for (int i = 0; i < 26; i++) cout << ans[i] << endl;
    return 0;
}

