#include <iostream>
#include <limits>

using namespace std;

int main() {
	cout << " long type\n";
	cout << " --------\n";
	cout << " Size: " << sizeof(long) << " bytes\n";
	cout << " Max:  " << numeric_limits<long>::max() << '\n';
	cout << " Min:  " << numeric_limits<long>::min() << '\n';
}

