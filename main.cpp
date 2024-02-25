#include <iostream>
#include <iomanip>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Student{
	string facultyNumber;
	string name;
	double grades[5];
};
//Function for average student grade calculator
double calculaterAv(const double grades[],int size)
{
	double sum=0.0;
	for(int i=0;i<size;++i)
	{
		sum+=grades[i];
	}
	return sum/size;
}



int main(int argc, char** argv) {
	
	int studentsNum=0;
	cout<<"Enter students number: ";
	cin>>studentsNum;
	
	//Enter students information
	Student student[studentsNum];
	for(int i=0;i<studentsNum;++i)
	{
		cout<<"Enter faculty number "<<i+1<<":";
		cin>>student[i].facultyNumber;
		
		cin.ignore();
		cout<<"Enter student name "<<i+1<<":";
		cin>>student[i].name;
		
		for(int j=0;j<5;++j)
		{
			cout<<"Enter grades "<<j+1<<"for Student "<<j+1<<":";
			cin>>student[i].grades[j];
		}
	}
	//Table output
	
	cout<<"\n Data Table \n";
	cout<<setw(15)<<"Fac.Number "<<setw(20)<<"Name ";
	for(int i=0;i<5;++i)
	{
		cout<<setw(20)<<"Subject"<<i+1;
	}
	cout<<setw(20)<<"Average grade "<<endl;
	for (int i = 0; i < studentsNum; ++i) {
        double averageGrade = calculaterAv(student[i].grades, 5);
        
	    cout << setw(15) << student[i].facultyNumber << setw(20) << student[i].name;
	    for(int j=0;j<5;++j)
	    {
	    	cout<<setw(20)<<student[i].grades[j];
		}
		cout<<setw(20)<<averageGrade<<endl;
    }
	
	
	
	return 0;
}
