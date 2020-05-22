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
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
ll fx[] = {1, 1, 0, -1, -1, -1, 0, 1};
ll fy[] = {0, 1, 1, 1, 0, -1, -1, -1};
//vector<ll>a,b,c;
map<ll,ll>m1,m2,m3;
ll DP[100005];

/************************************************/

void Execute()
{
      ll n, nb, k, q, a, b, c, l, r, d, x, y, p, m;
      std::cin >> n;
      ll ar[n];
      FOR(i,0,n-1) cin >> ar[i];

      DP[0] = 0;
      DP[1] = abs(ar[1] - ar[0]);

      FOR(i,2,n-1)
      {
            a = abs(ar[i] - ar[i-1]) + DP[i-1];
            b = abs(ar[i] - ar[i-2]) + DP[i-2];
        DP[i] = min(a,b);
      }
      std::cout << DP[n-1] << '\n';
}

int32_t main()
{
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //#endif

    FAST();
    //CASES

        Execute();

}
