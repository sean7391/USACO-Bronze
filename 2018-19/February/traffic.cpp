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

int N, A[100], B[100]; string T[100];

int main(void){
    //setIO("traffic");
    cin >> N;
    for (int i=0; i<N; i++) cin >> T[i] >> A[i] >> B[i];
  
    int a = -999999999, b = 999999999;
    for (int i = N - 1; i >= 0; i--) {
        if (T[i] == "none") { 
            a = max(a, A[i]); 
            b = min(b, B[i]); 
        }
        if (T[i] == "off"){
            a += A[i]; 
            b += B[i]; 
        
        }
        if (T[i] == "on"){
            a -= B[i]; 
            b -= A[i]; 
            a = max(0, a); 
        }
    }
    cout << a << " " << b << "\n";
     
    a = -999999999, b = 999999999;
    for (int i = 0; i < N; i++) {
        if (T[i] == "none"){
            a = max(a, A[i]); 
            b = min(b, B[i]); 
        }
        if (T[i] == "on"){
            a += A[i];
            b += B[i]; 
        }
        if (T[i] == "off"){
            a -= B[i];
            b -= A[i]; 
            a = max(0, a); 
        }
    }
    cout << a << " " << b << "\n";
    return 0;
}

