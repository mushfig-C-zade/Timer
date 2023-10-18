
#include <iostream>
using namespace std;
#include <Windows.h>
int main()
{
	int saat;
	cout << "Saati daxil edin\n";
	cin >> saat;
	int deqiqe;
	cout << "Deqiqeni daxil edin\n";
	cin >> deqiqe;
	int san;
	cout << "San daxil edin\n";
	cin >> san;
	system("cls");
	for (size_t s = saat; s >=0; s--)
	{		
		for (size_t d = deqiqe; d>=0 ; d--)
		{
			for (size_t sn = san; sn >=0; sn--)
			{
				if (san>=0)
				{
					
					cout << saat << ":" << deqiqe << ":" << san;
					Sleep(1000);
					system("cls");
					if (saat == 0 && deqiqe == 0 && san == 0)
					{
						cout << "Vaxt Bitdi\a";
					}
					san--;
				}
				else
				{
					break;
				}
				
			}
			deqiqe--;
		}
		saat--;
	

	}

	





	system("pause");
}