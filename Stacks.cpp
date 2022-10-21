#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> stack;
  
  //Enter elements to add into stack
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	
  
  //Removing elements from the stack by folloeing LIFO Rule( Last in First Out )
	stack.pop();
	stack.pop();
  stack.pop();
	stack.pop();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
