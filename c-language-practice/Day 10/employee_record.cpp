#include <iostream>
using namespace std;

class Employee {
    public :

        int emp_id;    
        string emp_name;
        int emp_age;
        int emp_role;
        int emp_salary;
        string emp_city;
        int emp_experience;
        string emp_company_name;

        void getData(){
            cout<<"Enter your id(emp_id) "<<endl;
            cin>>emp_id;

            cout<<"Enter Your name: "<<endl;
            cin>>emp_name;

            cout<<"Enter Yuor age: "<<endl;
            cin>>emp_age;

            // cout<<"Enter Your role: "<<endl;
            // cin>>emp_role;

            cout<<"Enter Your salary: "<<endl;
            cin>>emp_salary;

            cout<<"Enter Your city name: "<<endl;
            cin>>emp_city;

            // cout<<"Enter Your experience: "<<endl;
            // cin>>emp_experience;

            // cout<<"Enter Your company name: "<<endl;
            // cin>>emp_company_name;
        }

        void display(){

            cout<<"Employee ID: "<<emp_id<<endl;
            cout<<"Employee Name : "<<emp_name<<endl;
            cout<<"Employee Age: "<<emp_age<<endl;
            // cout<<"Employee Role : "<<emp_role<<endl;
            cout<<"Employee Salary: "<<emp_salary<<endl;
            cout<<"Employee City : "<<emp_city<<endl;
            // cout<<"Employee Experience : "<<emp_experience<<endl;
            // cout<<"Employee Company name : "<<emp_company_name<<endl;

        }

};

int main(){
    Employee emp[2];

    cout<<"Enter details of 5 employees: "<<endl;
    for(int i = 0; i<2;i++){
        cout<<"Employee : "<<endl <<i+1 <<":\n";
        emp->getData();
    }

    cout<<"...Employee Records..."<<endl;

    for(int i = 0; i<2; i++){
        emp->display();
    }

    return 0;
}