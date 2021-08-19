#include "Framegen.h"

string Framegen::gf(const string& input)
{

	string tamp = "";
	string result = "";
	for (int i = 0; i < input.length() - 2; i++) {

		for (int j = i; j < i + 3; j++) {
			tamp = tamp + input.at(j);
		}
		if (nuclo->count(tamp)) {
			result = result + nuclo->at(tamp);
		}
		tamp = "";

	}

	return result;
}
