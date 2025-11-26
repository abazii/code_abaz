#include <iostream>
using namespace std;

void Konversi (int bilangan, int waktu[]);

int main(){
	int bilangan, waktu[2] = {3600, 60};
	while(true){
		cout << "bilangan (detik) = "; cin >>bilangan;
		if (cin.fail()||(bilangan < 0)){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\nInput anda tidak valid\n";
			system("pause>null");
			system("cls");
		}
		else break;
	}
	 
	Konversi (bilangan, waktu);
}

void Konversi(int bilangan, int waktu[]){
	for (int i = 0; i < 3; i++){
		if (bilangan >= waktu[0]){
			int jam = bilangan / waktu[i];
			bilangan = bilangan % waktu[i];
			
			cout << jam << " jam, ";
		}
		else if (bilangan >= waktu[1]){
			int menit = bilangan / waktu[i];
			bilangan = bilangan % waktu[i];
			
			cout << menit << " menit, ";
		}
		
		else {
			cout << bilangan << " detik.";
		}
	}
}
