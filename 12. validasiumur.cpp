#include<iostream>
using namespace std;

int main()
{
	int usia;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"PROGRAM VALIDASI USIA"<<endl<<endl;
	cout<<"Masukkan Usia Anda : ";cin>>usia;
	cout<<"Usia anda ";
	if(usia<5)
	{
		cout<<"Balita";
	}
	else if(usia>5,usia<=12)
	{
		cout<<"Anak - Anak";
	}
	else if(usia>12,usia<=20)
	{
		cout<<"Remaja";
	}
	else if(usia>20,usia<=50)
	{
	cout<<"Dewasa";
	}
	else if(usia>50,usia<=100)
	cout<<"Lansia";
}
	
