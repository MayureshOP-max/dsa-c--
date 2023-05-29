#include<iostream>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to determine the precedence of an operator
int precedence(char c) {
    if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(const char expression[], char postfix[]) {
    int postfixIndex = 0;
    char stack[100];
    int stackIndex = 0;

    for (int i = 0; expression[i] != '\0'; i++) {
        char c = expression[i];

        // If the current character is an operand, add it to the postfix expression
        if (isalnum(c)) {
            postfix[postfixIndex++] = c;
        }
        // If the current character is an opening parenthesis, push it to the stack
        else if (c == '(') {
            stack[stackIndex++] = c;
        }
        // If the current character is a closing parenthesis, pop operators from the stack
        // and add them to the postfix expression until an opening parenthesis is encountered
        else if (c == ')') {
            while (stackIndex > 0 && stack[stackIndex - 1] != '(') {
                postfix[postfixIndex++] = stack[--stackIndex];
            }

            // Pop the opening parenthesis from the stack
            if (stackIndex > 0 && stack[stackIndex - 1] == '(') {
                stackIndex--;
            }
        }
        // If the current character is an operator
        else if (isOperator(c)) {
            // Pop operators from the stack and add them to the postfix expression
            // as long as they have equal or higher precedence than the current operator
            while (stackIndex > 0 && precedence(stack[stackIndex - 1]) >= precedence(c)) {
                postfix[postfixIndex++] = stack[--stackIndex];
            }

            // Push the current operator to the stack
            stack[stackIndex++] = c;
        }
    }

    // Pop any remaining operators from the stack and add them to the postfix expression
    while (stackIndex > 0) {
        postfix[postfixIndex++] = stack[--stackIndex];
    }

    postfix[postfixIndex] = '\0'; // Null-terminate the postfix expression
}

int main() {
    char infixExpression[100];
    std::cout << "Enter an infix expression: ";
    std::cin.getline(infixExpression, 100);

    char postfixExpression[100];
    infixToPostfix(infixExpression, postfixExpression);
    std::cout << "Postfix expression: " << postfixExpression << std::endl;

    return 0;
}
