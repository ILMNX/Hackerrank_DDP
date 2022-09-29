#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,hasil,i;
	
	cin>>n;
	hasil = 1;
	for (i =  1; i <= n ;i++){
		hasil = hasil * i;
	}
	cout<<hasil;
	return 0;
}
