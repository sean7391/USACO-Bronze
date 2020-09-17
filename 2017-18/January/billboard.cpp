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

struct Rect {
    int x1, y1, x2, y2;
    int area(){
        return (y2 - y1) * (x2 - x1); 
    }
};

int intersect(Rect p, Rect q){
    int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yOverlap = max(0, min(p.y2, q.y2)- max(p.y1, q.y1));
    return xOverlap * yOverlap;
}

int numOverlap(Rect q, Rect p){
    int num = 0;
    if (q.x1 > p.x1 && q.y2 < p.y2 && q.x1 < p.x2 && q.y2 > p.y1) num++;
    if (q.x2 < p.x2 && q.y2 < p.y2 && q.x2 > p.x1 && q.y2 > p.y1) num++;
    if (q.x1 > p.x1 && q.y1 > p.y1 && q.x1 < p.x2 && q.y1 < p.y2) num++;
    if (q.x2 < p.x2 && q.y1 > p.y1 && q.x2 > p.x1 && q.y1 < p.y2) num++;
    return num;
}

int main() {
    //setIO("billboard"); 
    Rect a, b; 
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    
    int num = numOverlap(a, b);
    if (num <= 1) cout << a.area() << endl;
    else if (num == 4) cout << 0 << endl;
    else cout << a.area() - intersect(a, b) << endl;
    return 0;
}

