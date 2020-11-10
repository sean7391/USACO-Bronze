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

int arr[3][3], ans = 0, ans2 = 0;

bool cowWins(int a){
    for (int i = 0; i < 3; i++) if (arr[i][0] == a && arr[i][1] == a && arr[i][2] == a) return true;
    for (int i = 0; i < 3; i++) if (arr[0][i] == a && arr[1][i] == a && arr[2][i] == a) return true;
    if (arr[0][0] == a && arr[1][1] == a && arr[2][2] == a) return true;
    if (arr[0][2] == a && arr[1][1] == a && arr[2][0] == a) return true;
    return false;
}

bool teamWins(int a, int b){
    for (int i = 0; i < 3; i++){
        int cnt = 0, cnt2 = 0;
        if (arr[i][0] == a) cnt++;
        else if (arr[i][0] == b) cnt2++;
        
        if (arr[i][1] == a) cnt++;
        else if (arr[i][1] == b) cnt2++;
        
        if (arr[i][2] == a) cnt++;
        else if (arr[i][2] == b) cnt2++;
        
        if ((cnt == 1 && cnt2 == 2) || (cnt == 2 && cnt2 == 1)) return true;
    }
    
    for (int i = 0; i < 3; i++){
        int cnt = 0, cnt2 = 0;
        if (arr[0][i] == a) cnt++;
        else if (arr[0][i] == b) cnt2++;
        
        if (arr[1][i] == a) cnt++;
        else if (arr[1][i] == b) cnt2++;
        
        if (arr[2][i] == a) cnt++;
        else if (arr[2][i] == b) cnt2++;
        
        if ((cnt == 1 && cnt2 == 2) || (cnt == 2 && cnt2 == 1)) return true;
    }
    
    int cnt = 0, cnt2 = 0;
    if (arr[0][0] == a) cnt++;
    else if (arr[0][0] == b) cnt2++;
    
    if (arr[1][1] == a) cnt++;
    else if (arr[1][1] == b) cnt2++;
    
    if (arr[2][2] == a) cnt++;
    else if (arr[2][2] == b) cnt2++;
    
    if ((cnt == 1 && cnt2 == 2) || (cnt == 2 && cnt2 == 1)) return true;
    
    cnt = 0, cnt2 = 0;
    if (arr[0][2] == a) cnt++;
    else if (arr[0][2] == b) cnt2++;
    
    if (arr[1][1] == a) cnt++;
    else if (arr[1][1] == b) cnt2++;
    
    if (arr[2][0] == a) cnt++;
    else if (arr[2][0] == b) cnt2++;
    
    if ((cnt == 1 && cnt2 == 2) || (cnt == 2 && cnt2 == 1)) return true;
    
    return false;
}

int main(){
    //setIO("tttt"); 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            char c; cin >> c;
            arr[i][j] = c - 'A';
        }
    }
      
    for (int i = 0; i <= 26; i++)
        if (cowWins(i)) ans++;
 
    
    for (int i = 0; i < 25; i++)
        for (int j = i + 1; j < 26; j++)
            if (teamWins(i, j)) ans2++;

    cout << ans << endl << ans2 << endl;
    return 0;
}

