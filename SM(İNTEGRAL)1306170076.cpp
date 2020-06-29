// smVize2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <iostream>
using namespace std;

float f(int x) { //Fonksiyon
	float sonuc = (x*x*x) - (2 * x*x) + 5;
	return sonuc;
}

int main()
{
	int a = 0, b = 3;
	float toplam = 0;
	cout << "SIMPSON'UN 3/8 INTEGRAL KURALI" << endl;

	float h = (b - a) / 3;//h deðerinin hesaplanmasý

	//Kesin sonuç almak için integrali bölerek yapma yolunu seçtim.
	toplam = toplam + f(a) + f(b);
	float toplam1 = 0;
	float toplam2 = 0;

	for (int i = 1; i < b - a; i++) {
		if (i % 3 == 0) {
			toplam1 = toplam1 + f(i);

		}
		else if (i % 3 != 0) {
			toplam2 = toplam2 + f(i);
		}
	}
	toplam = toplam + (3 * toplam2) + (2 * toplam1);

	toplam = ((toplam * 3) / 8);
	cout << "__________SONUC:__________" << endl;
	cout << endl << "          " << toplam << "          " << endl;
	system("PAUSE");
}

