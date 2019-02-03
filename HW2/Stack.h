Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
  Sign out
 The password you provided is weak and can be easily guessed. To increase your security, please change your password as soon as possible.

Read our documentation on safer password practices.

0
0 0 Raymalifalitiko/DataStructures
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights  Settings
DataStructures/Stack.h
265765e  on Feb 14, 2018
 srvrc Add files via upload
     
62 lines (51 sloc)  1.1 KB
#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
class Stack
{
    private:

    T *stacklist = new T[MaxStackSize];

    int top;

    public:
        int MaxStackSize;
        Stack(int MaxStackSize);
        void Push(const T& item);
        T Pop(void);
        void ClearStack(void);
        T Peek(void);
        int StackEmpty(void) const;
        int StackFull(void) const;

};
template <class T>
Stack<T>::Stack(int x):top(-1){
MaxStackSize = x;
}

template <class T>
void Stack<T>::Push(const T& item){
    if(top==MaxStackSize){
        cerr<<"Stack Overflow!"<<endl; exit(1);
    }

top++;
stacklist[top]=item;
}
template <class T>
T Stack<T>::Pop(void){
T temp;
if (top==-1){ cerr<<"Stack is empty!"<<endl;exit(1);}
temp = stacklist[top]; top--;return temp;

}

template <class T>
void Stack<T>::ClearStack(){
top=-1;
}
template <class T>
T Stack<T>::Peek(){return stacklist[top]; }

template <class T>
int Stack<T>::StackEmpty() const{
if (top==-1){return 1;} else{return 0;}
}
template <class T>
int Stack<T>::StackFull() const{
if (top==MaxStackSize){return 1;} else{return 0;}
}
© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.
