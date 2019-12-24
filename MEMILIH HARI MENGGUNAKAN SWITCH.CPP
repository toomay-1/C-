#include <iostream.h>
#include <conio.h>

void main()
{
int hari;
clrscr();

   cout<<"PROGRAM MENENTUKAN NAMA HARI"<<endl;
   cout<<"PILIHAN :"<<endl;
   cout<<"1= SENIN	";
   cout<<"3= RABU		";
   cout<<"5= JUMAT	";
   cout<<"7= AHAD	"<<endl;
   cout<<"2= SELASA	";
   cout<<"4= KAMIS	";
   cout<<"6= SABTU	"<<endl;

   cout<<endl<<endl;

   cout<<"MASUKKAN KODE HARI (1-7):";
   cin>> hari;
   cout<<endl;
   switch(hari)
   {
   case 1: cout<<"SENIN";
   	break;
   case 2: cout<<"SELASA";
   	break;
   case 3: cout<<"RABU";
   	break;
   case 4: cout<<"KAMIS";
   	break;
   case 5: cout<<"JUMAT";
   	break;
   case 6: cout<<"SABTU";
   	break;
   case 7: cout<<"MINGGU";
   	break;

   default : cout<<"MAAF KODE YANG ANDA MASUKKAN SALAH";
   	break;
   }

   getch();
}
