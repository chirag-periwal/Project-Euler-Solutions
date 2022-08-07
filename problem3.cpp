#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int primecheck(ll n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	ll n=600851475143;
	for(ll i=3;i<n;i+=2){
		if(primecheck(i)==1 && n%i==0){
			n=n/i;
			cout<<i<<" "<<n<<endl;
		}
	}
    return 0;
}

// Ans=6857