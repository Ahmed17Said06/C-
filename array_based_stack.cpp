#include<iostream>
#include<cassert>
using namespace std;

class Stack
{
    private:
        int size {};
        int top {};
        int* array {};

    public:
        Stack(int size) : size(size), top(-1)
        {
            array = new int[size];
        }

        bool isFull()
        {
            if (top == size - 1)
            {
                return true;
            }
            return false;
        }

        bool isEmpty()
        {
            if(top == -1)
            {
                return true;
            }
            return false;
        }

        void push(int val)
        {
            assert(!isFull);
            array[++top] = val;          
        }

        int pop ()
        {
            assert(!isEmpty);
            return array[top--];
        }

        int peek()
        {
            assert(!isEmpty);
            return array[top];
        }

        void Display()
        {
            for (int i = top; top >= 0; top--)
            {
                cout << array[i] << " ";
            }
            cout <<"\n";
        }

};