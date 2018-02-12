#include "Student.h"
#include "Course.h"
#include <string.h>

using namespace std;

void showAbove(int threshold, Course x){
int a = 0;
for(int i=0; i<x.getNum();){
            float student_overall = x.getStudent(i).getMt1score()*x.getMt1_weight()
             + x.getStudent(i).getMt2score()*x.getMt2_weight() + x.getStudent(i).getFinalscore()*x.getFinal_weight();
            if (student_overall>threshold) {
                a++;
                cout << x.getStudent(i).getID() <<" "<< x.getStudent(i).getName() <<" "<< x.getStudent(i).getSurname() <<" "
                << x.getStudent(i).getMt1score() <<" "<< x.getStudent(i).getMt2score() <<" "<< x.getStudent(i).getFinalscore()<<"\n";
                }
            i++;
}
if (a==0){cout << "There is no student with overall score above " << threshold << endl;}

}

void showBelow(int threshold, Course x){
int a = 0;
for(int i=0; i<x.getNum();){                                                                              // for each student in enries
            float student_overall = x.getStudent(i).getMt1score()*x.getMt1_weight()
             + x.getStudent(i).getMt2score()*x.getMt2_weight() + x.getStudent(i).getFinalscore()*x.getFinal_weight();     // calculate the overall score
            if (student_overall<threshold) {
                a++;
                cout << x.getStudent(i).getID() <<" "<< x.getStudent(i).getName() <<" "<< x.getStudent(i).getSurname() <<" "     // if it is below thrs. cout
                << x.getStudent(i).getMt1score() <<" "<< x.getStudent(i).getMt2score() <<" "<< x.getStudent(i).getFinalscore() << endl;;
                }

            i++;
}
if (a==0){cout << "There is no student with overall score below " << threshold << endl;}
}

void showAverage(Course x){
x.calcAverage();
}

void showByID(int id, Course x){
for(int i=0;i<x.getNum();){
    if (id==x.getStudent(i).getID()){
        cout << x.getStudent(i).getID() <<" "<< x.getStudent(i).getName() <<" "<< x.getStudent(i).getSurname() <<" "
        << x.getStudent(i).getMt1score() <<" "<< x.getStudent(i).getMt2score() <<" "<< x.getStudent(i).getFinalscore() <<"\n"; break;}
    else{i++;}
    if (i==x.getNum()){ cout << "Invalid ID\n";}
}

}

void updateStudentScore(Course *x, int id,char exam[3],  int score){
string exam1(exam);
string mt1("mt1");
string mt2("mt2");
string fin("fin");
for(int i=0;i<(*x).getNum();){
    if (id==x->pgetStudent(i)->getID()){
            if (exam1.compare(mt1)==0){ x->pgetStudent(i)->setMt1score(score); break; }
            if (exam1.compare(mt2)==0){ x->pgetStudent(i)->setMt2score(score); break; }
            if (exam1.compare(fin)==0){ x->pgetStudent(i)->setFinalscore(score); break; }
            else{cout<<"Invalid exam type\n"; break;}

    }
    i++;
    if (i>=x->getNum()){ cout << "Invalid ID\n"; break;}

}
}
int main(){
char exam[3];
Course EE441;
char name[20],surname[20];
int z,id,score;
float threshold;

cout << "WELCOME TO USER INTERFACE\n\nChoose your option:\n"
"1)Add a student\n"
"2)Search a student by ID\n"
"3)Show students above a threshold\n"
"4)Show students below a threshold\n"
"5)Show classroom average\n"
"6)Change a student's score\n"
"7)Exit\n";
start:
cout << "Enter your option:\n";
cin >> z;
if((EE441.getNum()==0)&(z!=1)&(z!=7)) {cout << "Course is empty. Add students first."<<endl; goto start;}
switch(z){
    case 1:
        EE441.addStudent();
        break;
    case 2:
        cout << "Enter ID: \n";
        cin >> id;
        showByID(id, EE441);
        break;
    case 3:
        cout << "Enter minimum score: \n";
        cin >> threshold;
        showAbove(threshold, EE441);
        break;
    case 4:
        cout << "Enter maximum score: \n";
        cin >> threshold;
        showBelow(threshold, EE441);
        break;
    case 5:
        showAverage(EE441);
        break;
    case 6:
        cout << "Enter ID, exam type (mt1,mt2,fin) and updated score: ";
        cin >> id >> exam >> score;
        updateStudentScore(&EE441,id,exam,score);
        break;
    case 7:
        cout << "Goodbye!";
        goto exit;

};
goto start;
exit:
return 0;
}

