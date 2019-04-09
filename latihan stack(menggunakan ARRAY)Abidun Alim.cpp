//a.header file
#include<iostream>
using namespace std;
//b.mendefinisikan maksimal stack
#define max_stack 5

//c.membuat struct stack
struct stack{
	int top, data[max_stack];
}Tumpukan;

//d.menginisiasikan tumpukan
void init(){
	Tumpukan.top = -1;
}
//e.fungsi mengecek apakah tumpukann kosong
bool isEmpty(){
	return Tumpukan.top == -1;
}

//f.fungsi mengecek apakah tumpukan sudah penuh
bool isFull(){
	int data;
	return Tumpukan.top == max_stack-1;
}

//g.fungsi menambha tumpukan
//mengepush sebuah tumpukan
void push(){
	if(isFull()){
	cout << "\nTumpukan penuh" <<endl;
	}
	else{
		Tumpukan.top++;
		cout << "\nMasukkan data = "; cin >> Tumpukan.data[Tumpukan.top];
		cout << "Data " << Tumpukan.data[Tumpukan.top] << " masuk ke stack" <<endl;
	}
}

//h.fungsi mengambil tumpukan
//fungsi pop sebuah tumpukan
void pop(){
	if(isEmpty()){
		cout << "\nData kosong\n" <<endl;
	}
	else{
		cout << "\nData " <<Tumpukan.data[Tumpukan.top] <<" sudah terambil" <<endl;
		Tumpukan.top--;
	}
}

//i.fungsi menampilkan tumpukan(stack)
//print tumpukan(stack)
void printStack(){
	if(isEmpty()){
		cout << "\nData kosong\n" <<endl;
	}
	else{
		cout << "\nTumpukan kosong";
	for(int i=Tumpukan.top; i>=0; i--)
	cout << Tumpukan.data[i] << ((i==0)? "" : ",");
	}
}


//j.fungsi main
int main(){
	int pilihan, data;
	init();
	do{
		printStack();
		cout << "\n1. Input (push)\n"
		     << "2. Hapus (pop)\n"
		     << "3. Keluar\n"
		     << "Masukkan Pilihan: ";
		cin>> pilihan;
		switch(pilihan){
		
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
			cout << "Pilihan tidak tersedia" <<endl;
		break;
     }
	}while (pilihan!=3);
}
