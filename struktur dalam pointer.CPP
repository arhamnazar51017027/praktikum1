#include <stdio.h>
#include <iostream.h
#include <conio.h>
int main()
{
struct tgl
{
unsigned int hari;
unsigned int bulan;
unsigned int tahun;
};
struct alamat
{
char jalan[30];
char kota[20];

];
struct
{
char nama [40];
struct tgl masuk;
struct alamat tingggal;
float gaji;
} karyawan={ "Yuni Chairun Nisa",11,06 ,2008, "J1.Kedondong 56", " lumajang",
cout<<"\n\n DATA KARYAWAN\n";
cout<<"\n------------------------------------\n\n";
cout<<"Nama Karyawan : "<<karyawan.nama<<"\n";
cout<<"Tanggal Masuk : "<<karyaman.masuk.hari<< karyaman.masuk.bulan<<karyaman.masuk.tahun<<"\n";
cout<<"Alamat        : "<<karyaman.tinggal.jalan<<" "<< karyawan.tinggal.kota<<"\n";
cout<<"Gaji per Bulan : Rp"<<karyawan.gaji;
getch();
}
