#include "BitcoinExchange.hpp"

int main( int argc, char const *argv[] )
{
	if (argc != 2)
	{
		std::cerr << RED;
		std::cerr << "Invalid number of parameters!" << std::endl;
		std::cerr << "Usage: ./BitcoinExchange <filename>" << std::endl;
		std::cerr << RESET << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange exchange;

		exchange.readInput(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << RED;
		std::cerr << RED << "Error: " << e.what() << std::endl;
		std::cerr << RESET << std::endl;
	}

	return 0;
}