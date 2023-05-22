#pragma once
#ifndef JANTUNG_H
#define JANTUNG_H

using namespace std;

class jantung {
public:
	string name;
	jantung varJantung;

	manusia(string pName)
		: name(pName) {
		cout << name << " hidup\n";
	}
};
#endif