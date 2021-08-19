#pragma once
#include <unordered_map>
#include <string>
#include "Sequence.h"

using namespace std;


class Framegen {
public:
	Framegen(unordered_map<string, char>& nuh) {
		nuclo = &nuh;
	}
	~Framegen() {}

	string gf(const string& input);

public:
	unordered_map<string, char>* nuclo;

};
