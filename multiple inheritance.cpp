#include<iostream>
using namespace std;

class Six{
	//data members
	public:
		int a;
	private:
		int b;
	protected:
		int c;
	//functions
	public:
		int sum(int a, int c){
			int add=a+c;
		}
	private:
		int subtract(int a, int b){
			int sub=a-b;
		}
	protected:
		int multiply(int b, int c){
			int mul=b*c;
		}
	//constructors
	public:
		One(int a, int b, int c){	//parametric contructor
			this->a = a;
			this->b = b;
			this->c = c;
		}
		One(){	//null constructor
			this->a = 0;
			this->b = 0;
			this->c = 0;
		}
	int getB(){
		return b;
	}
	void setB(int b){
		this->b = b;
	}
};

class Seven{
	//data members
	public:
		int d;
	private:
		int e;
	protected:
		int f;
	//functons
	public:
		int greater(int d, int e){
			if(d>e){
				cout<< d <<" is greater."<<endl;
			}

		}
	private:
		int smaller(int e, int f){
			if(e<f){
				cout<< e <<" is smaller."<<endl;
			}

		}
	protected:
		int equal(int d, int f){
			if(d==f){
				cout<< d <<" and "<< f <<" are equal."<<endl;
			}

		}
	public:
		Two(int d, int e, int f){
			this->d = d;
			this->e = e;
			this->f = f;
		}
		Two(){
			this->d = 0;
			this->e = 0;
			this->f = 0;
		}
	int getE(){
		return e;
	}
	void setE(int e){
		this->e= e;
	}
};

class Eight:public Six, public Seven{
	public:
		int g;
	private:
		int h;
	protected:
		int i;
		int in=1,fact=1;
	//functions
	public:
		int modulus(int g, int h){
			int mod=g % h;
		}
	private:
		int divide(int h, int i){
			int div=h / i;
		}
	protected:
		
		int factorial(int i){
			while(in<=i) {
			       fact=fact*in;
			       in++;
			    }
		}
	//constructors
	public:
		Three(int g, int h, int i){
			this->g = g;
			this->h = h;
			this->i = i;
		}
		Three(){
			this->g = 0;
			this->h = 0;
			this->i = 0;
		}
	int getH(){
		return h;
	}
	void setH(int h){
		this->h = h;
	}
};

int main(){
	Eight e1;
	Six si1;
	Seven s1;
	cout<<e1.greater(2,5);
	cout<<e1.divide(3,1);
	cout<<e1.factorial(6);
	return 0;
}
