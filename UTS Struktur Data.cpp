#include <iostream>
#include <iomanip>
using namespace std;

struct Pegawai{
	string nama;
	int jamkerja;
	float honorlembur;
	float totalhonor;
};

float hitunglembur(int jamkerja){
	float honorlembur = 0;
	
	if(jamkerja > 8){
		int lembur = jamkerja - 8;
		return lembur * 10000;
	}
	return 0;
}
int main(){
	int jumlahdata;
	
	cout<<"Masukkan Jumlah Data Pegawai : ";
	cin>>jumlahdata;
	
	float honorharian = 80000;
	
	Pegawai pgw[jumlahdata];
	
	for(int k=0; k<jumlahdata; k++){
		cout<<"\nData Pegawai ke- "<<k+1<<endl;
		
		cout<<"Nama Pegawai : ";
		cin>>pgw[k].nama;
		
		cout<<"Jumlah Jam Kerja : ";
		cin>>pgw[k].jamkerja;
		
		pgw[k].honorlembur = hitunglembur(pgw[k].jamkerja);
		pgw[k].totalhonor = honorharian + pgw[k].honorlembur;
	}
	cout<<"=======================================================================\n";
	cout<<setw(45)<<"DATA HONOR PEGAWAI"<<endl;
	cout<<"=======================================================================\n";
	cout<<left<<setw(15)<<"Nama"<<setw(15)<<"Jam Kerja"<<setw(15)<<"Honor Harian"<<setw(15)<<"Honor Lembur"<<setw(15)<<"Total Honor"<<endl;
	cout<<"=======================================================================\n";
	
	for(int k=0; k<jumlahdata; k++){
		cout<<left<<setw(15)<<pgw[k].nama<<setw(15)<<pgw[k].jamkerja<<setw(15)<<honorharian<<setw(15)<<pgw[k].honorlembur<<pgw[k].totalhonor<<endl;
	}
	return 0;
}
