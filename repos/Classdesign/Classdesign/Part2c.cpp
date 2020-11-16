#include <iostream>
#include "part2c.h"
using namespace std;

 void printmetadata() {
	metadata print;
	cout << "File Name: " << print.getFile() << endl;
	cout << "Type: " << print.getType() << endl;
	cout << print.getDate() << endl;
	cout << "Size: " << print.getSize() << endl;
	cout << "Author Name: " << print.getName() << endl;
	cout << "Dimension: " << print.getDimension() << endl;
	cout << print.getApe() << endl;
	cout << print.getExo() << endl;
	cout << "ISO Value: " << print.getIso() << endl;
	cout << "Flash(1 yes, 2 no): " << print.getFlash() << endl;
}


 int main() {
	 printmetadata();
 
 }


