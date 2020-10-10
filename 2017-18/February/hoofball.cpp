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

int main() {
    //setIO("hoofball"); 
    cin >> N; int arr[N], cnt[N]; memset(cnt, 0, sizeof(cnt));
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);
    
    for (int i = 0; i < N; i++){
        if (i == 0) cnt[1]++;
        else if (i == N - 1) cnt[N - 2]++;
        else{
            int diff = arr[i] - arr[i - 1];
            int diff2 = arr[i + 1] - arr[i];
            if (diff <= diff2) cnt[i - 1]++;
            else cnt[i + 1]++;
        }
    }
    
    for (int i = 0; i < N; i++) if (cnt[i] == 0) ans++;
    
    for (int i = 0; i < N - 1; i++){
        if (cnt[i] == 1 && cnt[i + 1] == 1){
            int diff = arr[i + 1] - arr[i];
            if (i == 0){
                if (diff <= arr[2] - arr[1])
                    ans++;
            }
            else if (i == N - 2){
                if (diff < arr[i] - arr[i - 1])
                    ans++;
            }
            else {
                if(diff < arr[i] - arr[i - 1] && diff <= arr[i + 2] - arr[i + 1])
                    ans++;
            }
        }
    } 
    
    cout << ans << endl;
    return 0;
}

