#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v{1980, 1985, 1990, 1995};

	v.push_back(2000);
	v.push_back(2005);

	cout << " Number of elements: " << v.size() << '\n';

	cout << " vector's elements: ";

	for (int i : v) {
		cout << i << ' ';
	}
	cout << '\n';
}
