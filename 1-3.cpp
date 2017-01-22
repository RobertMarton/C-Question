#include <iostream>
using namespace std ;
class A{
public:
	void B(float a){TT=a ;} ;
	void C(){cout<<TT<<endl ;} ;
private:
	float TT ;
} ;
int main()
{
	A DD ;
	DD.B(134.44000) ;
	DD.C() ;
	return 0 ;
}