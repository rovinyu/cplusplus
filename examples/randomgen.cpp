#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device seed{};

	mt19937 engine{seed()};

	uniform_int_distribution<> dist{1, 10};

	bool askMore{true};

	while (askMore) {

		int a{ dist(engine) };
		int b{ dist(engine) };

		cout << a << "*" << b << " = ? ";
		int useAnswer{};
		cin >> useAnswer;

		if (useAnswer == a * b) {
			cout << "Correct!\n";
		} else {
			cout << "Wrong!\n";
		}

		cout << "\n\nDo you want to continue (Y/N)? ";
		char ch{};
		cin >> ch;
		if (ch == 'n' || ch == 'N') {
			askMore = false;
		}	

	}
}
