
#include<iostream>
#include<stdio.h>



double turev(double a) {
	return(3 * a * a - 14 * a + 14);
}

double denklem(double sayi){
	return (sayi * sayi * sayi - 7 * sayi * sayi + 14 * sayi - 6);
}
double tolerans = 0.001;
void newtonRaphson(double son) {
	double res = denklem(son) /turev(son);
	while (abs(res) >= tolerans) {
		double res = denklem(son) / turev(son);
		son = son - res;
	}
}
int main() {
	double p = 0,p0 = 0.5; int k = 1;
	printf("iteration	p		f(p)\n");
	while (tolerans <= abs(p0)) {
		p = p0 - (denklem(p0) / turev(p0));
		if (abs(p - p0) < tolerans) {
			printf("%d		%.8f	%.8f\n",k,p0,denklem(p));
			break;
		}
		printf("%d		%.8f	%.8f\n",k,p0,denklem(p));
		k++;
		p0 = p;
	}
	
}