#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Circulo{
	private:
		float radio;
	public:
		Circulo(float);
		void Area();
};

Circulo::Circulo(float _radio){
	radio = _radio;
}

void Circulo::Area(){
	float _area;
	_area = M_PI * pow(radio, 2);
	cout << "El area del circulo es: " << _area << endl;
}

int main(){
	float radio;
	cout << "Ingrese el radio: ";
	cin >> radio;
	
	Circulo c1(radio);
	c1.Area();
	system("pause");
	return 0;
}
