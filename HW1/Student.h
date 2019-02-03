
#include <iostream>
#include <string>


using namespace std;

class Student
{
    private:
        int mt1_score, mt2_score, final_score, ID;
        string name; string surname;
    public:
        Student(int ID = 2094621, char name[20]="siyar", char surname[20]="vurucu", int mt1_score = 100, int mt2_score = 100, int final_score = 100);
        int getID();
        string getName();
        string getSurname();
        int getMt1score();
        int getMt2score();
        int getFinalscore();
        void setID(int ID);
        void setName(char name[]);
        void setSurname(char surname[]);
        void setMt1score(int mt1_score);
        void setMt2score(int mt2_score);
        void setFinalscore(int final_score);
        float overallScore();

};



Student::Student(int student_ID, char student_name[20], char student_surname[20], int midterm1_score,int midterm2_score,int fin_score)
{
    ID = student_ID;
    mt1_score = midterm1_score;
    mt2_score = midterm2_score;
    final_score = fin_score;
    name = student_name;
    surname = student_surname;


}


int Student::getID()
{
return ID;
}

string Student::getName()
{
return name;
}
string Student::getSurname()
{
return surname;
}

int Student::getMt1score()
{
return mt1_score;
}

int Student::getMt2score()
{
return mt2_score;
}

int Student::getFinalscore()
{
return final_score;
}

void Student::setID(int id)
{
ID = id;
}
void Student::setName(char student_name[20])
{
name = student_name;
}

void Student::setSurname(char student_surname[20])
{
surname = student_surname;
}

void Student::setMt1score(int midterm1_score)
{
mt1_score = midterm1_score;
}


void Student::setMt2score(int midterm2_score)
{
mt2_score = midterm2_score;
}

void Student::setFinalscore(int fin_score)
{
final_score = fin_score;
}
