/* Nama File: TarifPLN.c*/
/* Deskripsi: Membuat teks algoritma untuk menghitung jumlah biaya pemakaian listrik*/
/* Nama: Dhiya Ulhaq*/
/* NIM: 24060121140138*/

#include <stdio.h>

main()

{

int lstrk, total;

printf("Masukkan kwh Pemakaian listrik\t: ");
scanf("%d", &lstrk);

if(lstrk<=100)
total=100000;
else if(lstrk>500)

total=700000+2000*(lstrk-500);
else

total=100000+1500*(lstrk-100);
printf("Biaya pemakaian %d\n",total);

}
