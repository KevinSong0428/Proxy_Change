#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("in.txt");
	ofstream outfile;
	outfile.open("out.txt");
	string proxy;
	string user = "q6h7yd7810!";
	string pass = ":nw0yenai3g";
	while (getline(infile, proxy))
	{
		int place = proxy.find(":");
		place = proxy.find(":", place + 1);
		string pxy = proxy.substr(0, place + 1);
		int keep = proxy.find('a');
		place = proxy.find(":", place + 1);
		int amt = place - keep;
		string a = proxy.substr(keep, amt);
		outfile << pxy << user << a << pass << endl;
	}
	outfile.close();
	infile.close();
}