#include <iostream.h>
#include <conio.h>

int main(){
int i,j,n;

cout<<"masukkan nilai N:";
cin>> n;

for(i=1; i <= n; i++) {
	for (j=1; j <=i; j++){
	cout << " * ";
   }
   cout << endl;
}

getch();
return 0;
}





