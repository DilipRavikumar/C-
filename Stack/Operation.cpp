#include <iostream>
#include <stack>
using namespace std;

int top = -1;
const int STACK_SIZE = 4;
int arr[STACK_SIZE];

bool isFull()
{
    return top == STACK_SIZE - 1;
}
bool isEmpty()
{
    return top == -1;
}
void pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty";
    }
    else
    {
        cout <<"The popped elements is" <<endl<<arr[top]<<endl;
        top = top - 1;

    }
}

void push(int arr[], int value)
{
    if (isFull())
    {
        cout << "Stack is Full";
    }
    else
    {
        top += 1;
        arr[top] = value;
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack contents: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    push(arr, 5);
    push(arr, 4);
 
    push(arr, 3);

    display();
    pop();
    display();
    return 0;
}