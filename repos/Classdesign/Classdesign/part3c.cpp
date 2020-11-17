#include <iostream>
#include <list>
#include <string>
#include "par3c.h"

using namespace std;

class order {
	
	 

public:
	void myOrder() {
		list<string> my_list = { "cookie", "popcorn" , "Cd" };
		my_list.push_front("");
		for (string item : my_list) {
			cout << item << '\n';
		
			
		}

	}
	double getorder() {
		return totorder = cookprice + popprice + cdprice;
	}

	
	
	};
