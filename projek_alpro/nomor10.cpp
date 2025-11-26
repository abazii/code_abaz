#include <iostream>
using namespace std;

int kindeks(int x){
	if (x>12){
		x-=12;
	}
	else if(x<1){
		x+=12;
	}
return x;
}

void err (){
	cin.clear();
	cin.ignore(1000, '\n');
	cout << "\nInput anda tidak valid\n";
	system("pause>null");
	system("cls");	
}

string notasi(int x){
	string hasil;	
	if(x==11||x==3||x==7){
		hasil = "Primer"; 
	}
	else if(x==1||x==5||x==9){
		hasil = "Sekunder"; 
	}
	else{
		hasil = " Tresier";
	}
	
	return hasil;
}

string sifat(int x){
	string hasil;
	if (x<7){
		hasil = "Hangat";
	}
	else {
		hasil = "Sejuk";
	}
	return hasil;
}

int main (){
	string nama, nim, perpaduan[5]{"Analogus", "Complementary", "Split Complementary", "Triadic Complementary", "Tetrad Complementary"},
	warna[12]{"Orange", "Red-Orange", "Red", "Red-Violet", "Violet", "Blue-Violet", "Blue", "Blue-Green", "Green", "Yellow-Green", "Yellow", "Yellow-Orange"};
	int nomor;
	char pilihan;

	cout<<"Nama	: ";
	getline(cin, nama);
	cout<<"NIM	: ";
	cin>>nim;
	
	while (true){
		cout<<"Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\n"
			<<"Warna-warna:"<<endl;
		
		for (int i=1;i<=12;){
			for (int j=0; j<3;j++){
				cout<<i<<". "<<warna[i-1]<<"          	";
				i++;
			}
			cout<<endl;
		}
	
		cout<<"Pilih warna nomor : ";cin>>nomor;
		if (cin.fail()|| (nomor>12) || (nomor<1)){
			err();
		}
		else break;
	}
	while (true){
		cout<<"Notasi warna	: "<<notasi(nomor)<<endl
			<<"Sifat warna	: "<<sifat(nomor)<<endl
			<<"Perpaduan Warna Harmonis"<<endl
			<<"a. Perpaduan Warna Analogus"<<endl
			<<"b. Perpaduan Warna Complementary"<<endl
			<<"c. Perpaduan Warna Split Complementary"<<endl
			<<"d. Perpaduan Warna Triadic Complementary"<<endl
			<<"e. Perpaduan Warna Tetrad Complementary"<<endl;
		
		cout<<"Pilihan	: ";cin>>pilihan;
		if (cin.fail()|| (pilihan<'a') || (pilihan>'e')){
			err();
		}
		else break;
	}
	
	if (pilihan=='a'){
		cout<<"Perpaduan Warna Analogus dengan warna nomor : "<<endl
			<<kindeks(nomor+1)<<"("<<warna[kindeks(nomor+1)-1]<<"), "<<kindeks(nomor+2)<<"("<<warna[kindeks(nomor+2)-1]<<") atau "<<kindeks(nomor-1)<<"("<<warna[kindeks(nomor-1)-1]<<"), "<<kindeks(nomor-2)<<"("<<warna[kindeks(nomor-2)-1]<<") atau "<<kindeks(nomor+1)<<"("<<warna[kindeks(nomor+1)-1]<<"), "<<kindeks(nomor-1)<<"("<<warna[kindeks(nomor-1)-1]<<")";
	}
	else if (pilihan=='b'){
		cout<<"Perpaduan Warna Complementary dengan warna nomor : "<<endl
			<<kindeks(nomor+6)<<"("<<warna[kindeks(nomor+6)-1]<<")";
	}
	else if (pilihan=='c'){
		cout<<"Perpaduan Warna Split Complementary dengan warna nomor : "<<endl
			<<kindeks(nomor+5)<<"("<<warna[kindeks(nomor+5)-1]<<"), "<<kindeks(nomor-5)<<"("<<warna[kindeks(nomor-5)-1]<<")";
	}
	else if (pilihan=='d'){
		cout<<"Perpaduan Warna Triadic Complementary dengan warna nomor : "<<endl
		<<kindeks(nomor+4)<<"("<<warna[kindeks(nomor+4)-1]<<"), "<<kindeks(nomor+8)<<"("<<warna[kindeks(nomor+8)-1]<<")";
	}
	else if (pilihan=='e'){
		cout<<"Perpaduan Warna Tetrad Complementary dengan warna nomor : "<<endl
		<<kindeks(nomor+3)<<"("<<warna[kindeks(nomor+3)-1]<<"), "<<kindeks(nomor+6)<<"("<<warna[kindeks(nomor+6)-1]<<"), "<<kindeks(nomor+9)<<"("<<warna[kindeks(nomor+9)-1]<<")";
	}
	//aku ganteng
	return 0;	
}
