/*CLASS FOR ELEVATOR. IT HAS PROPERTIES-> MAX LOAD, COMPANY, MODEL, ID, INSTALATION AND VAIDITY. IT PERFORMS FOLLOWING ACTIONS:
GO UP, GO DOWN, OPEN AND CLOSE GATE DISPALY CURRENT LOCATION
ALSO CREATE CONSTRUCTORS, DESTRUCTORS, GETTERS/SETTERS*/

#include<iostream>
#include<fstream>
using namespace std;

class Elevator{
public:
	int id, max_load,model,instal,valid;
	string company;

public:
	Elevator(int id, string company, int max_load, int model, int instal, int valid){
		cout<<"Parametric contructor is called"<<endl;
		this->id=id;
		this->company=company;
		this->max_load=max_load;
		this->model=model;
		this->instal=instal;
		this->valid=valid;
	}
	Elevator(){
		cout<<" null contructor is called"<<endl;
		id=-1;
		company=" ";
		max_load=0;
		model=0;
		instal=0;
		valid=0;
	}
	Elevator(int id, int instal, int valid){
		Elevator();
		this->id=id;
		this->instal=instal;
		this->valid=valid;
	}
	Elevator(Elevator &ele){
		cout<<"Copy contructor is called"<<endl;
		this->id=ele.id;
		this->company=ele.company;
		this->max_load=ele.max_load;
		this->model=ele.model;
		this->instal=ele.instal;
		this->valid=ele.valid;
	}
	
	int getid(){   
		return id;
		}
		
	void setid(int id){     
		this->id = id;
		}
	
	~Elevator(){
		cout<<"Destructor is called"<<endl;
	}
	

};

int display(){
	Elevator ele1;
	
	cout<<"ID: ";
	cin>>ele1.id;
	
	cout<<"\nCOMPANY: ";
	cin>>ele1.company;
	
	cout<<"\nMAX WEIGHT: "; 
	cin>>ele1.max_load;
	
	cout<<"\nMODEL: ";
	cin>>ele1.model;
	
	cout<<"\nINSTALATION: ";
	cin>>ele1.instal;
	
	cout<<"\nVALIDITY: ";
	cin>>ele1.valid;
	
	ofstream fout;
	fout.open("elevator.txt",ios_base::app);
	
	fout<<ele1.id <<" " <<ele1.company <<" "<<ele1.max_load <<" "<<ele1.model <<" "<<ele1.instal<<" "<<ele1.valid <<endl;
	fout.close();
}

int main(){
	Elevator ele1;
	
	display();
	
	return 0;
}
