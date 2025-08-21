#include <iostream>
using namespace std;

class  Customer {
public:

    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    double mobile_number;
    int sim_validity;
    string brand_name;


    void getData(){
        cout<<"Enter Your id: "<<endl;
        cin>>cust_id;

        cout<<"Enter Your name: "<<endl;
        // getline(cin , cust_name);
        cin>>cust_name;
        cout<<"Enter your age: "<<endl;
        cin>>cust_age;

        cout<<"Enter Your city: "<<endl;
        cin>>cust_city;

        cout<<"Enter your mobile number: "<<endl;
        cin>>mobile_number;

        cout<<"Enter sim validity (In year): "<<endl;
        cin>>sim_validity;

    }

    void display(){

        cout<<"....Customer Records..."<<endl;
        cout<<"Customer ID : "<<cust_id<<endl;
        cout<<"Customer Name : "<<cust_name<<endl;
        cout<<"Customer Age : "<<cust_age<<endl;
        cout<<"Customer city : "<<cust_city<<endl;
        cout<<"Customer MObile number : "<<mobile_number<<endl;
        cout<<"Sim validity is : "<<sim_validity<<endl;
    }
    

};

int main(){

    Customer cust1;
    cust1.getData();
    cust1.display();

    Customer cust2;
    cust2.getData();
    cust2.display();

    Customer cust3;
    cust3.getData();
    cust3.display();

    Customer cust4;
    cust4.getData();
    cust4.display();

    Customer cust5;
    cust5.getData();
    cust5.display();

    return 0;
}