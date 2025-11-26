#include <iostream>
using namespace std;

string mahasiswa[3];
int nim[3];

int main(){
	
	for ( int i = 0; i < 3;i++){
	cout << "Mahasiswa- "<< i+1;
	cout << "\nNama : ";getline(cin, mahasiswa[i]);	
	cout << "NIM  : ";cin >> nim[i];	
	cin.ignore();
	}
	
	for ( int i = 0; i < 3;i++){
	cout << "Mahasiswa- "<< i+1;
	cout << "\nNama : "<<mahasiswa[i]<<endl;	
	cout << "NIM  : "<<nim[i]<<endl;
	}
}



/*
int main () {
	int a, b;
	for (a=1;a<=3;a++){
		for (b=a;b<=3;b++){
			cout<<b<<" ";
		}
		cout<<"\n";
	}
	
}
*/
