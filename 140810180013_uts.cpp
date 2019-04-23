/*
Nama    : Alvin
NPM     : 140810180013
kelas   : A
program : mid-test case 1
*/

/*no daftar
nama time_
easal daerah
fungsi update jumlah goal entry goal
traversal desc

Chubu miyazaki
Furano : hakaido
Hirado : Nagasaki
Minauiwa : ehime
Toho : suginami
Nankatsu : sizok
*/


#include<iostream>

using namespace std;

struct sepakbola {
	int No_daftar;
	char Nama_tim[30];
	int goal;
	char asal[30];
	sepakbola* next;
};
typedef sepakbola* pointer;
typedef pointer list;

void createlist(list& first){
	first=NULL;
}
void createData(pointer& tim){
	tim=new sepakbola;
	cout<<"Masukkan No daftar\t: ";
	cin>>tim->No_daftar;
	cin.ignore();
	cout<<"Masukkan Nama Tim\t: ";
	cin>>tim->Nama_tim;
	cout<<"Masukkan asal daerah\t: ";
	cin>>tim->asal;
	cout<<"Masukkan goal\t: ";
	cin>>tim->goal;
	tim->next=NULL;

}
void insertDepan(list& first,pointer tim){
	if(first==NULL) first=tim;
	else tim->next=first;
	first=tim;
}
void traversal(list& first){
	pointer bantu;
	if(first==NULL){
		cout<<"List kosong!"<<endl;
	}
	else{
		bantu=first;
		cout<<endl<<"No daftar\t\tNama tim\tasal daerah\tgoal";
		cout<<endl<<"=============================================="<<endl;
		do{
			cout<<bantu->No_daftar<<"\t\t"<<bantu->Nama_tim<<"\t"<<bantu->asal<<"\t"<<bantu->goal<<"\t"<<endl;
			bantu=bantu->next;
		}
		while(bantu!=NULL);
	}
}


void insertFirst(list& first,pointer tim){
	tim->next=first;
	first=tim;
}

int main(){
	int number;
	list first;
	pointer tim;
	char lanjut;
	cout<<"-----------DATA TIM SEPAK BOLA-------------"<<endl;
	createlist(first);
	do{
		createData(tim);
		insertFirst(first,tim);
		cout<<"(Y/N)\t: ";
		cin>>lanjut;
	}while(lanjut=='y'||lanjut=='Y');
	do{
		cout<<endl<<endl;
		cout<<"=========================="<<endl;
		cout<<"=     update data       ="<<endl;
		cout<<"=========================="<<endl;
		cout<<"= 0. EXIT                ="<<endl;
		cout<<"= 1. TRAVERSAL           ="<<endl;
		cout<<"= 2. UPDATE DATA         ="<<endl;
		cout<<"=========================="<<endl;

		cout<<"Masukkan pilihan anda\t: ";
		cin>>number;
		cout<<endl<<endl;
		switch(number){
			case 0 : return 0;
			case 1 : traversal(first);
                    cout<<"======================================="<<endl;

				break;
			case 2 : do{
						createData(tim);
						insertFirst(first,tim);
						cout<<"data telah ditambah"<<endl;
						cout<<"lanjut(Y/N)?: ";
						cin>>lanjut;
			}while(lanjut=='y'||lanjut=='Y');

			default : cout<<"Maaf, pilihan tidak tersedia!";
		}
	}while(lanjut!=0);
}



