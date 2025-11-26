#include <iostream>
using namespace std;

int ias=0, ie=0, iau=0;

struct data_tim {
	string nama_tim, nama_pemain[30], asal_pemain[30], posisi[30];
	int jml_pemain, nomor_punggung[30];
};
	
data_tim tim_asel[7], tim_eropa[4], tim_amut[2];


void clear(){
	cin.clear();
	cin.ignore(1000, '\n');
	cout<<"\nInput tidak valid\n";
	system("pause>null");
	
}

void menu1(){
	int benua;
	cout<<"pilih benua"<<endl
		<<"1. Amerika selatan"<<endl
		<<"2. Eropa"<<endl
		<<"3. Amerika Utara"<<endl
		<<"masukan pilihan : ";
	cin>>benua;
	cout<<endl;
	switch(benua){
		
		case 1 :
			
			cout<<"Amerika Selatan"<<endl;
			char asel;
			for(int i=ias;i<8;i++){
				if (i==7){
					cout<<"\nKuota Tim Amerika Selatan telah terpenuhi!!\n";
					break;
				}
				ias++;
				cout<<"tim ke-"<<i+1<<endl;
				cout<<"Nama tim : ";cin.ignore();getline(cin, tim_asel[i].nama_tim);
				while(true){
					cout<<"Masukan Jumlah Pemain : ";cin>>tim_asel[i].jml_pemain;
					if(cin.fail()||tim_asel[i].jml_pemain>30||tim_asel[i].jml_pemain<1){
						clear();
					}else break;
				}
				for (int j=0;j<tim_asel[i].jml_pemain;j++){
					cout<<"Input Data Pemain ke-"<<j+1<<endl;
					cout<<"Nama Pemain	: ";cin.ignore();getline(cin, tim_asel[i].nama_pemain[j]);
					cout<<"Asal Pemain	: ";getline(cin, tim_asel[i].asal_pemain[j]);
					cout<<"Posisi		: ";getline(cin, tim_asel[i].posisi[j]);
					while (true){
						cout<<"Nomor Punggung	: ";cin>>tim_asel[i].nomor_punggung[j];
						if (cin.fail()){
							clear();
						}else break;
					}
				}
				
				cout<<"Apakah ingin menambbah data tim amerika selatan? Y/N : ";cin>>asel;
				if (asel == 'y'|| asel == 'Y'){}
				else {
					break;
				}
			}
		break;
		
		case 2 :

			cout<<"Eropa"<<endl;
				char eropa;
				for(int i= ie;i<5;i++){
					if (i==4){
					cout<<"\nKuota Tim Eropa telah terpenuhi!!\n";
					break;
					}
					ie++;
					cout<<"tim ke-"<<i+1<<endl;
					cout<<"Nama tim : ";cin.ignore();getline(cin, tim_eropa[i].nama_tim);
					while (true){
						cout<<"Masukan Jumlah Pemain : ";cin>>tim_eropa[i].jml_pemain;
						if(cin.fail()||tim_eropa[i].jml_pemain>30||tim_eropa[i].jml_pemain<1){
						clear();
						}else break;
					}
					for (int j=0;j<tim_eropa[i].jml_pemain;j++){
						cout<<"Input Data Pemain ke-"<<j+1<<endl;
						cout<<"Nama Pemain	: ";cin.ignore();getline(cin, tim_eropa[i].nama_pemain[j]);
						cout<<"Asal Pemain	: ";getline(cin, tim_eropa[i].asal_pemain[j]);
						cout<<"Posisi		: ";getline(cin, tim_eropa[i].posisi[j]);
						while (true){
							cout<<"Nomor Punggung	: ";cin>>tim_eropa[i].nomor_punggung[j];
							if (cin.fail()){
								clear();
							}else break;
						}
					}
					cout<<"Apakah ingin menambbah data tim Eropa? Y/N : ";cin>>eropa;
					if (eropa == 'y'|| eropa == 'Y'){}
					else {
						break;
					}
				}
			break;
		
		case 3 :
			
			cout<<"Amerika Utara"<<endl;
			char amut;
			for(int i= iau;i<3;i++){
				if (i==2){
					cout<<"\nKuota Tim Amerika Utara telah terpenuhi!!\n";
					break;
				}				
				iau++;
				cout<<"tim ke-"<<i+1<<endl;
				cout<<"Nama tim : ";cin.ignore();getline(cin, tim_amut[i].nama_tim);
				while (true){
					cout<<"Masukan Jumlah Pemain : ";cin>>tim_amut[i].jml_pemain;
					if(cin.fail()||tim_amut[i].jml_pemain>30||tim_amut[i].jml_pemain<1){
						clear();
					}else break;
				}
				for (int j=0;j<tim_amut[i].jml_pemain;j++){
					cout<<"Input Data Pemain ke-"<<j+1<<endl;
					cout<<"Nama Pemain	: ";cin.ignore();getline(cin, tim_amut[i].nama_pemain[j]);
					cout<<"Asal Pemain	: ";getline(cin, tim_amut[i].asal_pemain[j]);
					cout<<"Posisi		: ";getline(cin, tim_amut[i].posisi[j]);
					while (true){
						cout<<"Nomor Punggung	: ";cin>>tim_amut[i].nomor_punggung[j];
						if (cin.fail()){
							clear();
						}else break;
					}
				}
				
				cout<<"Apakah ingin menambbah data tim Amerika Utara? Y/N : ";cin>>amut;
				if (amut == 'y'|| amut == 'Y'){}
				else {
					break;
				}
			}
		break;
	}	
}

