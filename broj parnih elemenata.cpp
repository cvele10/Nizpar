//Niz, suma svih elemenata
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,i,p=0,b;//broj parnih elemenata na pocetku je nula
	int a[100];
	cout<<"Unesi duzinu niza:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"Unesi broj:";
	cin>>a[i];
	}
	
	for(i=1;i<=n;i++)
	{
		b=a[i]%2;//ostatak
		if(b==0)
		p=p+1;
	}
	cout<<"Broj parnih elemenata je:";
	cout<<p;
	return 0;
}


