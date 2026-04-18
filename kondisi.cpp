#include <iostream>
using namespace std;

int main(){
	/*
 	Seleksi
 	-if (kondisi){
 	        hasil
 	    }
 	-if (kondisi){
 	        hasil
 	    }
 	    else{
 	        hasil
 	    }
 	-if (kondisi){
 	    hasil}
 	    else if(kondisi){
 	        hasil
 	    }
 	*/
 	int nilai;
 	cout<<"Masukkan Nilai = ";
 	cin>>nilai;
 	if(nilai>=90){
 		cout<<"BAIK SEKALI";
	 }else if(nilai>=80){
	 	cout<<"BAIK";
	 }else{
	 	cout<<"KURANG BAIK";
	 }
}
