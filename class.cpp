#include<iostream>          // basic example of class objects
using namespace std;
class point
{
 public:
	int x;
	int y;
};
int main()
{
	point p={10,20};
	cout<<p.x<<endl;
	cout<<p.y<<endl;
	return 0;
}
