#include <iostream>
#include <fstream>
#include <iomanip>

	double mapValue(double x){	
		return -1 + 3*(x-1)/4;
	}
	
int main()
{
	std::ifstream file("./data.txt");
    if(file.fail())
    {
        std::cerr <<"Non è stato possibile aprire il file" << std::endl;
        return 1;
    }
	
	std::cout <<std::setprecision(16) << std::scientific;


	double val;
	double sum = 0;
	int n =0;
	
    while(file >> val)
    {
		double new_value = mapValue(val);
        sum = sum + new_value;
		n++;
		double mean = sum/n;
		std::cout << mean << std::endl;
    }
    return 0;
}

