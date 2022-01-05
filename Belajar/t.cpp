#include <iostream>
#include <windows.h>>
	
using namespace std;
void gotoxy(int x, int y){ // Fungsi gotoxy
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main (){
	int n;
	float m;
	for(float m=0;m<=20;m++)
	{
		int n;
		n = m*5;
		gotoxy(2,35-m);cout<<n;  	 
	}
							
	for(int o=0;o<=20;o++) 
	{
		gotoxy(5,35-o);cout<<"|";
	}
	
	for(int p=0;p<=75;p++) 
	{
		for(int q=0;q<=20;q++)
		{
			gotoxy(6+p,15+q);cout<<"-"; 
		}
	}
}
