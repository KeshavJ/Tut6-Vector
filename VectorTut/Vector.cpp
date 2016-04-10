#include <iostream> 
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

bool sortArray(int x, int y)		 
{
	return(x > y);
}
int main()
{
	srand(time(NULL));		 
	
	vector<int> vec;		
	int num;				 
	for (int i = 0; i < 20; i++)
	{
		num = rand() % 1000 + 1;		
		vec.push_back(num);			 
	}
	cout << endl << "Unsorted Array" << endl;
	for (std::vector<int>::iterator ptr = vec.begin(); ptr != vec.end(); ++ptr)		 
		std::cout << ' ' << *ptr;

	std::cout << '\n';

	cout << endl << "Sorted Array" << endl;

	std::sort(vec.begin(), vec.end(), sortArray);	
	
	for (std::vector<int>::iterator ptr = vec.begin(); ptr != vec.end(); ++ptr)	
		 
		std::cout << ' ' << *ptr;
	std::cout << '\n';
}
