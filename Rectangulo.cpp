#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Rectangulo{
	private:
		float base;
        float altura;
	public:
		Rectangulo(float, float);
		void Area();
        void Perimetro();
};

Rectangulo::Rectangulo(float _base, float _altura){
	base = _base;
    altura = _altura;
}

void Rectangulo::Area(){
	float _area;
	_area = base * altura;
	cout << "El area del rectangulo es: " << _area << endl;
}

void Rectangulo::Perimetro(){
    float _perimetro;
    _perimetro = 2* (base + altura);
    cout << "El perimetro del rectangulo es: " << _perimetro << endl;
}

int main(){
	float base;
    float altura;
	cout << "Ingrese la base: ";
	cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
	
	Rectangulo r1(base, altura);
	r1.Area();
    r1.Perimetro();
	system("pause");
	return 0;
}
