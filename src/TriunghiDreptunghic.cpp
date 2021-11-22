#include <iostream>

class TriunghiDreptunghic{
	private:
		float la, lb, lc;
		//Triunghi *ptr;

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

		TriunghiDreptunghic(const TriunghiDreptunghic &t){
			 this->la = t.la;
			 this->lb = t.lb;
			 this->lc = t.lc;
		}

		 TriunghiDreptunghic& operator = (const TriunghiDreptunghic& t){
			 if(this == &t){
				std::cout<<"Sel ass happend"<<std::endl;
				return *this;  
			 }
			 
			 this->la = t.la;
			 this->lb = t.lb;
			 this->lc = t.lc;

         	 return *this;

		 }
			
		float aria(){
			return (la*lb)/2;
		}

		void display(){
			std::cout<<"Cele doua catete: "<<la<<" "<<lb<<" si ipotenuza "<<lc<<std::endl;
		}
};