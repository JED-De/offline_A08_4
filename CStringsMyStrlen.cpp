#include <iostream>

using namespace std;

unsigned int my_strlen(const char * ptr)
{
	int i = 0;
		for(; i < 20; i++)
		{
			if (ptr[i] == '\0')
			{
				break;
			}
		}
	return i;
}

int main()
{
	const int len = 20;
	char array[len] = { 0 };
	
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(array, len);
	cout << "Ergebnis my_strlen(): "<< my_strlen(array) << endl;
	system("PAUSE");
	return 0;
}