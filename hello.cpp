#include<string>
#include "header.h"

using namespace std;

    Nevaeh_Employees e1("Sanchayan",123654,20000.00);
    cout<<e1.get_name()<<endl;
    cout<<e1.get_salary()<<endl;
    cout<<e1.get_employeeid()<<endl;
    cout<<"Hello Mehir, Sanchayan, Niraj ! Welcome to Nevaeh Technology";
 }

 Nevaeh_Employees::Nevaeh_Employees(string name,int employeeid,double salary){
    this->name = name;
    this->employeeid = employeeid;
    this->salary = salary;
}

Nevaeh_Employees::Nevaeh_Employees(){
    this->name = "Default";
    this->employeeid = 111111;
    this->salary = 1000.0;
}

string Nevaeh_Employees::get_name(){
    return name;
}

double Nevaeh_Employees::get_salary(){
    return salary;
}

int Nevaeh_Employees::get_employeeid(){
    return employeeid;
}
>>>>>>> refs/remotes/origin/main
