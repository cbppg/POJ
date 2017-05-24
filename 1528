#include <iostream>
using namespace std;
int myPerfection(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n%i == 0) sum += i;
	return sum;
}
int digit(int n)
{
	int sum=0;
	while (n != 0)
	{
		n = n / 10;
		sum++;
	}
	return sum;
}
int main()
{
	int n,i=0;
	int a[100], b[100];
	cin >> n;                           
	while (n != 0)
	{   
		a[i] = n;
		if (n == myPerfection(n)) b[i] = 0;
		else if (n > myPerfection(n)) b[i] = -1;
		else if (n < myPerfection(n)) b[i] = 1;
		i++;
		cin >> n;
	}
	cout << "PERFECTION OUTPUT" << endl;
	for (int j = 0; j < i; j++)
	{
		for (int m = 0; m <5-digit(a[j]); m++)
			cout << " ";
		cout << a[j] << "  ";
		if (b[j] == 0) cout << "PERFECT" << endl;
		else if (b[j] > 0) cout << "ABUNDANT" << endl;
		else if (b[j] < 0) cout << "DEFICIENT" << endl;
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}
