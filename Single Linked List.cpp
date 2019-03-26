#include<iostream>

using namespace std;

struct TNode{
	int data;
	TNode *selanjutnya;
	//TNode *prev;	
};

// deklarasi variabel pointer head dan tail
TNode *kepala;
TNode *ekor;
TNode *baru;
TNode *bantu;
TNode *hapus;

void inisialisasi(){
	kepala = NULL;
}

bool apakahKosong(){
	if (kepala == NULL)
		return true;
	else 
		return false;
}

void tambahDepan(int dataBaru){
	//buat node baru
	baru = new TNode;
	baru->data = dataBaru;
	baru->selanjutnya = NULL;
	
	//cek apakah list kosong atau tidak
	if (apakahKosong()){
		kepala = baru;
		ekor = baru;
		kepala->selanjutnya = NULL;
	}else{
		baru->selanjutnya = kepala;
		kepala = baru;
	}
	cout<<"list berhasil ditambahkan"<<endl;
}

void tambahBelakang(int dataBaru){
	//buat node baru
	baru = new TNode;
	baru->data = dataBaru;
	baru->selanjutnya = NULL;
	
	//cek apakah list kosong atau tidak
	if (apakahKosong()){
		kepala = baru;
		ekor = baru;
		kepala->selanjutnya = NULL;
	}else{
		ekor->selanjutnya = baru;
		ekor = baru;
	}
	cout<<"list berhasil ditambahkan"<<endl;
}

int menghitungList(){
	if (apakahKosong()){
		cout<<"list kosong"<<endl;
		return 0;	
	}else{
		
		bantu = kepala;
		int jumlah=1;
		while (bantu->selanjutnya != NULL){
			jumlah=jumlah+1;
			bantu = bantu->selanjutnya;
		}
		return jumlah;
	}
}

void tambahTengah(int dataBaru, int posisi){
	int jumlah = menghitungList();
	if(jumlah >= posisi){
		bantu = kepala;
		int posisiBantu=1;
		for(int i=1; i<(posisi-1); i++){
			bantu = bantu->selanjutnya;
		}
		//sisipkan baru
		baru = new TNode;
		baru->data = dataBaru;
		baru->selanjutnya = NULL;
		
		baru->selanjutnya = bantu->selanjutnya;
		bantu->selanjutnya = baru;
		cout<<"data berhasil ditambahkan di tengah"<<endl;
	}else{
		cout<<"List tidak cukup panjang"<<endl;
	}
}

void menampilkanIsiLinkedList(){
	if(apakahKosong()){
		cout<<"List kosong"<<endl;
	}else if(kepala->selanjutnya == NULL){
		cout<<kepala->data<<endl;
	}else{
		bantu = kepala;
		while (bantu != NULL){
			cout<<bantu->data<<" ";
			bantu = bantu->selanjutnya;
		}
		cout<<endl;
	}
}

void menghapusDidepan(){
	if(apakahKosong()){
		cout<<"List kosong"<<endl;
	}else{
		hapus = kepala;
		kepala = kepala->selanjutnya;
		hapus->selanjutnya = NULL;
		delete(hapus);
		cout<<"hapus list berhasil"<<endl;
	}
}

void menghapusDibelakang(){
	if(apakahKosong()){
		cout<<"list kosong"<<endl;
	}else if(kepala->selanjutnya == NULL){
		hapus = kepala;
		kepala = NULL;
		ekor = NULL;
		delete(hapus);
	}else{
		bantu = kepala;
		while (bantu->selanjutnya != ekor){
			bantu = bantu->selanjutnya;
		}
		
		hapus = ekor;
		ekor = bantu;
		ekor->selanjutnya = NULL;
		delete(hapus);
	}
}

void menghapusDitengah(int posisi){
	
}

void hapusSemua(){
	
}

int main(){
	inisialisasi();
	tambahDepan(5);
	tambahDepan(10);
	tambahBelakang(15);
	tambahBelakang(20);
	tambahDepan(0);
	tambahBelakang(25);
	tambahTengah(8,2);
	tambahTengah(12,3);
	cout<<"isi list: ";
	menampilkanIsiLinkedList();
	cout<<"Jumlah List :"<<menghitungList()<<endl;
	
	menghapusDidepan();
	menghapusDidepan();
	menghapusDibelakang();
	menghapusDibelakang();
	cout<<"isi list: ";
	menampilkanIsiLinkedList();
	cout<<"Jumlah List :"<<menghitungList()<<endl;
}
