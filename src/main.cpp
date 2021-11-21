#include <iostream>

class TriunghiDreptunghic{
	private:
		float la, lb, lc;

	public:
		TriunghiDreptunghic(){
			this->la = 0;
			this->lb = 0;
			this->lc = 0;
		}
	
		TriunghiDreptunghic(float a, float b, float c){
			this->la = a;
			this->lb = b;
			this->lc = c;
		}

		TriunghiDreptunghic(const TriunghiDreptunghic &t) = delete;
		TriunghiDreptunghic& operator = (const TriunghiDreptunghic& t) = delete;
			
		float aria(){
			return (la*lb)/2;
		}

		void display(){
			std::cout<<"Cele doua catete: "<<la<<" "<<lb<<" si ipotenuza "<<lc<<std::endl;
		}
};


int main(){

	int a, b,c;
	a=2;
	b=3;
	c=4;
	TriunghiDreptunghic t1(a, b, c);
	TriunghiDreptunghic t2=t1; // copy constructor => functia este stearsa => eroare
	TriunghiDreptunghic t3;
	t3 = t1; // copy ass => functia este stearsa => eroare

	std::cout<<"Aria triunghiului 1 dreptunghic este: "<<t1.aria()<<std::endl;
	t1.display();
	std::cout<<"Aria triunghiului 2 dreptunghic este: "<<t2.aria()<<std::endl;
	t2.display();
	
}