#include <iostream>
using namespace std;

void konversi(long long bilangan,long long &km, long long &m, long long &cm, long long &mm);



int main (){
	
	long long bilangan, km=0, m=0, cm=0, mm=0;
	while (true){
		cout<<"bilangan (mm) = "; cin>>bilangan;
		if (cin.fail()){
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "\nInput anda tidak valid\n";
				system("pause");
				system("cls");
			}
			else break;
		}
	
	konversi(bilangan, km, m, cm, mm);
	cout<<"hasil konversi = "<<km<<" km, "<<m<<" m "<<cm<<" cm, "<<mm<<" mm.";
	
return 0;
}
 
void konversi(long long bilangan,long long &km, long long &m, long long &cm, long long &mm){
	
	km = bilangan / 1000000;
	bilangan = bilangan%1000000;
	m = bilangan / 1000;
	bilangan = bilangan%1000;
	cm = bilangan / 10;
	bilangan = bilangan%10;
	mm = bilangan;
}
