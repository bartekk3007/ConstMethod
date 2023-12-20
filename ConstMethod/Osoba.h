#include <iostream>

class Osoba
{
public:
	const int x;
	const int y;
	Osoba(int x, int y) : x(x), y(y)
	{

	}
	void przeciwprostokatna() const
	{
		int z = x * x + y * y;
		std::cout << "Przeciwprostokatna to " << z << '\n';
	}
};