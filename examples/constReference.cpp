#include <iostream>
#include <string>

using namespace std;

void UnderLine(const string & s) {

	string line(s.length(), '=');

	cout << s << '\n';
	cout << line << '\n';

}

int main() {

	cout << "Please enter a string: ";
	string str{};

	getline(cin, str);

	cout << '\n';

	UnderLine(str);
}
