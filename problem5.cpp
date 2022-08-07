#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n=2520;
	while(true){
		int count=0;
		for(int i=1;i<=20;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==20){
			cout<<n;
			return 0;
		}
		else{
			n+=2520;
		}
	}
    return 0;
}

// Ans=232792560