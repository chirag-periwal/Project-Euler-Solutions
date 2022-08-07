#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(ll n){
	int k=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			k++;
		}
	}
	return k;
}
int main(){
	ll i=3000;
	ll n=1;
	while(true){
		n=(i*(i+1)/2);
		if(count(n)>=100){
			cout<<n<<" "<<i;
			break;
		}
		i++;
	}
    return 0;
}