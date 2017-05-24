#include <iostream>
using namespace std;
int main()
{
	int lines;
	long r, e, c;
	cin >> lines;
	int* p = new int[lines];
	for (int i = 0; i < lines; i++)
	{
		cin >> r >> e>>c;
		if (r+c<e)  p[i] = 1;
		else if (r + c == e) p[i] = 2;
		else  p[i] = 3;
	}
	for (int i = 0; i < lines; i++)
	{
		if (p[i] == 1) cout << "advertise" << endl;
		else if (p[i] == 2) cout << "does not matter" << endl;
		else cout << "do not advertise" << endl;
	}
	return 0;
}
