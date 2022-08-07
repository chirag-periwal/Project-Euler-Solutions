#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(ll n){
	ll count=0;
	while(n!=1){
		if(n%2==0){
			n=n/2;
		}
		else{
			n=3*n+1;
		}
		count++;
	}
	return count;
}
int main(){
	ll num=0;
	ll max=0;
	for(ll i=1;i<1000000;i++){
		if(count(i)>max){
			max=count(i);
			num=i;
		}
	}
	cout<<max<<" "<<num;
    return 0;
}

// Ans=837799