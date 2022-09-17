#include <iostream>
using namespace std;

class Vector3D {
	double x = 0., y = 0., z = 0.;
public:
	Vector3D(double x_coord = 0., double y_coord = 0., double z_coord = 0.) :x(x_coord), y(y_coord), z(z_coord) {}
	void info() {
		cout << "_vector(" << x << "; " << y << "; " << z << ")\n";
	}
	class Point3D {
		double x = 0., y = 0., z = 0.;
	public:
		Point3D(double x_coord = 0., double y_coord = 0., double z_coord = 0.) :x(x_coord), y(y_coord), z(z_coord) {}
		void info() {
			cout << "_point(" << x << "; " << y << "; " << z << ")\n";
		}
		void moveByVector(static Vector3D *V) {
			x += V->x;
			y += V->y;
			z += V->z;
			cout << "moved succefully.\n";
		}
	};

};

int main() {
	Vector3D V(2.2, 3.3, 4.4);
	Vector3D::Point3D P(4.4, 3.3, 2.2);
	V.info();
	P.info();
	P.moveByVector(&V);
	P.info();
}