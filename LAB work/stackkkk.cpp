#include<iostream>
#include<conio.h>
using namespace std;
class Stack{
	protected:
		enum { MAX=3 };
		int st[MAX];
		int top;
	public:
		Stack(){
			top=-1;
		}
		void push(int x){
			st[++top]=x;
		}
		int pop(){
			return st[top--];
		}
};
class Stack2:public Stack{
	public:
		void push(int x){
			if(top>=MAX-1){
				cout<<"\nError: stack is full";
				exit(1);
			}
				Stack::push(x);
		}
		int pop(){
			if(top<0){
				cout<<"\nError: stack is empty\n";
				exit(1);
			}
			return Stack::pop();
		}
};
int main(){
	Stack2 s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);
	cout<<"\n"<<s1.pop();
	cout<<endl<<s1.pop();
	cout<<endl<<s1.pop();
	cout<<endl<<s1.pop();
	return 0;
}
