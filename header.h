#include <string>

using namespace std;

class Nevaeh_Employees{
    string name;
    int employeeid;
    double salary;

    public:
        Nevaeh_Employees();
        Nevaeh_Employees(string,int,double);
        string get_name();
        int get_employeeid();
        double get_salary();

};