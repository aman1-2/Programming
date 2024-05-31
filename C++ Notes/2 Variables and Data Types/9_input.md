# Input in Cpp

## Syntax:-
    cin>>name;
    Here name is a variable which we hold the input value in it.

- In cpp cin is used for taking the input from the input stream keyword.
- And holds that input value inside the associated variable.

## Question - WAP to Sum to numbers.
    #include<iostream>
    using namespace std;
    int main(){
        int num1, num2;
        cout<<"Enter the First Number: ";
        cin>>num1;

        cout<<<"Enter the Second Number: :;
        cin>>num2;

        int sum;
        sum = num1 + num2;
        cout<<"Sum = "<<sum;
        
        return 0;
    }