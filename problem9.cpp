#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int a,b,c;
	for(a=1;a<=1000;a++){
		for(b=1;b<=1000;b++){
			c=1000-b-a;
			if((a*a+b*b)==c*c){
			cout<<a<<" "<<b<<" "<<c<<"\n";
			cout<<a*b*c;
    		return 0;
    		}
    	}
    }
}
// }Ans=31875000
