#include <iostream>


int main()
{
    float num1, num2, total;
    int error = 0;
    char op;
    std::cout<<"\n---------------------------------------"<<std::endl;
    std::cout<<"Welcome to the basic calculator program";
    std::cout<<"\nPlease enter the first value: ";
    std::cin>>num1;
    std::cout<<"\nPlease enter the second value: ";
    std::cin>>num2;

    do{
        std::cout<<"\nEnter the operation: ";
        std::cin>>op;
        //switch operator for basic calculator
        switch(op){
            case '+':
                total = num1 + num2;
                error = 0;
                break;
            case '-':
                total = num1 + num2;
                error = 0;
                break;
            case '/':
                while(num2 == 0){
                    std::cout<<"\nCannot divide by 0. Please choose another number: ";
                    std::cin>>num2;
                }
                total = num1/num2;
                error = 0;
                break;
            case '*':
                total = num1 * num2;
                error = 0;
                break;
            default:
                std::cout<<"\nInvalid operation";
                error = 1;
                break;    
        }
    }while(error == 1);

    //test print
    std::cout<<"Num1 is: "<<num1<<std::endl;
    std::cout<<"Num2 is: "<<num2<<std::endl;
    std::cout<<"Operator is: "<<op<<std::endl;
    std::cout<<"Total is: "<<total<<std::endl;
    
    return 0;
}