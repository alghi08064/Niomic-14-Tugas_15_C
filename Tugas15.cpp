#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int perkalian(int *a,int *b) {
	int hasil;
	hasil = *a * *b;
	setcolor(3);
	cout<<"Hasil perkalian x dan y : "<<hasil;
	return 0;
	}

int main()
{
	int x, y;
    setcolor(5);
	cout<<"Inputkan nilai x: ";
	cin>>x;
	cout<<"Inputkan nilai y: ";
	cin>>y;
	perkalian(&x,&y);
	return 0;
}
	

