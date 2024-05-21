#include <iostream>
using namespace std;

void tambah (int *bil1, int *bil2, int &hasil) {
    hasil=*bil1+*bil2;
}

void kurang (int *bil1, int *bil2, int &hasil) {
    hasil=*bil1-*bil2;
}

void kali (int *bil1, int *bil2, int &hasil) {
    hasil=(*bil1)*(*bil2);
}

void bagi (int *bil1, int *bil2, int &hasil) {
    if (*bil2!=0) {hasil=(*bil1)/(*bil2);}
    else {cout<<"Error."<<endl; hasil=0;}
}
main() {
    system("CLS");
    int bil1, bil2, operasi, hasil;

    cout<<"Bilangan pertama: "; cin>>bil1;
    cout<<"Bilangan kedua: "; cin>>bil2;

    cout<<"Operasi yang tersedia:"<<endl;
    cout<<"1. Tambah\n2. Kurang\n3. Kali\n4. Bagi";
    cout<<"\nPilih operasi (1/2/3/4): "; cin>>operasi;

    switch (operasi) {
        case 1: tambah(&bil1, &bil2, hasil);
        cout<<"Hasil: "<<hasil<<endl; break;

        case 2: kurang(&bil1, &bil2, hasil);
        cout<<"Hasil: "<<hasil<<endl; break;

        case 3: kali(&bil1, &bil2, hasil);
        cout<<"Hasil: "<<hasil<<endl; break;

        case 4: bagi(&bil1, &bil2, hasil);
        cout<<"Hasil: "<<hasil<<endl; break;

        default: cout<<"Error."<<endl; break;
    }

}