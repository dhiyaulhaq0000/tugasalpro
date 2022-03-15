/* Nama File: UpahKerja.c*/
/* Deskripsi: Membuat teks algoritma untuk menghitung gaji perminggu berdasarkan golongan dan waktu kerja*/
/* Nama: Dhiya Ulhaq*/
/* NIM: 24060121140138*/

#include <stdio.h>

int main()
{
int payrate;
int hours;
printf("Berapakah gaji perjam anda? \n");
scanf("%d",& payrate);
printf("Berapa jam perminggu anda kerja? \n");
scanf("%d",& hours);

int weeklypay = hours * payrate;
int overtimehours = hours - 40;
int overtimepay = weeklypay * 1.5;
int overtimesalary =  weeklypay + (overtimehours * overtimepay);


if (hours <= 40)
printf("Gaji perminggu anda adalah %d . \n", weeklypay);

else
printf("Gaji perminggu anda adalah %d . \n", overtimesalary);

return 0;
}
