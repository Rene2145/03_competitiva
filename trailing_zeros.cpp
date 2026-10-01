#include <iostream>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long c=0;
	
	while(n>=5){
		c+=(n/5);
		n=n/5;
	}
	cout<<c;
	return 0;
}
