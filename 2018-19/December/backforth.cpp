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

int First[10], Second[11];
set<int> ans;

int main() {
    //setIO("name"); 
    for (int i = 0; i < 10; i++) cin >> First[i];
    for (int i = 0; i < 10; i++) cin >> Second[i];
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 11; j++){
            for (int k = 0; k < 10; k++){
                for (int l = 0; l < 11; l++){
                    int first[10], second[11];
                    for (int x = 0; x < 10; x++) first[x] = First[x];
                    for (int x = 0; x < 11; x++) second[x] = Second[x];
                    
                    int reading = 1000;
                    int tues = first[i];
                    first[i] = 0;
                    reading -= tues;
                    second[10] = tues;
                    
                    int wed = second[j];
                    second[j] = 0;
                    reading += wed;
                    first[i] = wed;
                    
                    int thurs = first[k];
                    first[k] = 0;
                    reading -= thurs;
                    second[j] = thurs;
                    
                    int fri = second[l];
                    second[l] = 0;
                    reading += fri;
                    first[k] = fri;
                    
                    ans.ins(reading);
                }
            }
        }
    }
   
    cout << sz(ans) << endl;
    return 0;
}

