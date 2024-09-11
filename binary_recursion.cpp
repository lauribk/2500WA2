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
	
	//recursion: add to the string
	if (str.back() =='1') {
		generate_binary_strings(n, str + "0", accept_str);
	}
	elif (str.back() == '0') {
		generate_binary_strings(n, str + "1", accept_str);
	}
}

//actually returns all the strings
vector<string> generate_all_binary_strings(int n) {
	vector<string> accept_str;
	generate_binary_strings(n, "", accept_str);
	return accept_str;
}

int main() {
	//testing input
	int n = 3;
	vector<string> binary_strings = generate_all_binary_strings(n);
	
	//output
	cout << accept_str;

	return 0;
}
