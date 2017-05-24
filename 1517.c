#include <iostream>
#include <iomanip>
using namespace std;
double myFactorial(int n)
{
	double product = 1;
	for (int i = n; i >= 1; i--)
		product *= i;
	return product;
}
int main()
{
	cout << "n e" << endl;
	cout << "- -----------" << endl;
	for (int n = 0; n <= 9; n++)
	{
		double e = 0;
		for (int j = 0; j <= n; j++)
			e += 1 / myFactorial(j);
		if (n<3) cout << n << " " << e << endl;
		else cout << n << " " << setprecision(9) << setiosflags(ios::fixed) << e << endl;
	}
	return 0;
}
