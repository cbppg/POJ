#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double money[12],sum=0;
	char ch = 36;
	for (int i = 0; i < 12; i++)
	{
	 cin >> money[i];
	 sum += money[i];
	}
	cout << ch << setprecision(2)<<setiosflags(ios::fixed)<<sum / 12 << endl;
	return 0;
}
