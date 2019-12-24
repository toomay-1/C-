#include <iostream.h>
#include <conio.h>

int main() {
	int pilih;


   while(pilih != 4){
   	cout <<"Contoh Program Memilih Menu"<<endl;
      cout <<"MENU PILIHAN:"<<endl;
      cout <<"1. Baca Data"<<endl;
      cout <<"2. Ubah Data"<<endl;
      cout <<"3. Hapus Data"<<endl;
      cout <<"4. Exit" <<endl;
		cout <<"Pilihan anda (1/2/3/4)?  ";
		cin >> pilih;

   	cout<<endl;

      switch(pilih){
      	case 1:
         	cout<<"*Anda memilih menu 1*"<<endl<<endl;
            cout<<"Tekan Enter Untuk Mengulang"<<endl<<endl;

            getche();
            clrscr();
            break;

         case 2:
         	cout<<"*Anda memilih menu 2*"<<endl<<endl;
            cout<<"Tekan Enter Untuk Mengulang"<<endl<<endl;

            getche();
            clrscr();
            break;

         case 3:
         	cout<<"*Anda memilih menu 3*"<<endl<<endl;
            cout<<"Tekan Enter Untuk Mengulang"<<endl<<endl;

            getche();
            clrscr();
            break;

         default:
         	cout<<"Anda memilih (EXIT) bye ~"<<endl;
            getche ();
            break;
   	}


	}

}



