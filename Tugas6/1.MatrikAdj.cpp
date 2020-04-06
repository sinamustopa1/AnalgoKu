#include<iostream>
using namespace std;

int main(){
	int a[8][8] = {
	{0,1,1,0,0,0,0,0},
	{1,0,1,1,1,0,0,0},
	{1,1,0,0,1,0,1,1},
	{0,1,0,1,1,0,0,0},
	{0,1,1,1,0,1,0,0},
	{0,0,0,0,1,0,0,0},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,1,0}
	};
	
	cout<<"=-=-=- Matriks Adjency=-=-=- "<<endl;
	for(int i=0;i<8;i++){
		for(int j=0; j<8;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
