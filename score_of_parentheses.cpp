#include<iostream>
#include<stack>
using namespace std;

/*
Consider: (()(()))
We know any valid sub-expression can be replaced with its value. Let's find smallest ones

( () ( () )) ==> ( 1+ ( () )) ==> ( 1 ( 1 )) ==> (1 + 2) ==> (3) ==> 6
We see that subexpressions () with value 1 and (()) with value 2 are part of a bigger expression (()(()))

We can write inefficient code to keep find internal small expressions, but can we do smarter?

Thinking in processing left to write: we either
- have ( to indicate a new subexpression that will have ) in future
- or ) to indicate there is a subexpression that is done now

Stack can help us to do that
- We find (, we add 0: it represents the initial sum of the internal subexpressions
- We find ), we finish a subexpression value and accumulate to its parent

It might now be easy to get idea, but its solution can be a similar thinking style in other stack problems

 */


int score_of_parentheses(string str)
{
    // Each integer represents total sum added to this parent Parentheses
    stack<int> stk;
    stk.push(0); 	// temp value to help us
    for (char ch : str)
    {
        if (ch == '(')
        {
            stk.push(0);
        }
        else 
        {
            // An expression will be closed
			// Find its value: either 1 for empty () or 2 * its sub-expressions
			// Add the expression sum to its parent current sum
            int last = stk.top();
            stk.pop();
            if(last == 0)
            {
                last = 1;   // case ()
            }
            else
            {
                last *= 2;  // case (A). Get current sum and multiply
            }


            // Assume we have expression E that is (CHD)
			// where C, H, D are valid-subexpressions with values 5, 10, 4
			// then E is (5+10+4) = (19) = 38
			// Every time we finish an expression, we add its value to its parent

			// get the parent and update its sum with a finished sub-expression

            int parent_par = stk.top() + last;  // new total sum
            stk.pop();
            stk.push(parent_par);
        }
    }

    return stk.top();
}

int main()
{
    cout<<score_of_parentheses(  "(()(()))(()(()))"  );
    return 0;
}