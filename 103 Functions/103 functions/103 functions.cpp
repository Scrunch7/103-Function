

#include <iostream>



void func1() {

    int n;

    std::cout << " Input a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " ";
    }

}

void func2() {

    char operat;
    float num1, num2;
    float result = 1;

    std::cout << "Enter operator: +, -, *, /, ^: ";
    std::cin >> operat;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    switch (operat) {

    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        std::cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    case '^':
        for (int i = 1; i <= num2; i++)
        {
            result = result * num1;
        }
        std::cout << num1 << " ^ " << num2 << " = " << result;
        break;
    }

}

int func3(int n) {

    if ((n == 1) || (n == 0)) {
        return(n);
    }
    else {
        return(func3(n - 1) + func3(n - 2));
    }
}

void func4() {

}


int main()
{
    //func1();
    //func2();

    int n, i = 0;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "\nFibonnaci Series : ";
    while (i < n) {
        std::cout << " " << func3(i);
        i++;
    }

    //func4();

}
