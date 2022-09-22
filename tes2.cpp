#include<iostream>
#include <cmath>

using namespace std;

int main(){
	
	int nilai;
	char huruf;
	cin>>nilai;
	
	if(nilai==100){
		cout<<"NILAI SEMPURNA! ";
		huruf = 'A';
	}
	else if (nilai> 80 && nilai <100 ){
		cout<<"NILAI DI ATAS KKM! ";
		huruf = 'B';
	}
	else if(nilai <80 && nilai >75){
		cout<<"Nilai pas-pas an!";
		huruf ='g';
	}
	else if (nilai <= 75 && nilai > 0){
		cout<<"NILAI DI BAWAH KKM! ";
		huruf ='C';
	}
	else{
		cout<<"\nInputan salah";
	}
	
	switch(huruf){
		case'A':
		cout<<"\nAnda lulus dengan nilai A";
		break;
		
		case 'B':
		cout<<"\nAnda lulus dengan nilai B";
		break;
		
		case 'g':
		cout<<"\nAnda lulus dengan nilai B-";
		break;
		
		case 'C':
		cout<<"\nAnda ngulang wkwkwkwkwkwkwk!";
		break;
		
		default :
			cout<<"\nNilai gaada";
		
	}
	
	return 0;
}
