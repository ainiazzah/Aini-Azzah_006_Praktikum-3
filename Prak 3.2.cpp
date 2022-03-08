#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char Huruf[100];
	cout<<"Tuliskan kata\t: ";
	cin.getline(Huruf,100);
	
	strupr(Huruf);
	cout<<"\nTampilan karakter dalam huruf kapital\t: "<<Huruf<<endl;
	
	strlwr(Huruf);
	cout<<"Tampilan karakter dalam huruf kecil\t: "<<Huruf;
	
	return 0;
}
