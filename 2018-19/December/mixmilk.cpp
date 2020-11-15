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

int capacity[3], bucket[3];

int main() {
    //setIO("mixmilk"); 
    for (int i = 0; i < 3; i++) cin >> capacity[i] >> bucket[i];
        
    int a = 0, b = 1;
    for (int i = 0; i < 100; i++){
        if (bucket[a] + bucket[b] > capacity[b]){
            bucket[a] -= capacity[b] - bucket[b];
            bucket[b] = capacity[b];
        }
        else{
            bucket[b] += bucket[a];
            bucket[a] = 0;
        }
        
        if (a == 0 && b == 1){
            a = 1; b = 2;
        }
        else if (a == 1 && b == 2){
            a = 2; b = 0;
        }
        else{
            a = 0; b = 1;
        }
    }
    
    cout << bucket[0] << endl << bucket[1] << endl << bucket[2] << endl;
    return 0;
}

