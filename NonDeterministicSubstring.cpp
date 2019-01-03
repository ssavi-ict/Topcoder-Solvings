#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class NonDeterministicSubstring {
public:
	long long ways(string A, string B) {

		set<string>myset;
		set<string>::iterator it;
		string str;
		int sz = B.size();
		for(int i=0; i<A.size(); i++)
        {
            str.clear();
            int k = i;
            for(int j=0; j<sz; j++)
            {
                if(k==A.size())
                {
                    str.clear(); break;
                }
                if(A[k]==B[j] || B[j]=='?')
                {
                    str = str + A[k];
                    k++;
                    continue;
                }
                else
                {
                    str.clear();
                    break;
                }

            }
            if(str.size()==sz)
            {
                myset.insert(str);
            }

        }

        return myset.size();
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, long long p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	NonDeterministicSubstring *obj;
	long long answer;
	obj = new NonDeterministicSubstring();
	clock_t startTime = clock();
	answer = obj->ways(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;

	string p0;
	string p1;
	long long p2;

	{
	// ----- test 0 -----
	p0 = "00010001";
	p1 = "?" "?";
	p2 = 3ll;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = "00000000";
	p1 = "?" "?0?" "?0";
	p2 = 1ll;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = "001010101100010111010";
	p1 = "?" "?" "?";
	p2 = 8ll;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = "00101";
	p1 = "?" "?" "?" "?" "?" "?";
	p2 = 0ll;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = "1101010101111010101011111111110001010101";
	p1 = "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?" "?";
	p2 = 6ll;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}

	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!