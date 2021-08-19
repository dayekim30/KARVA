#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_set>

#include "Sequence.h"
#include "Framegen.h"
#include "RandomGenerator.h"


typedef vector<string> heads;
//typedef unordered_set<string> sset;
typedef vector<vector<string>> mutation;


struct AMRgene {
	unordered_map<string, int>* kmerFreq;
	unordered_map<string, float>* kmerMapped;
	AMRgene() {
		kmerFreq = new unordered_map<string, int>();
		kmerMapped = new unordered_map<string, float>();
	}
	~AMRgene() {}

};

class Parsing {

public:
	Parsing(const int& any) {
		kmerFromgene = new unordered_map<string, heads>();
		mutFromkmer = new unordered_map<string, heads>();
		AMRvar = new unordered_map<string, AMRgene>();
		k = any;
	}
	~Parsing() {
		delete kmerFromgene, mutFromkmer, nuciomap;
	}

public:
	void Aread(const string& filename);
	void Qread(const string& filename, const bool& reportMultipleHits);
	void TestR(const string& filename);
	void Nucio();

public:
	unordered_map<string, heads>* kmerFromgene;
	unordered_map<string, heads>* mutFromkmer;
	unordered_map<string, AMRgene>* AMRvar;

	unordered_map<string, char>* nuciomap;
	int k;
};

