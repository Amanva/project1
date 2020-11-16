#pragma once
#include <string>
#include <iostream>

std::string file = "PNG";
std::string type = "PNG";
std::string name = "Name";
int month = 3;
int day = 15;
int year = 2002;
int numerator = 1;
int denominator = 8;
int ISO = 3000;
bool flash = true;
int apesize = 8;
int width = 200;
int height = 200;

class metadata {

private:
	double size = 100;


public:

	void setFile(std::string fname) {
		file = fname;

	}
	std::string getFile() {

		return file;
	}


	void setType(std::string ftype) {
		type = ftype;

	}
	std::string getType() {

		if (type == "JPEG" || type == "GIF" || type == "PNG")
		{
			return type;
		}
		else
		{
			std::cout << "invalid type, only JPEG, PNG, and GIF allowed.";
		}
	}
	int setDate(int fmonth, int fday, int fyear) {
		month = fmonth;
		day = fday;
		year = fyear;

	}
	int getDate() {
		std::cout << "Date: "<< month << "/" << day << "/";
		return year;
	}

	void setSize(double fsize) {
		size = fsize;

	}
	double getSize() {
		return size;
	}

	void setName(std::string fauthor) {
		name = fauthor;

	}
	std::string getName() {
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
		std::cout << "Aperture size: " << "f/";
		return apesize;
	}
	void setExo(int fnumerator, int fdenominator) {
		numerator = fnumerator;
		denominator = fdenominator;


	}
	int getExo() {
		std::cout << "Exposure time: " << numerator << "/";
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