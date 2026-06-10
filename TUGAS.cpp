#include <iostream>
using namespace std;

int main (){
    int array[12] = {0, 8, 1, 3, 5, 3, 9, 8, 4, 2, 3, 2};
    int p, q, temp;
    int target, C, D, E;
    
    cout << "Nomor HP (Belum diurutkan) :";
    for(p=0; p<=11; p++){
        cout << array[p] << " ";
    }
    cout << "\n";
    
    for(p=0; p<=11; p++){
        for(q=11; q>=0; q--){
            if (array[q] < array[q-1]){
                temp = array[q];
                array[q] = array[q-1];
                array[q-1] = temp;
            }
        }
    }
    
    cout << "Hasil urut ascending :";
    for(p=0; p<=11; p++){
        cout << array[p] << " ";
    }
    cout << "\n";
    
    cout << "Masukkan nilai angka yang dicari : ";
    cin >> target;
    
    C = 0;
    E = 11;
    while(C <= E){
        D = (C + E)/2;
        if(target > array[D])
            { C = D + 1; }
        else if(target < array[D])
            { E = D - 1; }
        else
            { C = E + 1; }
    }
    
    if(target == array[D])
        { cout << "Data ditemukan di index ke : " << D << endl; }
    else
        { cout << "Data tidak ditemukan." << endl; }
        
    return 0;
}
