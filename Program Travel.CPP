#include <iostream.h>
#include <conio.h>

int main()
{
 int kmaks, trf, bayar,tgl,jadwal,jl,kursi,nama;

 char kelas[30];
 float jam;
 kmaks = 6;

 cout<<"Jadwal"<<endl<<endl;

 cout<<"Tanggal :";
 cin>>tgl;
 cout<<"Jam     :";
 cin>>jam;
 cout<<"Kelas   :";
 cin>>kelas;
 cout<<"Kursi   :";
 cin>>kursi;
 cout<<"Kursi Max : 6";
 cout<<"Tarif   :";
 cin>>trf;
 cout<<"=========================";
 bayar=kursi*trf;
 cout<<endl;

 cout<<"NAMA PENUMPANG : ";
 cin>>nama;
 cout<<"Pembayaran     : Rp." << bayar;

 getch();
}
