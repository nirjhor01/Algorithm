#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll Eucleadian_gcd(ll a,ll b){
    if(b==0)
        return a;
        else
      return Eucleadian_gcd(b,a%b);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll G=Eucleadian_gcd(a,b);
        if(c%G== 0 && (c<=a || c<=b)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }

}
/*12 20 =4
  8 12  =4
  8 4   =4
  4 0   =4 //b==0 hole a __gcd


  5 3=1
  3 2=1
  2 1=1
  1 0=1

  The Euclidean algorithm is based on the principle that the greatest common divisor of two 
  numbers does not change if the larger number is replaced by its difference with the smaller 
  number. For example, 21 is the GCD of 252 and 105 (as 252 = 21 × 12 and 105 = 21 × 5), and 
  the same number 21 is also the GCD 
  of 105 and 252 − 105 = 147. Since this replacement reduces the larger of the two numbers,
  */.
   
