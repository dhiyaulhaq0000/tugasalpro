/* Nama File: TunjAnak.c*/
/* Deskripsi: Membuat teks algoritma untuk menghitung jumlah tunjangan anak berdasarkan gaji dan jumlah anak*/
/* Nama: Dhiya Ulhaq*/
/* NIM: 24060121140138*/

#include <stdio.h>
#include <string.h>
int main()
{
int anak, gaji, total;

printf("Masukkan jumlah anak\t: ");
scanf("%d", &anak);

printf("Masukkan jumlah gaji pokok\t: ");
scanf("%d", &gaji);

if(anak=0)
total=0;
else if(anak=2)
total=2*0.1 gaji;
else if(anak>3)
total=3*0.1 gaji;

printf("jumlah child support %d\n",total);
}
