#include<iostream>
#include<string>
#include<cmath>

using namespace std;
typedef long long int ll ;
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
    ll D,d,P,Q, ans =0 ,x;
    cin>> D>>d>>P>>Q;
    x = D/d;
    if(x%2==0){
        
        ans += d* ((x/2) * (2*P +( x-1) * Q)) ; //even terms
    }
    else{
        ans += d* ( x * (P +((( x-1)/2)* Q))) ;  //odd
    }
    ans += (D%d) * (P + (x)* Q);
    cout << ans << "\n";
    }
    return 0;
}