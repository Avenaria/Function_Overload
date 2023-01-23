

#include <iostream>
#include <stdlib.h>
#include <conio.h>


using namespace std;
#define X 8
#define Y 4
int b[X][Y];

int c = 0;

void horse (int s, int x, int y)
{
	if (s == 1 + X * Y && x == 0 && y == Y)
	{
	
		for (int y = 0; y < Y; ++y)
		{
			for (int x = 0; x < X; ++x)
			{
				
			}
			cout<< "\n";
		}
		cout << "\n ";
	}
	if (x < 0 || y < 0 || x >= X || y >= Y || b[x][y]) return;

	b[x][y] = s++;

	horse(s, x + 2, y + 1);
	horse(s, x + 2, y - 1);
	horse(s, x + 1, y + 2);
	horse(s, x + 1, y - 2);
	horse(s, x - 1, y + 2);
	horse(s, x - 1, y - 2);
	horse(s, x - 2, y + 1);
	horse (s, x - 2, y - 1);

	b[x][y] = 0;
}
int main()
{
    
}
