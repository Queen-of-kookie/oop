#include<iostream>
#include <fstream>
using namespace std;
int i=0;
class Student{
	private:
		int sapID;
		string name;
		int semester;
		float cgpa;
		bool isFemale;
	public:
		Student(){
			
			cout<<"Null constructor is called\n";
			this->sapID=-1;
			this->name=" ";
			this->semester=0;
			this->cgpa=0.0;
			this->isFemale=false;
		}
		
		Student(int sapID, string name){
		Student();
		this->sapID = sapID;
		this->name = name;
		}
	
		Student(int sapID, string name, int semester){
			Student();
			this->sapID = sapID;
			this->name = name;
			this->semester = semester;
		}	
	
		Student(int sapID, float cgpa, string name, int semester, bool isFemale){
			cout<<"Parametric constructor is called\n";
			this->sapID = sapID;
			this->name = name;
			this->cgpa = cgpa;
			this->semester = semester;
			this->isFemale = isFemale;
		}	
			
		Student(int sapID, string name, bool isFemale){
			Student();
			this->sapID = sapID;
			this->name = name;
			this->isFemale = isFemale;
		}
		
		Student(Student &std){
			cout<<"Copy Constructor is called\n";
			this->sapID = std.sapID;
			this->name = std.name;
			this->cgpa = std.cgpa;
			this->semester = std.semester;
			this->isFemale = std.isFemale;
		}
		
		
		int getSapID(){   //getters
			return sapID;
		}
		
		void setSapId(int sapID){     //setters
			this->sapID = sapID;
		}
		
		~Student(){
			cout<<"Destructor is called\n";
		}
		
		void display(){
			cout<<"Sap ID: \t" <<sapID;
			cout<<"\nName: \t\t" <<name;
			cout<<"\nCGPA: \t\t" <<cgpa;
			cout<<"\nSemester: \t" <<semester;
			cout<<"\nGender: \t";
			(isFemale)?cout<<"Female":cout<<"Male";
			cout<<"\n";
			
		}
	};

struct data{
	int sapID;
	string name;
	int semester;
	float cgpa;
	bool isFemale;
	char g;
}b[50];
void getStudentData(){
	
	system("CLS");
	cout<<"Enter Sap ID: " ;
	cin>>b[i].sapID;
	cout<<"Enter Name: ";
	cin>>b[i].name;
	cout<<"Enter semester: ";
	cin>>b[i].semester;
	cout<<"Enter CGPA: ";
	cin>>b[i].cgpa;
	cout<<"Enter gender(M or F): ";
	cin>>b[i].g ;
	
	if(b[i].g == 'm'||b[i].g == 'M'){
		cout<<"Male";
	}
	else if(b[i].g == 'f'||b[i].g == 'F'){
		cout<<"Female";
	}
	else{
		cout<<"Enter correct option.";
	}
	
	cin.ignore();
	
	i++;
	
	ofstream fout;
	fout.open("student.txt",ios_base::app);
	
	fout<<b[i].sapID <<" " <<b[i].name <<" "<<b[i].semester <<" "<<b[i].cgpa <<" "<<b[i].g<<endl;
	fout.close();
}


void showStudentData(){
	ifstream fout;

	fout.open("student.txt",ios_base::out);
	
		//Write the code to read the line of data
		//split that and create an object of student
		//Display the data
		system("cls");
			if(i==0)
			{
				cout<<" RECORD IS EMPTY! "<<endl;
			}
			else
			{
				for(int a=0;a<=i;a++)
				{
					cout<<"SAPID -> "<<b[i].sapID<<endl;
					cout<<"NAME -> "<<b[i].name<<endl;
					cout<<"SEMESTER -> "<<b[i].semester<<endl;
					cout<<"CGPA -> "<<b[i].cgpa<<endl;
					cout<<"GENDER -> "<<b[i].g<<endl;
					cout<<endl<<"--------------------------------------------"<<endl;
					i++;
				}
			}
		cin.ignore();
		cout<<"\n\n";
		fout.close();
	}



// Driver Code
int main()
{
	
	
	string line;
	int choice; 
	
	do{
	system("CLS");
	cout<<"\n============Student Portal============\n";
	
	cout<<"1. Add Student\n"; 
	cout<<"2. Read All Students\n";
	cout<<"3. Exit\n";
	cout<<"Select an option: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			getStudentData();
			break;
		case 2:
			showStudentData();
			cin.ignore();
			break;
		case 3:
			cout<<"\nThank You\n";
			break;
		default:
			cout<<"Enter a valid option";
		}
	}while(choice < 3);

	return 0;
}

