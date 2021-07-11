#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	long long a = 0;
	string str1;
	string str2;
	cout << "select oct,dec,hex here_";
	cin >> str1;
	while (1)
	{
		if (str1 == "oct" || str1 == "dec" || str1 == "hex")
		{
			if (str1 == "oct")
			{
				cout << "\ntype here oct value_";
				cin >> oct >> a;

				cout << "result Oct : " << oct << a;
				cout << "\nresult Dec : " << dec << a;
				cout << "\nresult Hex : " << hex << a;
			}
			else if (str1 == "dec")
			{
				cout << "\ntype here dec value_";
				cin >> a;

				cout << "result Oct : " << oct << a;
				cout << "\nresult Dec : "<< dec << a;
				cout << "\nresult Hex : " << hex << a;
			}
			else if (str1 == "hex")
			{
				cout << "\ntype here hex value_";
				cin >> hex >> a;

				cout << "result Oct : " << oct << a;
				cout << "\nresult Dec : " << dec << a;
				cout << "\nresult Hex : " << hex << a;
			}

			while (1)
			{
				cout << "\n\n\n\nAre you want again use this?\n";
				cout << "\nplease select type y or n\n";
				cin >> str2;
				if (str2 == "y")
				{
					system("cls");
					break;
				}
				else if (str2 == "n")
				{
					break;
				}
			}
		}
		else
		{
			system("cls");
			cout << "Please make sure you entered it correctly and try again.\n";
			cout << "\nselect oct,dec,hex here_";
			cin >> str1;
		}
		if (str2 == "n")
			break;
	}
	return 0;
}