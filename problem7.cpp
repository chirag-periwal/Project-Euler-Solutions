#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int prime(ll x){
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int count=0;
	ll n=1;
	// cout<<prime(9);
	while(count!=10001){
		n++;
		if(prime(n)==1){
			count++;
		}
	}
	cout<<n;
    return 0;
}
// Ans=104743;