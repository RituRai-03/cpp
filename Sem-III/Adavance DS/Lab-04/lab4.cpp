//             //Infix to Postfix

// #include <bits/stdc++.h>
// using namespace std;

// int precendence(char op)
// {
//     if(op == '^')
//      return 3;

//     if(op == '*' || op == '/')
//      return 2;
    
//     if(op == '+' || op =='-')
//      return 1;
    
//     return 0;
// }

// bool isOperator (char ch)
// {
//     return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch  == '^';
// }

// string infixToPostfix(string expression)
// {
//     stack <char> st;
//     string result = "";
//     for(char ch : expression)
//     {
//         //operand
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//         {
//             result += ch;
//         }
//         else if (ch == '(')
//         {
//             st.push(ch);
//         }
//         else if (ch == ')')
//         {
//             while(!st.empty() && st.top() != '(')
//             {
//                 result += st.top();
//                 st.pop();
//             }
//             if(!st.empty())
//             {
//                 st.pop(); // remove '('
//             }
//         }
//         else if (isOperator(ch))
//         {
//             while(ch !='^' && !st.empty() && (
//                 (ch != '^' && precendence(st.top()) >= precendence(ch)) ||
//                 (ch == '^' && precendence(st.top()) > precendence(ch))
//             ))
//             {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }

//     while(!st.empty())
//     {
//         result += st.top();
//         st.pop();
//     }

//     return result;
// }

// int main()
// {
//     string expression;
//     cin >> expression;
//     cout << infixToPostfix(expression);

//     return 0;

// }


                                 //Postfix Evaluation


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string postfix;
    cout <<"Enter postfix Expression: ";
    cin>>postfix;
    stack<int> st;
    for(char ch : postfix){
        if(isdigit(ch))
        {
            st.push(ch - '0');
        }
        else {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            int result;
            switch(ch)
            {
                case '+':
                  result = operand1 + operand2;
                  break;

                  case '-':
                  result = operand1 - operand2;
                  break;

                  case '*':
                  result = operand1 * operand2;
                  break;

                  case '/':
                  result = operand1 / operand2;
                  break;

                  case '^':
                  result = pow(operand1 , operand2);
                  break;
                
            }
            st.push(result);
        }
    }
    cout << "Result: " << st.top() << endl;
    return 0;
}