void menu2(){
	

		cout<<"Amerika Selatan"<<endl;
	if (ias!=0){
				int i=0;
				while(i<ias){
					cout<<"tim ke-"<<i+1<<endl;
					cout<<"Nama tim : "<<tim_asel[i].nama_tim<<endl;
					cout<<"Jumlah Pemain : "<<tim_asel[i].jml_pemain<<endl;
					cout<<"========================\n";
					int j=0;
					while(j<tim_asel[i].jml_pemain){
						cout<<"Data Pemain ke-"<<j+1<<endl;
						cout<<"Nama Pemain	: "<<tim_asel[i].nama_pemain[j]<<endl;
						cout<<"Asal Pemain	: "<<tim_asel[i].asal_pemain[j]<<endl;
						cout<<"Posisi		: "<<tim_asel[i].posisi[j]<<endl;
						cout<<"Nomor Punggung	: "<<tim_asel[i].nomor_punggung[j]<<endl;
						j++;
					}
					i++;
					cout<<endl;
				}
	}else {
		cout<<"belum ada input data\n";
	}
		cout<<endl<<endl;
	
	
		cout<<"Eropa"<<endl;
		
	if (ie!=0){
			int i=0;
			while(i<ie){
				cout<<"tim Eropa ke-"<<i+1<<endl;
				cout<<"Nama tim : "<<tim_eropa[i].nama_tim<<endl;
				cout<<"Jumlah Pemain : "<<tim_eropa[i].jml_pemain<<endl;
				cout<<"========================\n";
				int j=0;
				while(j<tim_eropa[i].jml_pemain){
					cout<<"Data Pemain ke-"<<j+1<<endl;
					cout<<"Nama Pemain	: "<<tim_eropa[i].nama_pemain[j]<<endl;
					cout<<"Asal Pemain	: "<<tim_eropa[i].asal_pemain[j]<<endl;
					cout<<"Posisi		: "<<tim_eropa[i].posisi[j]<<endl;
					cout<<"Nomor Punggung	: "<<tim_eropa[i].nomor_punggung[j]<<endl;
				
					j++;
				}
				i++;
				cout<<endl;
			}
			
	}else {
		cout<<"belum ada input data\n";
	}
	
	
	cout<<endl<<endl;
	

	cout<<"Amerika Utara"<<endl;
	if (iau!=0){		
			int i=0;
			while(i<iau){
				cout<<"Tim Amerika Utara ke-"<<i+1<<endl;
				cout<<"Nama tim : "<<tim_amut[i].nama_tim<<endl;
				cout<<"Jumlah Pemain : "<<tim_amut[i].jml_pemain<<endl;
				cout<<"========================\n";
				int j=0;
				while(j<tim_amut[i].jml_pemain){
					cout<<"Data Pemain ke-"<<j+1<<endl;
					cout<<"Nama Pemain	: "<<tim_amut[i].nama_pemain[j]<<endl;
					cout<<"Asal Pemain	: "<<tim_amut[i].asal_pemain[j]<<endl;
					cout<<"Posisi		: "<<tim_amut[i].posisi[j]<<endl;
					cout<<"Nomor Punggung	: "<<tim_amut[i].nomor_punggung[j]<<endl;
					j++;
				}
				i++;
				cout<<endl;
			}
			
	}else {
		cout<<"belum ada input data\n";
	}
	
	cout<<endl<<endl;
	system("pause>null");
}
	
int main (){
	char exit='n';
	int menu;
	
	do{
		system("cls");
		cout<<"======MENU======"<<endl
			<<"1. Input data tim"<<endl
			<<"2. Data tim"<<endl
			<<"masukan pilihan : ";
		cin>>menu;
	
		switch (menu){
			case 1 :
				system("cls");
				menu1();		
			break;
			
			case 2 :
				system("cls");
				menu2();
			break;
			
			default : 
				system("cls");
				clear();
			break;
		}
	
		if (cin.fail()){
			clear();
		}
		while(true){
			cout<<"keluar dari program Y/N : ";cin>>exit;
			if(exit=='y'||exit=='Y'||exit=='n'||exit=='N'){
			break;
			}
		}
	}while(exit!='y'&&exit!='Y');
	
	cout<<"terima kasih!";
	return 0;
}
