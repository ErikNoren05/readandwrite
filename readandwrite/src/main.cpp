#include <iostream>
#include <fstream>
#include <string>


namespace Lib
{
	//Template print function
	template < typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}
	//writes to textfile
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent); 
		file << fileContent;
		file.close();
	}

	std::string filepath1 = "minfil.txt";
}


int main() 
{
	Lib::print(123);
	Lib::WriteToFile(Lib::filepath1);
}