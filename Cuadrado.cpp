#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Cuadrado{
	private:
		float lado;
	public:
		Cuadrado(float);
		void Area();
};

Cuadrado::Cuadrado(float _lado){
	lado = _lado;
}

void Cuadrado::Area(){
	float _area;
	_area = pow(lado, 2);
	cout << "El area del cuadrado es: " << _area << endl;
}

int main(){
	float lado;
	cout << "Ingrese el valor de uno de los lados del cuadrado: ";
	cin >> lado;
	
	Cuadrado c1(lado);
	c1.Area();
	system("pause");
	return 0;
}
