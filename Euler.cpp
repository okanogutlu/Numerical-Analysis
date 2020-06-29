#include<stdio.h>

float fonksiyon(float x, float y){
	float f;
	f = x + y;// fonksiyon buraya girilir
	return f;
}

int main()
{
	//x0=ilk x deðeri //y0=fonksiyondaki ilk y deðeri//h=artýþ miktarý//xn=istenilen fonk. x deðeri
	float x0, y0, x, y, h, xn, deger;
	printf("\nEnter x0,y0,h,xn: ");
	scanf("%f%f%f%f", &x0, &y0, &h, &xn);
	x = x0;
	y = y0;
	printf("\n  x\t  y\n");
	while (x<=xn){
		deger = h * fonksiyon(x, y);
		y = y + deger;
		x = x + h;
		printf("%0.3f\t%0.3f\n", x, y);
	}
	return 0;
}









//#include <cstring>
//#include <string>
//#include <vector>
//#include <sstream>
/*vector < string > cont;
	 string str = "okan ogutlu 1999";
	 char delim = ' ';
	stringstream ss(str);
	string token;
	while (getline(ss, token, delim)) {
		cont.push_back(token);
	}
	cout << cont[0];
	*/