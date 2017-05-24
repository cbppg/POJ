#include <iostream>
using namespace std;
int main()
{
	double len, sum_len;
	int n = 0, a[100];
	cin >> len;
	while (len != 0.00)
	{
		sum_len = 0;
		double i = 0;
		while (sum_len <= len)
		{
			i++;
			sum_len += 1 / (i + 1);
		}
		a[n] = i; n++;
		cin >> len;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " " << "card(s)" << endl;
	return 0;
}
