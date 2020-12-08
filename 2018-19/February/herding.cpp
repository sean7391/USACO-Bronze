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

int arr[3], minAns, maxAns, maxGap = 0;
bool twoGap = false;

int main() {
    //setIO("herding"); 
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);
    
    for (int i = 0; i < 2; i++)
        maxGap = max(maxGap, arr[i + 1] - arr[i]);
        
    for (int i = 0; i < 2; i++)
        if (arr[i + 1] - arr[i] == 2) twoGap = true;
        
    if (maxGap == 1) minAns = 0;
    else if (twoGap) minAns = 1;
    else minAns = 2;
    
    maxAns = maxGap - 1;
    cout << minAns << endl << maxAns << endl;
    return 0;
}

