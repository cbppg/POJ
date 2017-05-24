#include <iostream>
using namespace std;
int main()
{
	int lines,a,b;
	cin >> lines;
	int* p = new int[lines];
	for (int i = 0; i < lines; i++)
	{
		cin >> a >> b;
		if (a >= b)  p[i] = 1;
		else  p[i] = 0;
	}
	for (int i = 0; i < lines; i++)
	{
		if (p[i] == 1) cout << "MMM BRAINS" << endl;
		else cout << "NO BRAINS" << endl;
    }
	system("pause");
	return 0;
}
