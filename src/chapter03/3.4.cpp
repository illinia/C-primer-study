#include "include_header.h"

int main()
{
	string s("some string");
	/*if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}*/

	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);

	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3;
	string::const_iterator it4;

	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin();
	auto it2 = cv.begin();

	auto it3 = v.cbegin();

	vector<string> text;
	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
		cout << *it << endl;
}