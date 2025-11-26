#include <iostream>
using namespace std;

void tampilan(string kalimat){
	string kata[100];
	int jumlah = 0;
	
	//aku suka makan baso
	kalimat += " ";
	string penyimpan = "";
	
	for (int i = 0; i<= (int)kalimat.length(); i++){
		if(kalimat[i] == ' '){
			kata[jumlah] = penyimpan;
			jumlah++;
			penyimpan="";
		}
		else {
			penyimpan += kalimat[i];
		}
	}
	string hasil;
	for (int i= jumlah - 1; i>=0; i--){
		hasil = hasil+kata[i]+" ";
	}
	cout<<"Hasil	= "<<hasil;
}
int main(){
	string kalimat;
	
	cout<<"Kalimat	= ";
	getline(cin, kalimat);
	
	tampilan(kalimat);
}
