#include<iostream>
using namespace std;
class Student{
	public:
		int sapid;
		string name;
		int semester;
		float cgpa;
		char gender;
	public:
		Student();sapid(0),name(" "),semester(0),cgpa(0.0),gender(' '){}
		Student(int s, string n, int sem, float c, char g){
			sapid=s;
			name=n;
			semster=sem;
			cgpa=c;
			gender=g;
		}
		Student(int _sapid, string _name){
			sapid=_sapid;
			name=_name;
		}
		Student(int sa, string na, float _cgpa){
			sapid=sa;
			name=na;
			cgpa=_cgpa;
		}
		Student(int sap, string nam, int sems){
			sapid=sap;
			name=nam;
			semester=sems;
		}
		Student(student &std){   //copy contructor
			sapid=std.sapid;
			name=std.name;
			semester=std.semester;
			cgpa=std.cgpa;
			gender=std.gender;
		}
	//distructor
	~Student(){
		cout<<"Destructor is running.";
	}
};

int main(){
	Student s1;
	s1.sapid=45714;
	s1.name="Ayesha";
	s1.semester=2;
	s1.cgpa=3.0;
	
	cout<<"Sapid: "<<s1.sapid<<endl;
	cout<<"Name: "<<s1.name<<endl;
	cout<<"Semester: "<<s1.semester<<endl;
	cout<<"cgpa: "<<s1.cgpa<<endl;
	return 0;
}
