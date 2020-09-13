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

int N, M, ans = 0;
char spotty[100][100], plain[100][100];

int main() {
    //setIO("cownomics"); 
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) 
            cin >> spotty[i][j];
            
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> plain[i][j];
            
    for (int i = 0; i < M; i++){
        int A1 = 0, G1 = 0, T1 = 0, C1 = 0, A2 = 0, G2 = 0, T2 = 0, C2 = 0;
        for (int j = 0; j < N; j++){
            if (spotty[j][i] == 'A') A1++;
            else if (spotty[j][i] == 'G') G1++;
            else if (spotty[j][i] == 'T') T1++;
            else C1++;
        }
        
        for (int j = 0; j < N; j++){
            if (plain[j][i] == 'A') A2++;
            else if (plain[j][i] == 'G') G2++;
            else if (plain[j][i] == 'T') T2++;
            else C2++;
        }
        
        if ((A1 > 0 && A2 > 0) || (T1 > 0 && T2 > 0) || (G1 > 0 && G2 > 0) || (C1 > 0 && C2 > 0)) continue;
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}

