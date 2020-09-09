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
char arr[10][10];

bool tipped(){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (arr[i][j] == '1') return true;
            
    return false;
}

int main() {
    //setIO("cowtip"); 
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    
    while(tipped()){
        int xbound, ybound;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (arr[i][j] == '1'){
                    xbound = i;
                    ybound = j;
                }
        
        for (int i = 0; i <= xbound; i++)
            for (int j = 0; j <= ybound; j++){
                if (arr[i][j] == '0') arr[i][j] = '1';
                else arr[i][j] = '0';
            }
        
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}

