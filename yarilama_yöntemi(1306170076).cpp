#include<iostream>
#include<cmath>
using namespace std;

float say;
float tolerans = 1E-3;
int temp = 0;
float first = 0, second = 1;




float F(float i) {

	return ((pow(i, 3)) - (7 * pow(i, 2)) + (14 * i) - 6) ;
}


int main() {
	bool dongu = true;
	cout <<"iterasyon    " << "first     " << "second     " << "sayý     " << "F(sayý)"<<endl;
	while (dongu) {

		sayý = (first + second) / 2;
		if (F(sayý) == 0 && (abs(second - first)/2) < tolerans) {
			temp++;
			cout <<temp<<"    "<< first <<"    "<< second <<"    "<< sayý <<"    "<< F(sayý)<<endl;
			break;
		}
		temp++;
		cout << temp << "    " << first << "    " << b << "    " << sayý << "    " << F(sayý) << endl;

		if (F(sayý) > 0) {
			second = sayý;
		}
		else {
			first = sayý;
		}
	}
	
	
	
	
	return 0;
	
}