#include <iostream>
#include <memory>
using namespace std;

class X {
public:
	X() {
		cout << " X Constructor \n";
	}

	~X() {
		cout << " X destructor \n";
	}

	void SayHi() {
		cout << " X Say hi! :) \n";
	}
private:
	int m1{};
	double m2{3.14};
};

int main() {
	auto pX = make_unique<X>();
	pX->SayHi();
}
