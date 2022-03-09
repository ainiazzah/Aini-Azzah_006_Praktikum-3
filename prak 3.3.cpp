#include <iostream>
using namespace std;

int main()
{
	int max, jumlah, lokasi;
	
	cout<<"Masukkan jumlah elemen\t= ";
	cin>>jumlah;
	
	int array[jumlah];
	cout<<"\nMasukkan "<<jumlah<<" angka!\n";
	for(int a=0; a<jumlah; a++)
	{
		cout<<"Elemen ke "<<a+1<<"\t= ";
		cin>>array[a];
	}
	
	max = array[0];
	
	for(int a=1; a<jumlah; a++)
	{
		if(array[a] > max){   //Mencari nilai max pada beberapa angka yang telah diinputkan user di dalam array
			max = array[a];
			lokasi = a+1;
		}
	}
	
	cout<<"\nNilai maksimum\t= "<<max;  //Menampilkan nilai max
	cout<<" berada di elemen ke-"<<lokasi<<endl;  //menampilkan letak nilai max
	
	int *p = &max;  //Memberi pointer pada variabel max yang menampung alamat nilai max
	
	cout<<"Alamat dari nilai maksimum\t= "<<&max;  //Menampilkan alamat nilai max
}
