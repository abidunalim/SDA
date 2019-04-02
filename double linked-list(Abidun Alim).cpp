#include<iostream>
using namespace std;


//daftar fungsi
int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();
void tambah_tengah();
void hapus_tengah();
	
//membuat sebuah struct node
struct node
{
	char nama[20];
	int umur;
	float tinggi;
	node *prev, *next;
};
node *baru, *head=NULL, *tail=NULL, *hapus, *bantu, *bantu2;

//fungsi main
int main(){
	do{
		cout <<"menu double linkedlist"<< endl;
		cout <<"1. tambah Depan"<< endl;
		cout <<"2. tambah Belakang"<< endl;
		cout <<"3. hapus Depan"<< endl;
		cout <<"4. hapus Belakang"<< endl;
		cout <<"5. tampilkan"<< endl;
		cout <<"6. tambah tengah"<< endl;
		cout <<"7. hapus tengah"<< endl;
		cout <<"8. selesai"<< endl;
		cout <<"pilian anda : ";
		cin>>pil;
		
		pilih();
	}while(pil!=8);
}

//membuat fungsi untuk memilih menu linked list
void pilih()
{
	if(pil!=8)
	tambah_depan();
	else if(pil==2)
	tambah_belakang();
	else if(pil==3)
	hapus_depan();
	else if(pil==4)
	hapus_belakang();
	else if(pil==5)
	tampil();
	else if(pil==6)
	tambah_tengah();
	else if(pil==7)
	hapus_tengah();
	else
	cout<<"selesai";
}

//fungsi menampilkan linked list
void tampil(){
	if(head==NULL)
	cout <<"kosong";
	else{
		bantu=head;
		while(bantu!=NULL){
			cout <<"nama : "<<bantu->nama;
			cout <<"umur : "<<bantu->umur;
			cout <<"tinggi : "<<bantu->tinggi;
			bantu=bantu->next;
		}
	}
}

//6.membuat node baru
void buat_baru(){
	baru = new(node);
	cout <<"input nama : "; cin >>baru->nama;
	cout <<"input umur : "; cin >>baru->umur;
	cout <<"input tinggi : "; cin>>baru->tinggi;
	baru->prev=NULL;
	baru->next=NULL;
}

//7.menambahkan sebuah linked list di depan
void tambah_depan(){
buat_baru();
if(head==NULL){
	head=baru;
	tail=baru;
}
else{
	baru->next=head;
	head->prev=baru;
	head=baru;
	
	cout <<endl<<endl;
	tampil();
}
}

//8.menambahkan sebuah linkeed list di belakang
void tambah_belakang(){

buat_baru();
if(head==NULL){
	head=baru;
	tail=baru;
}
else{
	tail->next=baru;
	baru->prev=tail;
	tail=baru;
	
	cout<<endl<<endl;
	tampil();
}
}
//9.fungsi menghapus node yang berada di depan
void hapus_depan(){
	if(head==NULL)
	cout<<"kosong";
	else if(head->next==NULL){
		hapus=head;
		head=NULL;
		tail=NULL;
		delete hapus;
	}
	else{
		hapus=head;
		head=hapus->next;
		head->prev=hapus;
		delete hapus;
		
	}
	cout <<endl<<endl;
	tampil();
}

//10. fungsi menghapus node yang berada dibelakang
void hapus_belakang(){
	if(head==NULL)
	cout <<"kosong";
	else if(head->next==NULL){
		hapus=head;
		head=NULL;
		tail=NULL;
		delete hapus;
	}
	else{
		hapus=tail;
		tail=hapus->next;
		tail->prev=hapus;
		delete hapus;
	}
	cout <<endl<<endl;
	tampil();
}


//11. menambah node yang berada ditengah(bagian yang diinginkan)
//fungsi menambah di tengah(bagian yang diinginkan)
void tambah_tengah(){
	int sisip;
	cout<<"masukkan posisi sisip anda : "; cin>>sisip;
	bantu=head;
	
	for(int i=1; i<sisip-1; i++){
		bantu=bantu->next;
	}
	
	buat_baru();
	
	bantu2=bantu->next;
	bantu->next=baru;
	baru->prev=bantu;
	bantu2->prev=baru;
}


//12. menghapus node yang berada di tengah(bagian yang diinginkan)
//fungsi menghapus ditengah(bagian yang diinginkan)
void hapus_tengah(){
	int sisip;
	cout <<"masukkan posisi sisip anda : "; cin >>sisip;
	bantu=head;
	
	for(int i=1; i<sisip-1; i++){
		bantu=bantu->next;
	}
	
	hapus=bantu->next;
	bantu2=hapus->next;
	bantu->next=hapus;
	bantu2->prev=bantu;
	delete hapus;
}
