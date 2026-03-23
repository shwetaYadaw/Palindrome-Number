#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int org=n;
	int rev=0;
	while(n){
		int d = n%10;
		rev = rev*10+d;
		n/=10;
	}
	if(org==rev){
		cout<<"true";
	}else{
		cout<<"false";
	}
}
