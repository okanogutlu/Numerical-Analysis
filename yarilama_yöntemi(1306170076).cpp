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
	cout <<"iterasyon    " << "first     " << "second     " << "say�     " << "F(say�)"<<endl;
	while (dongu) {

		say� = (first + second) / 2;
		if (F(say�) == 0 && (abs(second - first)/2) < tolerans) {
			temp++;
			cout <<temp<<"    "<< first <<"    "<< second <<"    "<< say� <<"    "<< F(say�)<<endl;
			break;
		}
		temp++;
		cout << temp << "    " << first << "    " << b << "    " << say� << "    " << F(say�) << endl;

		if (F(say�) > 0) {
			second = say�;
		}
		else {
			first = say�;
		}
	}
	
	
	
	
	return 0;
	
}