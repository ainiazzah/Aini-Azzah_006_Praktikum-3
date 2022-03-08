#include <iostream>
#include <stdio.h>
using namespace std;

int jumlah(const char *i)
{
	int x = 0;
	for(; *i!='\0'; i++)
	++x;
	return x;
}


int main(void)
{
	char Huruf[100];
	cout<<"Tuliskan kata\t: ";
	cin.getline(Huruf,100);
	cout<<"\n";
	cout<<"Jumlah karakter\t: "<<jumlah(Huruf);
}
