#include <iostream>
#include <string>
#include <type_traits>

using namespace std;

template <typename T>
auto length(const T& value) {
	if constexpr(is_integral<T>::value) {
		return value;
	} else {
		return value.length();
	}
}

int main() {
	int n{64};
	string s{"Connie"};

	cout << " n = " << n << "; length(n) = " << length(n) << '\n';
	cout << " s = " << s << "; length(s) = " << length(s) << '\n';
}
