#include <iostream>
#include <stdlib.h>
using namespace std;;
template <class T>
class Queue
{
    private:
    int f, r, c;
    T *qlist = new T[MaxQsize];


    public:
        int MaxQsize;
        Queue(int MaxQsize);
        T QDelete(void);
        void Qinsert(const T& item);
        T QFront(void) const;
        int QLength(void) const;
        int QEmpty(void) const;
        int QFull(void) const;
};

template <class T>
Queue<T>::Queue(int ssize){
f=0; c=0; r=0;
MaxQsize = ssize;}

template <class T>
void Queue<T>::Qinsert(const T& item){
if (c==MaxQsize){cerr<<"Queue Overflow!"<<endl;exit(1);}
c++; qlist[r]=item; r=r+1;
}

template <class T>
T Queue<T>::QDelete(void){
T temp;
if (c==0){cerr<<"Queue is Empty!"<<endl;exit(1);}
temp=qlist[f]; c--; f=f+1; return temp;
}

template <class T>
T Queue<T>::QFront(void) const{
if (c==0){cerr<<"Queue is Empty!"<<endl;}
return qlist[f];
}

template <class T>
int Queue<T>::QLength(void) const{
return c;
}

template <class T>
int Queue<T>::QEmpty(void) const{
if(c==0){return 1;} else{return 0;}
}

template <class T>
int Queue<T>::QFull(void) const{
if(c==MaxQsize){return 1;} else{return 0;}
}
