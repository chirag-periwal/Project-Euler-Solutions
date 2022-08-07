#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int sum=0;
	for(int i=1;i<1000;++i){
		if(i%3==0 || i%5==0){
			sum=sum+i;
		}
	}
	cout<<sum;
    return 0;
}
// Ans=233168