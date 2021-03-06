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
#define LL long long

using namespace std;


class GCDGraph {
public:
	string possible(int n, int k, int x, int y) {
		if(__gcd(x,y)>k) return "Possible";

		LL mul = (LL)x*(LL)y;
		for(LL i=n; i>k; i--){
            if(mul%i==0){
                if(i<=n && __gcd((LL)i, (LL)x)>k && __gcd((LL)i, (LL)y)>k) return "Possible";
            }
		}
		return "Impossible";
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, int p0, int p1, int p2, int p3, bool hasAnswer, string p4) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2 << "," << p3;
	cout << "]" << endl;
	GCDGraph *obj;
	string answer;
	obj = new GCDGraph();
	clock_t startTime = clock();
	answer = obj->possible(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p4 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p4;
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

	int p0;
	int p1;
	int p2;
	int p3;
	string p4;

	{
	// ----- test 0 -----
	p0 = 12;
	p1 = 2;
	p2 = 8;
	p3 = 9;
	p4 = "Possible";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = 12;
	p1 = 2;
	p2 = 11;
	p3 = 12;
	p4 = "Impossible";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = 12;
	p1 = 2;
	p2 = 11;
	p3 = 11;
	p4 = "Possible";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = 10;
	p1 = 2;
	p2 = 8;
	p3 = 9;
	p4 = "Impossible";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = 1000000;
	p1 = 1000;
	p2 = 12345;
	p3 = 54321;
	p4 = "Possible";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 5 -----
	p0 = 1000000;
	p1 = 2000;
	p2 = 12345;
	p3 = 54321;
	p4 = "Impossible";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 6 -----
	p0 = 2;
	p1 = 0;
	p2 = 1;
	p3 = 2;
	p4 = "Possible";
	all_right = KawigiEdit_RunTest(6, p0, p1, p2, p3, true, p4) && all_right;
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
