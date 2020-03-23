/*
Nama : Sina Mustopa
NPM : 140810180017
Kelas : A
*/

#include <iostream>
#include <conio.h>

using namespace std;

int data[50],data2[50],n;

void insertion_sort()
{
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main(){
	 cout<<"---------------------------"<<endl;
 	 cout<<"    Insertion Sort Program	   "<<endl;
 	 cout<<"---------------------------"<<endl;
	cout << "\n=================================="<<endl;
	cout<<"Input Jumlah Data : "; cin>>n;
	cout << "----------------------------------" << endl;
	for(int i=1;i<=n;i++)
	{
	  cout<<"Input data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}
	cout << "\n----------------------------------" << endl;
	insertion_sort();
	cout<<"\nData Setelah di Sorting (Urut) : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  cout<<data[i]<<" ";
	}
	cout << "\n=================================="<<endl;
	getch();
}

