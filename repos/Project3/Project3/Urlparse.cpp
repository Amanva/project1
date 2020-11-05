#include <iostream>
#include <string>
using namespace std;

bool URL(string scheme, string authority);
string getScheme(string& url);
string getauthority(string& url);

int main()
{
	string url;
	cout << "Enter a URL(n to close): ";
	getline(cin, url);

	while (url != "n")
	{
		cout << "\nURL: " << url << endl;
		string scheme = getScheme(url);
		string authority = getauthority(url);

		if (URL(scheme, authority))
		{
			cout << "scheme: " << scheme << endl;
			cout << "authority: " << authority << endl;
			cout << "path: " << url << endl;
			cout << "\nEnter a URL(n to close) : ";
			getline(cin, url);
		}
		else
		{
			cout << "\nMissing component, Enter another  URL(n to close): ";
			getline(cin, url);
		}
	}
}



bool URL(string scheme, string authority)
{
	if (scheme.size() == 0 || authority.size() == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}


string getScheme(string& url)
{
	string scheme = "";
	int schemeindex = url.find(":");
	if (schemeindex == -1)
	{
		return scheme;
	}
	else
	{
		scheme = url.substr(0, schemeindex);
		url = url.substr(schemeindex + 1);
		return scheme;
	}
}

string getauthority(string& url)
{
	string authority = "";
	int authorityindex = url.find("//");
	if (authorityindex == -1)
	{
		return authority;
	}
	else
	{
		url = url.substr(authorityindex + 2);
		int pathindex = url.find_first_of("/");
		if (pathindex == -1)
		{
			authority = url;
			url = "";
		}
		else
		{
			authority = url.substr(0, pathindex);
			url = url.substr(pathindex + 1);
		}
		return authority;
	}
}