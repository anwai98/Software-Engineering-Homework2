// Calculator Menu

#include<iostream>

double add(double a, double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}

double multiplication(double a, double b)
{
    return a*b;
}

double division(double a, double b)
{
    return a/b;
}

int mod(int a, int b)
{
    return a%b;
}

int main()
{
    char continue_program = 'y';
    do
    {
        int operation;
        std::cout<<"Calculator Menu : \n For Addition, Enter: 1 \n For Subtraction, Enter: 2 \n For Multiplication, Enter: 3 \n For Division, Enter: 4 \n For Modulus Enter: 5 \n";
        std::cout<<"Enter your choice"<<"\n";
        std::cin>>operation;

        switch(operation)
        {
            case(1):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter your two numbers for Addition."<<"\n";
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"Addition Result = "<<add(num_1,num_2)<<"\n";
                break;
            }
            case(2):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the two numbers for Subtraction."<<"\n";
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"Subtraction Result = "<<subtract(num_1,num_2)<<"\n";
                break;
            }
            case(3):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the two numbers for Multiplication."<<"\n";
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"Multiplication Result = "<<multiplication(num_1,num_2)<<"\n";
                break;
            }
            case(4):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the two numbers for Division (Dividend and Divisor)."<<"\n";
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"Division Result = "<<division(num_1,num_2)<<"\n";
                break;
            }
            case(5):
            {
                double num_1;
                double num_2;
                std::cout<<"Enter the two numbers for Modulus (Dividend and Divisor)."<<"\n";
                std::cin>>num_1;
                std::cin>>num_2;
                std::cout<<"Modulus Result = "<<mod(num_1,num_2)<<"\n";
                break;
            }
        }
        std::cout<<"To continue the operation press 'y', or to exit enter any key"<<"\n";
        std::cin>>continue_program;
    }
    while(continue_program == 'y');
    return 0;
}
