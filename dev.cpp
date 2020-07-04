#include <iostream>
#include <vector>

using namespace std;

int main(){
	std::vector<int> vec;
	vec.push_back(5);

	vec.reserve(100);
	vec.pop_back();
	return 0;
}



