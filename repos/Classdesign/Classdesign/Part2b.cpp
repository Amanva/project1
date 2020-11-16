#include <iostream>
#include <string>
#include "Source2.h"
using namespace std;

class metadata {

private:
	double size = 100;


public:

	 void setFile(string fname) {
		file = fname;

	}
	 string getFile() {

		return file;
	}


	void setType(string ftype) {
		type = ftype;

	}
	string getType() {

		if (type == "JPEG" || type == "GIF" || type == "PNG")
		{
			return type;
		}
		else
		{
			cout << "invalid type, only JPEG, PNG, and GIF allowed.";
		}
	}
		int setDate(int fmonth, int fday, int fyear) {
			month = fmonth;
			day = fday;
			year = fyear;

		}
		int getDate() {
			cout << "\n" << month << "/" << day << "/";
			return year;
		}

		void setSize(double fsize) {
			size = fsize;

		}
		double getSize() {
			return size;
		}

		void setName(string fauthor) {
			name = fauthor;

		}
		string getName() {
			return name;
		}

		void setDimension(int fwidth, int fheight) {
			width = fwidth;
			height = fheight;

		}
		int getDimension() {
			return width;
			return height;
		}

		void setApe(int fape) {
			apesize = fape;


		}
		int getApe() {
			cout << "f/";
			return apesize;
		}
		void setExo(int fnumerator, int fdenominator) {
			numerator = fnumerator;
			denominator = fdenominator;


		}
		int getExo() {
			cout << numerator << "/";
			return denominator;
		}

		void setIso(int fISO) {
			ISO = fISO;

		}

		int getIso() {
			return ISO;
		}

		void setFlash(bool fflash) {
			flash = fflash;

		}

		int getFlash() {
			return flash;
		}

	};

	int google() {
		return 0;
	}