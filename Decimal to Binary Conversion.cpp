#include <bitset> 
#include <iostream> 
using namespace std; 


int main() 
{ 
	int decimal = 7; 
	bitset<32> binary(decimal); 
	cout << "Binary equivalent: " << binary << endl; 
	return 0; 
}
