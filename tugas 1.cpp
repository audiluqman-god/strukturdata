#include <iostream>
using namespace std;

int main(){
	string nama;
	cout<<"Masukkan Nama : ";
	cin>>nama;
	
	int NBasisData;
	int NAljabar;
	int NPAI;
	int NStrukturData;
	int NPemrograman;
	
	cout<<"Masukkan Nilai Basis Data : ";
	cin>>NBasisData;
	cout<<"Masukkan Nilai Aljabar : ";
	cin>>NAljabar;
	cout<<"Masukkan Nilai PAI : ";
	cin>>NPAI;
	cout<<"Masukkan Nilai Struktur Data : ";
	cin>>NStrukturData;
	cout<<"Masukkan Nilai Pemrograman : ";
	cin>>NPemrograman;
	
	//Hitung Hasil dengan menjumlahkan semua nilai lalu dibagi 5
	int Hasil;
	Hasil=(NBasisData+NAljabar+NPAI+NStrukturData+NPemrograman)/5;
	cout<<"Tampilkan Hasil : "<<Hasil<<endl; 
	
	if(Hasil>=86){
		cout<<"Predikat Nilai adalah A";
	}else if(Hasil>=80){
		cout<<"Predikat Nilai adalah B";
	}else if(Hasil>=70){
		cout<<"Predikat Nilai adalah C";
	}else if(Hasil>=60){
		cout<<"Predikat Nilai adalah D";
	}else{
		cout<<"Predikat Nilai adalah E";
	}
}
