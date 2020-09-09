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

int N, cows[7];

int main() {
    //setIO("notlast"); 
    cin >> N;
    for (int i = 0; i < N; i++){
        string s; int a; cin >> s >> a;
        if (s == "Bessie") cows[0] += a;
        else if (s == "Elsie") cows[1] += a;
        else if (s == "Daisy") cows[2] += a;
        else if (s == "Gertie") cows[3] += a;
        else if (s == "Annabelle") cows[4] += a;
        else if (s == "Maggie") cows[5] += a;
        else if (s == "Henrietta") cows[6] += a;
    }
    
    int minimum = min(cows[0], min(cows[1], min(cows[2], min(cows[3], min(cows[4], min(cows[5], cows[6]))))));
    int second = 10000, secCnt = 0;
    for (int i = 0; i < 7; i++)
        if (cows[i] > minimum)
            second = min(second, cows[i]);
            
    for (int i = 0; i < 7; i++)
        if (cows[i] == second)
            secCnt++;
            
    if (secCnt != 1) cout << "Tie" << endl;
    else{
        if (cows[0] == second) cout << "Bessie" << endl;
        else if (cows[1] == second) cout << "Elsie" << endl;
        else if (cows[2] == second) cout << "Daisy" << endl;
        else if (cows[3] == second) cout << "Gertie" << endl;
        else if (cows[4] == second) cout << "Annabelle" << endl;
        else if (cows[5] == second) cout << "Maggie" << endl;
        else if (cows[6] == second) cout << "Henrietta" << endl;
    }
    
    return 0;
}

