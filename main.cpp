#include <iostream>
#include "src/TriunghiDreptunghic.cpp"

int main(){

	//item 10
	TriunghiDreptunghic x(2,3,4);
	TriunghiDreptunghic y;
	TriunghiDreptunghic z;

    z = y = x;

	//(z = y) = x;
	y.display();


	//item 11
	TriunghiDreptunghic t(3,4,5);
	t = t;
	t.display();

	//item 12
	TriunghiDreptunghic t2(t);
	t.display();
}
