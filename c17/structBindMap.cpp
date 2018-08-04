#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> italianDict{
		{"casa", "home"},
		{"gatto", "cat"},
		{"tavolo", "table"}
	};

	auto [pos, success] = italianDict.insert({"sedia", "chair"});
	if (success) {
		cout << " Insertion OK. \n\n";
	}

	for (const auto& [italian, english] : italianDict) {
		cout << ' ' << italian << ": " << english << '\n';
	}
}
