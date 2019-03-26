#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head, *tail;
void init(){
	head = NULL;
	tail = NULL;
}
int kosong(){
	if(tail==NULL)
	return 1;
	else{
		return 0;
	}
	
void tampil(){
	node *bantu;
	bantu = head;
	if(kosong() == 0){
		while(bantu!=NULL){
		cout << bantu->data <<" ";
		bantu=bantu->next;
		}
	} else cout << "masih kosong\n0";
}	

void ubah depan(int data){
	head->data = data;
}
}


