#include "cardhold.h"

Students::Students()
{
    name = "";
    surname = "";
    name_group = "";
    direction = "";
    cours_number = 0;
}

Students::Students(string name_o, string surname_o, string name_group_o, string direction_o, int cours_number_o)
{
    name = name_o;
    surname = surname_o;
    name_group = name_group_o;
    direction = direction_o;
    cours_number = cours_number_o;
}


istream& operator >> (istream &in, Students &student)
{
    in >> student.name >> student.surname >> student.name_group >> student.direction >> student.cours_number;
    return in;
}

ostream& operator<< (ostream &out, const Students &student)
{
    out << student.name << ' ' << student.surname << ' ' << student.direction << ' ' << student.cours_number << ' ' << student.name_group;
    return out;
}

