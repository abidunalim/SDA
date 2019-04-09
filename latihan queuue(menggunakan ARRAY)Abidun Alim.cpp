//a.header
#include<iostream>
using namespace std;
//b.pendeklarasikan maksimal antrian
//mkasimal data queue
#define MAX 5

//c.pendeklarasian struct queue
//DEklarasi struct antrian
struct queue{
	int front, rear, data[MAX];
}Q;

//d.pengecekan apakah antrian full
//cek apakah antrian penuh
bool isFull(){
	return Q.rear == MAX;
}

//e.pengecekan apakah antrian kosong
//cek apakah antrian kosong
bool isEmpty(){
	return Q.rear ==0;
}

//f.menampilkan antrian(queue)
//menampilkan queue
void printQueue(){
	if(isEmpty()){
		cout << "Antrian kosong"<<endl;
	}
	else{
		cout << "Queue : ";
		for(int i=Q.front; i<Q.rear; i++)
		//menambahkan koma jika data tidak terdapat di antrian pertama
		cout << Q.data[i] << ((Q.rear-1 == i)? "" : ",");
		cout <<endl;
	}
	
	//g.fungsi enqueue(menambahkan data antrian)
	//menambahkan data ke antrian
	void enqueue(){
		if(isFull()){
			cout << "Antrian penuh!" <<endl;
		}
		else{
			int data;
			//menambahkan data ke antrian
			cout << "Masukkan Data : "; cin >> data;
			Q.data[Q.rear] + dat;
			//menempatkan tail pada elemen data terakhir yang ditambahkan
			Q.rear++;
			cout << "Data ditambahkan\n";
			printQueue;
		}
	}

//h.fungsi dequeue
//mengambil data dari antrian
void dequeue(){
	if(isEmpty()){
		cout << "Antrian masih kosong" <<endl;
	}
	else{
		cout << "Mengambil data\"" << Q.data[Q.front] << "\"..." << endl;
		//mengeer tail pada data terakhir yang digeser
		Q.rear--;
		printQueue();
	}
}

//i.fungsi main
int main(){
	int choose;
	do{
		//tampilan menu
		cout << "-------------------\n"
		  << "    Menu Pilihan\n"
		  << "---------------------\n"
		  <<  "[1] Enqueue \n"
		  << "[2] Dequeue\n"
		  << "[3] Keluar  \n\n"
		  << "----------------------\n"
		  << " Masukkan pilihan : ";cin >> choose;
		  switch (choose){
		  	case 1:
		  		enqueue();
		  		break;
		  	case 2:
		  		dequeue();
		  		break;
		  		
		  	default:
		  		cout << "Pilihan tidak tersedia";
		  		break;
		  }
	}while (choose !=3);
	return 0;
}
