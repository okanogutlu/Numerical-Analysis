#include<stdio.h>
float f(float x)
{
	return(x*x*x - 4); // f(x)= x^3-4
}
int main(){
	
	float sonraki = 0, x0=0, x1=1;
	int n = 2; //iterasyon sayýsý
	while (n >= 0) {
		sonraki = x1 - (  ( (f(x1)*(x0 - x1)) ) / ( f(x0) - f(x1) )  );

		x0 = x1;
		x1 = sonraki;
		n--;
	}
	cout << sonraki;
	system("PAUSE");


}