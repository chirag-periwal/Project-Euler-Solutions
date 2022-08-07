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
	ll i,sum=0;
	for(i=2;i<2000000;i++){
		if(prime(i)==1){
			sum+=i;
		}
	}
	cout<<sum;
}
// Ans=142913828922;