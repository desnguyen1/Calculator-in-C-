#include <iostream>
#include <cmath>

int main()
{
    double num2, total, prevTotal;
    int error = 0;
    char op, choice;
    std::cout<<"\n---------------------------------------"<<std::endl;
    std::cout<<"Welcome to the basic calculator program";
    std::cout<<"\nCalculator operations: ";
    std::cout<<"\nAddition: +";
    std::cout<<"\nSubtraction: -";
    std::cout<<"\nDivision: /";
    std::cout<<"\nMultiplication: *";
    std::cout<<"\nExponent: ^";
    std::cout<<"\nPlease enter the first value: ";
    std::cin>>total;
    do{
        do{
            std::cout<<"\nEnter the operation: ";
            std::cin>>op;
            std::cout<<"\nPlease enter the next value: ";
            std::cin>>num2;
            //switch operator for basic calculator
            switch(op){
                case '+':
                    prevTotal = total;
                    total += num2;
                    std::cout<<"\n"<<prevTotal<<" + "<<num2<<" = "<<total<<std::endl;
                    error = 0;
                    break;
                case '-':
                    prevTotal = total;
                    total -= num2;
                    std::cout<<"\n"<<prevTotal<<" - "<<num2<<" = "<<total<<std::endl;
                    error = 0;
                    break;
                case '/':
                    prevTotal = total;
                    while(num2 == 0){
                        std::cout<<"\nCannot divide by 0. Please choose another number: ";
                        std::cin>>num2;
                    }
                    total /= num2;
                    std::cout<<"\n"<<prevTotal<<" / "<<num2<<" = "<<total<<std::endl;
                    error = 0;
                    break;
                case '*':
                    prevTotal = total;
                    total *= num2;
                    std::cout<<"\n"<<prevTotal<<" * "<<num2<<" = "<<total<<std::endl;
                    error = 0;
                    break;
                case '^':
                    prevTotal = total;
                    total = pow(total, num2);
                    std::cout<<"\n"<<prevTotal<<" ^ "<<num2<<" = "<<total<<std::endl;
                    break;
                default:
                    std::cout<<"\nInvalid operation";
                    error = 1;
                    break;    
            }
        }while(error == 1);
        std::cout<<"Total is: "<<total<<std::endl;
        std::cout<<"\nDo another operation? 'Y' or 'N': ";
        std::cin>>choice;
    }while(toupper(choice) == 'Y');

    /*
    //test print
    std::cout<<"Num1 is: "<<num1<<std::endl;
    std::cout<<"Num2 is: "<<num2<<std::endl;
    std::cout<<"Operator is: "<<op<<std::endl;
    */
    
    return 0;
}