#include <iostream>
using namespace std;
int main (){

    long long n;
    cin >> n;
    long long st=(n*(n + 1))/2;
    long long sa=0;
    
    for (int i=0;i<n-1;i++) {
        long long numero;
        cin >> numero;
        sa+=numero; 
    }
    long long numero_faltante=st-sa;
    cout<<"\n"<<numero_faltante;
	return 0;
}
