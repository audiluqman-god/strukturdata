#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100;

// Stack
int stackData[MAX];
int top = -1;

// Queue
int queueData[MAX];
int frontQ = 0, rearQ = -1;

// Menampilkan isi stack
void tampilStack()
{
    cout << "\nData Stack : ";

    if(top == -1)
    {
        cout << "Kosong";
    }
    else
    {
        for(int i = 0; i <= top; i++)
        {
            cout << stackData[i] << " ";
        }
    }
    cout << endl;
}

// Menampilkan isi queue
void tampilQueue()
{
    cout << "\nData Queue : ";

    if(frontQ > rearQ)
    {
        cout << "Kosong";
    }
    else
    {
        for(int i = frontQ; i <= rearQ; i++)
        {
            cout << queueData[i] << " ";
        }
    }
    cout << endl;
}

// Binary Search
void binarySearch(int data[], int jumlah)
{
    if(jumlah == 0)
    {
        cout << "Data masih kosong.\n";
        return;
    }

    int cari;
    cout << "Masukkan data yang dicari : ";
    cin >> cari;

    int temp[MAX];

    for(int i = 0; i < jumlah; i++)
    {
        temp[i] = data[i];
    }

    sort(temp, temp + jumlah);

    int kiri = 0;
    int kanan = jumlah - 1;
    bool ditemukan = false;

    while(kiri <= kanan)
    {
        int tengah = (kiri + kanan) / 2;

        if(temp[tengah] == cari)
        {
            ditemukan = true;
            break;
        }
        else if(cari < temp[tengah])
        {
            kanan = tengah - 1;
        }
        else
        {
            kiri = tengah + 1;
        }
    }

    if(ditemukan)
        cout << "Data ditemukan.\n";
    else
        cout << "Data tidak ditemukan.\n";
}

// Menu Stack
void menuStack()
{
    int pilih, nilai;

    do
    {
        cout << "\n+++++++++ STACK ++++++++++++++\n";

        tampilStack();

        cout << "\nMenu Pilihan :\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Clear\n";
        cout << "4. Pencarian\n";
        cout << "5. Kembali\n";
        cout << "Pilih : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                if(top == MAX - 1)
                {
                    cout << "Stack penuh.\n";
                }
                else
                {
                    cout << "Masukkan data : ";
                    cin >> nilai;
                    top++;
                    stackData[top] = nilai;
                }
                break;

            case 2:
                if(top == -1)
                {
                    cout << "Stack kosong.\n";
                }
                else
                {
                    cout << "Data keluar : " << stackData[top] << endl;
                    top--;
                }
                break;

            case 3:
                top = -1;
                cout << "Stack berhasil dikosongkan.\n";
                break;

            case 4:
                binarySearch(stackData, top + 1);
                break;
        }

    } while(pilih != 5);
}

// Menu Queue
void menuQueue()
{
    int pilih, nilai;

    do
    {
        cout << "\n+++++++++ QUEUE ++++++++++++++\n";

        tampilQueue();

        cout << "\nMenu Pilihan :\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Clear\n";
        cout << "4. Pencarian\n";
        cout << "5. Kembali\n";
        cout << "Pilih : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                if(rearQ == MAX - 1)
                {
                    cout << "Queue penuh.\n";
                }
                else
                {
                    cout << "Masukkan data : ";
                    cin >> nilai;
                    rearQ++;
                    queueData[rearQ] = nilai;
                }
                break;

            case 2:
                if(frontQ > rearQ)
                {
                    cout << "Queue kosong.\n";
                }
                else
                {
                    cout << "Data keluar : " << queueData[frontQ] << endl;
                    frontQ++;
                }
                break;

            case 3:
                frontQ = 0;
                rearQ = -1;
                cout << "Queue berhasil dikosongkan.\n";
                break;

            case 4:
                if(frontQ > rearQ)
                {
                    cout << "Queue kosong.\n";
                }
                else
                {
                    int temp[MAX];
                    int j = 0;

                    for(int i = frontQ; i <= rearQ; i++)
                    {
                        temp[j] = queueData[i];
                        j++;
                    }

                    binarySearch(temp, j);
                }
                break;
        }

    } while(pilih != 5);
}

int main()
{
    int pilih;

    do
    {
        cout << "\n+++++++++++++++++++++++++++++\n";
        cout << "        MENU PILIHAN\n";
        cout << "+++++++++++++++++++++++++++++\n";
        cout << "1. Stack\n";
        cout << "2. Queue\n";
        cout << "3. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;

        switch(pilih)
        {
            case 1:
                menuStack();
                break;

            case 2:
                menuQueue();
                break;
        }

    } while(pilih != 3);

    cout << "\nProgram selesai.\n";

    return 0;
}
