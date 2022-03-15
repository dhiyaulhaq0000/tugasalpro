/* Nama File: HargaDiskon.c*/
/* Deskripsi: Membuat teks algoritma untuk menghitung besarnya harga setelah diberikan diskon*/
/* Nama: Dhiya Ulhaq*/
/* NIM: 24060121140138*/

#include <stdio.h>
#include <string.h>
int main()
{
 char barang[10];
 char kode[10];
 int harga;
 float diskon, setelah_diskon;

 strcpy(kode, "1");
 strcpy(barang, "A");
 harga =10000;
 diskon =0.1*harga;
 setelah_diskon=harga-diskon;

 printf("Jenis barang A \t");
 printf("\nMendapat diskon = 10%");
 printf("\nHarga setelah diskon = %1.f", setelah_diskon);

 strcpy(kode, "2");
 strcpy(barang, "B");
 harga =15000;
 diskon =0.15*harga;
 setelah_diskon=harga-diskon;

 printf("\n\nJenis barang B \t");
 printf("\nMendapat diskon = 15%");
 printf("\nHarga setelah diskon = %1.f", setelah_diskon);

 strcpy(kode, "3");
 strcpy(barang, "C");
 harga =5000;
 diskon =0.2*harga;
 setelah_diskon=harga-diskon;

 printf("\n\nJenis barang C \t");
 printf("\nMendapat diskon = 20%");
 printf("\nHarga setelah diskon = %1.f", setelah_diskon);
}
