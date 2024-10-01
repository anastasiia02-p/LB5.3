#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(const double x);
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dt = (tk - tp) / n;
	double t = tp;
	cout << fixed;
	cout << "-----------------------------" << endl;
	cout << "|" << setw(7) << "t" << " |"
		<< setw(10) << "z" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------" << endl;

	while (t <= tk)
	{
		z = f(t* t) + 2*f(2*t + 1 );
		
		t += dt;
		cout << "|" << setw(7) << setprecision(2) << t << " |"
			<< setw(10) << setprecision(5) << z << " |"
			<< setw(5) << n << " |"
			<< endl;
	}
	cout << "-----------------------------" << endl;

	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (sin(x)+ cos(x));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (pow(x, 2*i+1))/ (2*i+1);
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}