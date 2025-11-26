#include <iostream>
using namespace std;

void banyakPecahan (long uang, long pecahan[]);

int main(){
	long uang, pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
	while(true){
		cout << "Jumlah Uang Kembali = Rp"; cin >> uang;
		if (cin.fail()||(uang < 0)){
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "\nInput anda tidak valid\n";
			system("pause");
			system("cls");
		}
		else break;
	}
	cout << "Pecahan uang kembali = " << endl; 
	banyakPecahan (uang, pecahan);
}

void banyakPecahan(long uang, long pecahan[]){
	for (int i = 0; i < 9; i++){
		if (uang >= pecahan[i]){
			int lembar = uang / pecahan[i];
			uang = uang % pecahan[i];
			
			cout << lembar << " lembar " << pecahan[i] << endl;
		}
	}
}
