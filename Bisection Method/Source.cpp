#include<iostream>
#include<math.h>
#include<cmath>

		//bisection method

double calcX(const double& a, const double& b) {	//bisection 
	return round(((a + b) / 2.0) * 10000.0) / 10000.0;
}

double calcFun(const double& x) {
	return round((pow(x, 3) - (7 * x * x) - 40) * 10000.0) / 10000.0;	//Practice
	//return round((pow(x, 3) + (4 * x * x) - 40)* 1000.0)/1000.0;	//Question 1
	//return round((x * pow(2.71828, x) - 40) * 1000.0) / 1000.0;	//Question 2
	//return round((x * sin(x) - 50) * 1000.0) / 1000.0;	//Question 2
	//return round((x + pow(x, x) - 100) * 1000.0) / 1000.0;	//Question 2
}

int main() {
	//double a = 2.0, b = 3.0, x = 0.0;		//Question 1	x^3 + 4x^2 - 40 = 0
	//double a = 2.0, b = 3.0, x = 0.0;		//Question 2	x * e^x - 40 = 0
	//double a = 51.0, b = 52.0, x = 0.0;	//Question 3	x * sin(x) - 50 = 0
	//double a = 3.5, b = 3.6, x = 0.0;		//Question 4	x * x^x - 100 = 0

	double a = 7.5, b = 8.0, x = 0.0;		//Question 1	x^3 + 4x^2 - 37 = 0
	double prevX = x;
	double function = 0.0;
	int size = 15;
	for (int i = 0; i < size; i++) {	//iterations to find x which is accurate upto 3 decimal points
		prevX = x;
		x = calcX(a, b);
		
		function = calcFun(x);
		std::cout << "x" << i << ": " << x << "\t";
		std::cout << "Function Val at x" << i << ": " << function << std::endl << std::endl;
		/*if (b - a < 0.0009) {
			break;
		}*/
		if (x == prevX) { //stopping condition
			break;
		}

		if (function < 0.0) {
			a = x;
		}
		else {
			b = x;
		}
	}
}
