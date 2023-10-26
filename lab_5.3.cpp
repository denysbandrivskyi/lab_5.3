#include <iostream>
#include <cmath>
using namespace std;
double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1.) / (pow(sin(x), 2) + exp(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -1. / j;
			a *= R;
			S += a;
		} while (j < 7);
		return S;
	}
}

int main()
{
	double kp, kk, o;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double kg = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		o = z(2 * k + 1) - pow(z(2 * k - 1), 2) + sqrt(z(k));
		cout << k << " " << o << endl;
		k += kg;
	}
	return 0;
}
