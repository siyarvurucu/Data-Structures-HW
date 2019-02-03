#include <string>
#include <iostream>
class Course
{
    private:
    Student entries[10];
    int num;
    float weight_mt1;
    float weight_mt2;
    float weight_final;

    public:
        Course(int num = 0, float m1w = 0.25, float m2w = 0.25, float wf = 0.5);
        int getNum();
        void changeWeights(int m1w, int m2w, int fw);
        Student getStudent(int idx);
        void calcAverage();
        void addStudent();
        float getMt1_weight();
        float getMt2_weight();
        float getFinal_weight();
        Student* pgetStudent(int idx);
};

Course::Course(int numb, float m1w, float m2w , float wf)
{
num = numb;
weight_mt1 = m1w;
weight_mt2 = m2w;
weight_final = wf;
};


void Course::addStudent()
{
int id, mt1, mt2, fin;
char name[20], surname[20];
if (num < 10){
    tryagain:
    cout << "Enter ID, name, surname and exam scores (MT1 ,MT2 , Final):";
    cin >> id >> name >> surname >> mt1 >> mt2 >> fin ;
    if(id<0||name==" "||surname==" "||mt1<0||mt1>120||mt2<0||mt2>120||fin<0||fin>120) { cout << "Please check your inputs and try again!"<<endl; goto tryagain;}
    entries[num] = Student(id,name,surname,mt1,mt2,fin);
    num++;
    }
else{
cout << "Course capacity is full!"<<endl; }
}

Student Course::getStudent(int idx)
{
return entries[idx];
}

Student* Course::pgetStudent(int idx)        // Pointer of the students are needed in updateScore function
{
return &entries[idx];
}

void Course::changeWeights(int m1w, int m2w, int fw)
{
weight_mt1 = m1w;
weight_mt2 = m2w;
weight_final = fw;
}

void Course::calcAverage(){
float total_mt1 = 0;
float total_mt2 = 0;
float total_final = 0;
for (int i=0;i<num;i++){
    total_mt1 = total_mt1 + entries[i].getMt1score();
    total_mt2 = total_mt2 + entries[i].getMt2score();
    total_final = total_final + entries[i].getFinalscore();
}
float avg_mt1 = total_mt1/num;
float avg_mt2 = total_mt2/num;
float avg_final = total_final/num;
float avg_overall = avg_mt1*weight_mt1 + avg_mt2*weight_mt2 + avg_final*weight_final;
cout << "Midterm 1 Average: " << avg_mt1 << "\nMidterm 2 Average: " << avg_mt2 << "\nFinal Average: " << avg_final << "\nOverall Average: " << avg_overall<<"\n";
}

int Course::getNum(){
return num;
}

float Course::getMt1_weight(){
return weight_mt1;
}


float Course::getMt2_weight(){
return weight_mt2;
}


float Course::getFinal_weight(){
return weight_final;
}

















