#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate_binary_strings(int n, string str, vector<string>& accept_str) {

	//if the length of the string is as long as it needs to be, then the recursion is done
	if (str.length() == n) {
		accept_str.push_back(str);
		return;
	}
	
	//if there is a one already, a one or a zero can follow
	if (str.empty() || str.back() == '1') {
		generate_binary_strings(n, str + "0", accept_str);
		generate_binary_strings(n, str + "1", accept_str);
	}
	//ensures that there is at least one one within each subset of two elements
	else {
		generate_binary_strings(n, str + "1", accept_str);
	}
}

//actually returns all the strings/ begins the recursion
vector<string> generate_all_binary_strings(int n) {
	vector<string> accept_str;
	generate_binary_strings(n, "", accept_str);
	return accept_str;
}

int main() {
	//testing input
	int n = 1;
	vector<string> binary_strings = generate_all_binary_strings(n);
	
	//check that n is valid
	if (n <= 0) {
		cout << "invalid length n" << endl;
	}

	//output all of the accepted strings
	for (const string&str : binary_strings) {
		cout <<  str << endl;
	}

	return 0;
}
