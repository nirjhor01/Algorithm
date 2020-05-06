

/**< 🤣🤣🤣 */
#include<bits/stdc++.h>
using namespace  std ;
typedef long long  ll;
typedef pair<ll, ll> Pll;
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define rad(X) cout << (X) << endl
#define ASH(X) cout << (X) << " "
#define debug(x) cout << #x << " " << x << endl;
#define debug2(x,y) cout << #x << " " << x << " " << #y << " " << y << endl;
#define FOR(I,A,B) for(ll I = (A); I <= (B); I++)
#define cir(I,B,A) for(ll I = (A); I >=(B); I--)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define SORT(c) (sort(c.begin(),c.end()))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define GET_POS(c,x) (lower_bound(c.begin(),c.end(),x)-c.begin())
#define CASES int ___T; cin >> ___T; for(int cs=1;cs<=___T;cs++)
#define FAST()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll fx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll fy[] = {0, 1, 1, 1, 0, -1, -1, -1};
vector<ll>a,b,c;
map<ll,ll>m1,m2,m3;
const int MAXC = 1000;
long long ar[MAXC + 1][MAXC + 1];

/************************************************/

                     //PASCAL_TRIANGLE
                                                         
                       /*                              1
                           1   1
                         1   2   1
                       1   3   3   1
                     1   4   6   4   1
                   1   5  10   10  5   1
                 1   6  15  20   15  6   1
               1   7  21  35   35  21  7   1*/
ll mod=1e9;
void INIT()
{
    FOR(r,0,MAXC)
    {
        FOR(c,0,r)
        {
            if(r==c || c==0) ar[r][c]=1;
            else ar[r][c]=(ar[r-1][c-1]+ar[r-1][c])%mod;
        }
    }
}


void Execute()
{
      INIT();
      ll n,NB,VAL,A,B,C,G,INC,DEC,L,R,D;
      cin >> n;
      FOR(i,0,n) ASH(ar[n][i]);
      cout<<"\n";

}

int32_t main()
{
    //freopen("input.txt", "r", stdin);
    FAST();
    CASES
    {
        Execute();
    }
}
/**< 🤣🤣🤣 */
