#include <iostream>
#include <string>
using namespace std;
#define MAX(a,b) ((a)>(b)? (a) : (b))
#define ABS(a) ((a)<(0)? (-a) : (a))
#define name

int main()
{
#ifdef name
	cout << MAX(3, 2) << endl;
	cout << ABS(-2) << endl;
#endif
}
