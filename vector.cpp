#include <vector>
#include <iostream>

using namespace std;

int main()
{
	// define a vector of vector or vectors
	vector<vector<int> >array;

	// insert values
	for (int i = 0; i < 3; i++) {
		vector<int>vec1;
		for (int j = 0; j < 4; j++) {
			vec1.push_back(i);
		}
		array.push_back(vec1);
	}

	//display the array
	for (unsigned int i = 0; i < array.size(); i++) {
		for (unsigned int j = 0; j < array[i].size(); j++) {
			cout << array[i][j];
		}
		cout << endl;
	}

	return 0;
}