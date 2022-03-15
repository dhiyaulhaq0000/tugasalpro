/* Nama File: BiayaParkir.c*/
/* Deskripsi: Menentukan besarnya biaya parkir yang dihitung berdasarkan lamanya parkir yang dimasukan melalui keyboard.*/
/* Nama: Dhiya Ulhaq*/
/* NIM: 24060121140138*/

#include <stdio.h>

  int main()
{ int imasuk, ikeluar, ilama, ibiaya;

  printf(" Biaya Parkir\n\n");
  printf(" Jam Masuk : ");
  scanf("%d",&imasuk);

  printf("\nJam Keluar : ");
  scanf("%d",&ikeluar);

  if (ikeluar >= imasuk)
     ilama = ikeluar - imasuk;
  else
     ilama = (12 - imasuk) + ikeluar;
  if (ilama >2)
     ibiaya = 2000 + ((ilama - 2)*500);
  else
     ibiaya = 2000;

  printf("\n\n Biaya Parkir Adalah : Rp %d \n",ibiaya);

  return 0;
}
