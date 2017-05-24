#include <iostream>
using namespace std;
int main()
{
	int lines;
	float x, y;
	cin >> lines;
	float* p = new float[lines];
	for (int i = 0; i < lines; i++)
	{
		cin >> x >> y;
		p[i] = ((x*x + y*y)*3.14159/2);
	}
	for (int i = 0; i < lines; i++)
	{
		int year=1,area=50;
		while (area < p[i])
		{
			area += 50; year++;
		}
		cout << "Property " << i + 1 << ": This property will begin eroding in year " << year << "." << endl;
	}
	cout << "END OF OUTPUT." << endl;
	return 0;
}
