#include <iostream>
using namespace std;


int n=0;
float hasil[2];

void jumlah(int x[]){
	for (int i = 0; i<10 ; i++){
		if (x[i]<5 || x[i]>=7){
			hasil[0] +=x[i];
			n++;
		}
	}
	
	hasil[1]=hasil[0]/n;
}




int main(){
	int  x[]{2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
	jumlah(x);
	
	cout<<"jumlah		= "<<hasil[0]<<endl
		<<"rata-rata	= "<<hasil[1]<<endl;
}
