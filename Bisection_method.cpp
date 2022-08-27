#include<iostream>
#include<math.h>

		//bisection method

double calcX(const double& a, const double& b) {	//bisection 
	return (a + b) / 2;
}

int main() {
	double a = 1.0, b = 2.0, x = 0.0;
	double prevX = x;
	double function = 0.0;
	int size = 15;
	for (int i = 0; i < size; i++) {	//iterations to find x which is accurate upto 3 decimal points
		prevX = x;
		x = calcX(a, b);
		function = pow(x, 3) + 2 * x - 5;	//function to be calculated
		std::cout << "x" << i << ": " << x << std::endl;
		std::cout << "Function Val at x" << i << ": " << function << std::endl << std::endl;
		if (b - a < 0.0009) {
			break;
		}
		//if (x - prevX < 0.001 && x - prevX > 0) { //stopping condition
		//	break;
		//}

		if (function < 0.0) {
			a = x;
		}
		else {
			b = x;
		}
	}
}
