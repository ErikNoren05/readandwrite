#include <iostream>

namespace Lib
{

	template < typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}



}


int main() 
{
	Lib::print(123);
}