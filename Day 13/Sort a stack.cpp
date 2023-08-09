#include <bits/stdc++.h> 
void insert(stack<int> &stack,int n)
{
	if(stack.empty())
	{
		stack.push(n);
		return;
	}
	int a=stack.top();
	if(a<=n)
	{
		stack.push(n);
		return;
	}
	stack.pop();
	insert(stack,n);
	stack.push(a);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty())
	return;
	int a=stack.top();
	stack.pop();
	sortStack(stack);
	insert(stack,a);
}