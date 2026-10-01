#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;

	long long m=0;
	long long an;
	cin>>an;
	for(int i=1;i<n;i++){
		long long ac;
		cin>>ac;
		
	if(ac<an){
	m+=(an-ac);
	}else{
	an=ac;	
	}
	}

	cout<<m;
	return 0;
}
