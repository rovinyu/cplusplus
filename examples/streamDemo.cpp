#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "What's your name? ";
	string name{};
	cin >> name;

	cout << '\n';
	cout << "Hi, " << name << "!\n";
	cout << "Nice to meet you! :-)\n";
}
