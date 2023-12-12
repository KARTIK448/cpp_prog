#include<iostream>
#include<cstring>
using namespace std;
class Student{
private:
int Rollnumber;
static int totalstudents;
char * name;
public:
 Student():Rollnumber(0),name(nullptr){}
 Student(int roll,const char* StudentName):Rollnumber(roll){
    name=new char[strlen(StudentName)+1];
    strcpy(name,StudentName);
 }
 Student(const Student &other):Rollnumber(other.Rollnumber){
    name=new char[strlen(other.name)+1];
    strcpy(name,other.name);
 }
 static void showTotalStudents(){
    cout<<"the total students are:"<<totalstudents<<endl;

 }
 friend class DataBase;
 void displayStudentInfo(){
    cout<<"roll number: "<<Rollnumber<<endl;
    cout<<"name:"<<name<<endl;
    
 }
};

    int Student::totalstudents=0;
    class DataBase{
        public:
        static void addStudent(Student& s){
            Student::totalstudents++;
            cout<<"added stsudent to the database"<<endl;
      
        }
        static void removeStudent(Student& s){
            if(s.Rollnumber!=0){
                Student::totalstudents--;
                delete[] s.name;
                s.name=nullptr;
                cout<<"removed student from database"<<endl;

            }
        }
    };
    int main(){
        Student s1(101,"alice");
        Student s2(102,"bob");
        
        s1.displayStudentInfo();
        s2.displayStudentInfo();
        
         Student::showTotalStudents();
         DataBase::addStudent(s1);
         Student::showTotalStudents();
         DataBase::removeStudent(s1);
         Student::showTotalStudents();
         return 0;
    }
