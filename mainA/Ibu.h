#pragma once
#ifndef IBU_H
#define IBU_H

class ibu {
	string nama;
	vactor<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" tidak ada\n";
	}

};
void ibu