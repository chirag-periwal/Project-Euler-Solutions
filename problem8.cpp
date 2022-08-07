#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	string s;
	cin>>s;
	// cout<<s.length();
	ll max_product=0;
	int c=0;
	for(int i=0;i<s.length()-13;i++){
		string q=s.substr(i,13);
		ll product=1;
	for(int j=0;j<q.length();j++){
		int c=q[j]-'0';
		// cout<<c;
		product=product*c;
	}
	// cout<<product<<endl;
	if(max_product<product){
		max_product=product;
	}
	}
	cout<<max_product;
    return 0;
}
// ANS=23514624000