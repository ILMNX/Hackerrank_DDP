#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(){
	ifstream myfile;
	char sv_text;
	myfile.open("DDPPRAKTIKUM.txt");
	
	cout<<"MEMBACA FILE"<<endl;
	cout<<"------------"<<endl;
	
	if(!myfile.fail()){
		cout<<"Isi dari file : "<<endl;
		
		while(!myfile.eof()){
			myfile.get(sv_text);
			cout<<sv_text;
			}
			myfile.close();
		}else{
			cout<<"File tidak ditemukan"<<endl;
		}
		_getche();
	}
	/*
	myfile.open("DDPPRAKTIKUM.txt", ios::app);
	
	cout<<"-------------"<<endl;
	cout<<"MENULIS FILE"<<endl;
	cout<<"-------------"<<endl;
	
	if(!myfile.fail()){
		cin>>  a;
		myfile<<a<<endl;
		myfile.close();
		cout<<"Text berhasil ditulis kedalam file"<<endl;
	}
	else{
		cout<<"File tidak ditemukan"<<endl;
	}
	_getche();
	*/
	

