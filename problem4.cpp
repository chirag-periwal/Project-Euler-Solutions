#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int pallincheck(int n){
	int z=n;
	int r=0;
	while(n!=0){
		int d=n%10;
		r=(r*10)+d;
		n=n/10;
	}
	if(r==z){
		return 1;
	}
	return 0;
}
int main(){
	int max=0;
 for(int i=999;i>100;i--){
 	for(int j=999;j>100;j--){
 		int mul=i*j;
 		if(pallincheck(mul)==1 && mul>max){
 			max=mul;
 			cout<<i<<" "<<j<<endl;
 			cout<<mul<<endl;
 		}
 	}
 }
 return 0;
}

// Ans=906609;