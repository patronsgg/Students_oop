#include <string>
#include <iostream>
using namespace std;

class Students
{
private:
    string name, surname, name_group, direction;
    int cours_number;
public:
    Students();
    Students(string, string, string, string, int);
    friend ostream& operator<< (ostream &out, const Students &student);
    friend istream& operator>> (istream &in, Students &student);
};
