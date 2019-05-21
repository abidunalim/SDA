#include <iostream>
using namespace std;

int main(){
	bool ketemu,nol_semua;
	int matrix[10][10];
	int i,j,jumlah_simpul,jumlah_sisi,asal,tujuan;
	
	
	//inisialisasi matrix
	cout << "jumlah simpul ; ";
	cin >> jumlah_simpul;
	cout << "jumlah sisi : ";
	cin >> jumlah_sisi;
	for (i=1; i<=jumlah_simpul; i++);
	for (j=1; j<=jumlah_sisi; j++);
	matrix[i][j]=0;
	
	//isi matrix sesuai input graph
	for (i=1; i<=jumlah_sisi; i++){
	cout << "simpul asal : ";
	cin >>asal;
	cout << "simpul tujuan : ";
	cin >>tujuan;
	matrix[asal][tujuan]=1;
	matrix[tujuan][asal]=1;

}
	//telusuri graph
	i =1; nol_semua = false;
	while(i<=jumlah_simpul &&! nol_semua){
		j=1; ketemu= false;
		while(j<=jumlah_simpul &&! ketemu){
		if(matrix[i][j]==1)
		ketemu=true;
		else j++;
	}
	if(!ketemu)
	nol_semua=true;
	else i++;
	}
	if(nol_semua)
	cout << "graph tidak terhubung";
	else cout << "graph terhubung";
	
}


