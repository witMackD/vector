// vector.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

class Vector {
	friend std::ostream &operator <<(std::ostream &stream, const Vector &vector) {
		return stream << "(" << vector.x << "," << vector.y << ")";
	}

	friend Vector operator +(const Vector &v1, Vector &v2) {
		return Vector(v1.x + v2.x, v1.y + v2.y);
	}


public: 
	Vector(double x, double y): x(x), y(y){}
	
private:
	double x, y;
};



int main()
{
	Vector v1(3.5, 0.7);
	Vector v2(1.1, 2.7);

	std::cout << v1 << std::endl;
	std::cout << v1 + v2 << std::endl;
    std::cout << "Hello Maciek!\n"; 
}

