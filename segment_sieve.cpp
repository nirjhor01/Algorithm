
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
vector<ll> primes;
map<ll,ll>m1,m2,m3;
#define mx 32000
ll l,r;

/************************************************/
void sieve()
{   bool isPrime[mx];

    for(ll i=2; i<=mx; i++)
        isPrime[i]=true;

    for(ll i=3; i<=mx; i+=2)
    {   if(isPrime[i]==true)
        {   for(ll J=i*i; J<=mx; J+=i)
                isPrime[J]=false;
            //debug(J);

        }
    }

    primes.PB(2);

    for(ll i=3; i<=mx; i+=2)
    {   if(isPrime[i]==true)
            primes.PB(i);
    }

    //for(ll i=0;i<=10; i++) cout<<primes[i]<<endl;
}

void seg_sieve(ll l, ll r)
{   bool isPrime[r-l+1];
    for(ll i=0; i<r-l+1; ++i)
        isPrime[i]=true;

    for(ll i=0; primes[i]*primes[i]<=r; ++i)
    {   ll cur_prime = primes[i];
        ll base = (l/cur_prime)*cur_prime;

        if(base<l)
            base+=cur_prime;

        for(ll j=base; j<=r; j+=cur_prime)
        {   isPrime[j-l]=false;
        }

        if(base==cur_prime)
            isPrime[base-l]=true;
    }

    for(ll k=0; k<r-l+1; ++k)
    {   if(isPrime[k])
            cout<<k+l<<endl;
    }




}


void Execute()
{
    cin >> l >> r;
    seg_sieve(l,r);
}

int32_t main()
{   //freopen("atomm.txt", "r", stdin);
    FAST();
     sieve();
    CASES
    {   Execute();
    }

}
