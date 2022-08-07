#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum=sum+(s[i]-'0');
	}
	cout<<sum;
    return 0;
}
// 100!=93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
// Sum=648