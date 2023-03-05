#include<iostream>
#include<conio.h>
using namespace std;
class duration{
public:
	int days;
	int hours;
	int min;
	long sec;
	
durarion(int days,int hours, int min, long sec){
	this->days=days;
	this->hours=hours;
	this->min=min;
	this->sec=sec;
}
duration(long sec){
	this->days=sec-86400;
	
	this->hours=sec-3600;
	
	this->min=sec-60;
	
}
};

int main(){
	duration d2(6754);
	cout<<"Enter seconds= ";
	cin>>d2.sec;
	cout<<"Days: "<<d2.days<<endl;
	cout<<"Hours: "<<d2.hours<<endl;
	cout<<"Minutes: "<<d2.min;
}
