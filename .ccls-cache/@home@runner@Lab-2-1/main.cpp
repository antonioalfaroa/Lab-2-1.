#include <iostream> 
using std::cout; 
using std::cin; 
using std::endl;
#define MAX 10 
class student { 
  private: 
    char name[30]; 
    int courseNum; 
    int total; 
    float perc; 
    int spaceName = 0;
  public: 
    void getDetails(void); //member function to get student's details 
    void putDetails(void); //member function to print student's details 
}; 
void student:: getDetails(void) //member function definition, outside of  the class 
{ 
  cout << "Enter name: " ; 
  cin >> name; 
  cout << "Enter course number: "; 
  cin >> courseNum; 
  cout << "Enter total grades out of 500: "; 
  cin >> total; 
  perc=(float)total/500*100; 
} 
void student:: putDetails(void) //member function definition, outside of the class 
{ 
  cout << "Student details:\n"; 
  cout << "Name:"<< name << ",course Number:" << courseNum << 
",Total:" << total << ",Percentage:" << perc<<endl;
}

int main(void){
  student stu[3];
  int num;
  cout<<"Enter total number of students : "<<endl;
  cin>>num;
  for(int i=0;i<num;i++){
    cout<<endl<<"Enter details for student : "<<i+1<<endl<<endl;
   stu[i].getDetails();
   
  };
  for(int i=0;i<num;i++){
    stu[i].putDetails();
    cout<<endl;
    }
  
  
  return 0;
}