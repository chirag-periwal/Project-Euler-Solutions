#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll a=1;
	ll b=2;
	ll sum=0;
	while(a<4000000){
		if(a%2==0){
			sum=sum+a;
		}
		if(b%2==0){
			sum=sum+b;
		}
		a=a+b;
		b=a+b;
	}
	cout<<sum;
    return 0;
}
// Ans=4613732