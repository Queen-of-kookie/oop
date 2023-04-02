#include<iostream>
using namespace std;

class Three{
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

class Four:public Three{
	public:
		int j;
	private:
		int k;
	protected:
		int l;
	//functions
	public:
		int fibonacci(){
			int n1=0,n2=1,n3=0;
			cout<<"Fibonacci Series: "<<endl;
			for(int j1=j;j1<=15;j1++)
			{
				cout<<n2<<", ";
				n3=n1;
				n1=n2;
				n2=n3+n1;
			}
		}
	private:
		int distance(){
			cout<<"enter distance in kilometer=";
			cin>>k;
			cout<<"Diatance in meters="<<k*1000<<endl;
		}
	protected:
		int wordcount(){
			char abc[100];
		cout<<"Enter any line: ";
		cin.get(abc,100);
		for(int count=0; abc[count] != '\0';count++)
		{
			if(abc[count]==' ' || (abc[count+1] =='\0'))
			{
				l++;
		    }
	    }
		cout<<"\nTotal number of words is "<<l;
		}
	//constructors
	public:
		Four(int j, int k,  int l){
			this->j=j;
			this->k=k;
			this->l=l;
		}
		Four(){
			this->j=0;
			this->k=0;
			this->l=0;
		}
	int getK(){
		return k;
	}
	void setK(int k){
		this->k = k;
	}
};

class Five:public Four{
	public:
		int m;
		int area;
	private:
		int n;
	protected:
		int o;
	//functions
	public:
		int area_of_triangle(){
			cout<<"For area of triangle: ";
			cout<<"Enter height: ";
			cin>>m;
			cout<<"Enter base: ";
			cin>>n;
			area=(m*n)/2;
			cout<<"Area of triangle: "<<area<<endl;
		}
			
	private:
		int area_of_rectangle(){
			cout<<"For area of rectangle: ";
			cout<<"Enter lenght: ";
			cin>>o;
			cout<<"Enter width: ";
			cin>>n;
			area=o*n;
			cout<<"Area of rectangle: "<<area<<endl;
		}
	protected:
		int area_of_square(){
			cout<<"For area of square: ";
			cout<<"Enter a side: ";
			cin>>o;
			area=o*o;
			cout<<"Area of square: "<<area<<endl;
		}
	//constructors
	public:
		Five(int m, int n,int o){
			this->m=m;
			this->n=n;
			this->o=o;
		}
		Five(){
			this->m=0;
			this->n=0;
			this->o=0;
		}
	int getN(){
		return n;
	}
	void setN(int n){
		this->n = n;
	}
};

int main(){
	Five fi1;
	Four f1;
	Three t1;
	cout<<fi1.area_of_triangle();
	cout<<fi1.area_of_rectangle();
	cout<<fi1.area_of_square();
	return 0;
}
