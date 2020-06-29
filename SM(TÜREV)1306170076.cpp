#include <stdio.h>
#include <iostream>

using namespace std;
int x0 = 1, x1 = 2, x2 = 3, x3 = 4; //x noktalar�

int f(int de�er) { //Kolayl�k sa�las�n diye x de�erini g�nderip y de�erlerini ald�m.
	if (de�er == x0) {	//Ayr�ca g�rsellik a��s�ndan daha anla��l�r oldu.
		return -4;
	}
	if (de�er == x1) {
		return 5;
	}
	if (de�er == x2) {
		return 26;
	}
	if (de�er == x3) {
		return 65;
	}
	return 0;
}
//Form�llerim=
double BirinciForm�l(double h, int x0) {
	double sonuc = ((0.5) * (-3) * (f(x0))) + ((0.5) * 4 * (f(x0 + h))) - ((0.5) * f(x0 + (2 * h)));
	return sonuc;
}
double IkinciFormul(double h, int x0) {
	double sonuc = (0.5) * (-1) * (f(x0 - h)) + (0.5) * (f(x0 + h));
	return sonuc;
}
double UcuncuFormul(double h, int x0) {
	double sonuc = ((0.5) * (f(x0 - (2 * h)))) - ((0.5) * 4 * (f(x0 - h))) + ((0.5) * 3 * f(x0));
	return sonuc;
}

int main()
{
	double h = 1.0;
	int y0 = -4, y1 = 5, y2 = 26, y3 = 65; //noktalar� ayr�ca ekrana basmak i�in burada da tan�mlad�m.


	double sonuc = BirinciForm�l(h, x0) + IkinciFormul(h, x1) + IkinciFormul(h, x2) + UcuncuFormul(h, x3);

	cout << "  Noktalar...:" << "\n \n" << "  X" << "        " << "  F(x)" << endl;
	cout << "__________________________" << endl;
	cout << "  " << x0 << "    |    " << y0 << endl;
	cout << "  " << x1 << "    |    " << y1 << endl;
	cout << "  " << x2 << "    |    " << y2 << endl;
	cout << "  " << x3 << "    |    " << y3 << endl;
	cout << "__________________________" << endl;
	cout << endl << "____________________________Sonuc____________________________" << "\n" << "                              " << sonuc << endl;




	system("PAUSE");
}

