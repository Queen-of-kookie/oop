#include<iostream>
using namespace std;

//single inheritance


class One{
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

class Two:public One{
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

int main(){
	Two t1;
	One o1(1,2,3);
	cout<<t1.greater(4,8);
	cout<<t1.smaller(8,9);
	cout<<t1.equal(4,9);
	return 0;
}
