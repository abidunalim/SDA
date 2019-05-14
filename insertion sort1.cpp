#include<iostream>
using namespace std;

int main(){
	
	int acak[5] = {3,1,4,2,5};
	int batas;
	
	//cek sebelum diurut
	cout <<"deret bilangan sebelum di urut : ";
	for (int i = 0; i<=4; i++){
		cout << acak[i] <<" ";
	}
	
	cout <<endl;
	//menggunakan data dengan insertion sort
	for(int i=0; i<4; i++){
		int temp;
		int batas = i + 1;
		
		while(batas > 0){
			if(acak[batas] < acak[batas-1]){
				temp = acak[batas];
				acak[batas] = acak[batas-1];
				acak[batas-1] = temp;
			}
			batas--;
		}
	}
	cout <<"angka sesudah di urut ; ";
		for(int i=0; i<5; i++){
			cout << acak[i] <<" ";

}
}
