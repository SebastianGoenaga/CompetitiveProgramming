#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define in() freopen("in.txt","r",stdin)
#define out() freopen("out.txt","w",stdout)
#define err() freopen("err.txt","w",stderr)
#define si(a) ((int)a.size())

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    //in();
    //out();
    while(1){
				int w,h,n;
				cin >> w >> h >> n;
				if(w+h+n==0)break;
				int square[w][h];
				memset(square,0,sizeof square);
				forn(i,n){
          int x1,y1,x2,y2;
          cin >> x1 >> y1 >> x2 >> y2;
          x1--;x2--;y1--;y2--;
					int infX = min(x1,x2);
					int infY = min(y1,y2);
					int supX = max(x1,x2);
					int supY = max(y1,y2);
          fore(i,infX,supX){
							fore(j,infY,supY){
									square[i][j] = 1;
							}
          }
				}
				i64 totalCuadros = 0;
        forn(i,w){
						forn(j,h){
							if(square[i][j]==0)totalCuadros++;
						}
        }
        if (totalCuadros==0)cout <<  "There is no empty spots."  << endl;
        else if(totalCuadros==1) cout << "There is one empty spot." <<endl;
        else cout << "There are "<<totalCuadros<<" empty spots." << endl;
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
