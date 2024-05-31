# *Function Overloading*
- Multiple function with same name but different parameters.Now parameter can different in the two following ways as:-
    1. Number of Parmaters passed within the function.
    2. Data type providedx to the parameter within the function.

- If we have different functions with the same name with same parameter count and with same data type of parameter just differed it with the return type of function. Then it won't be treated as two different functions infact this will throw an error.

**Let's explore few of Examples:-**

    Example 1 -
        #include<iostream>
        using namespace std;

        //These both functions are the example of the function overloading where the difference is about the data type of the parameters passed in them.

        int sum(int num1, int num2){
            return (num1+num2);
        }

        int sum(double num1, double num2){
            return (num1+num2);
        }

        int main(){
            sum(1,2); // function -> int sum would be called here as it has both its parameters as integer type.

            sum(1.5,2.5); // function -> double sum would be called here as it has both its parameters as double type.

            return 0;
        }
    
    OUTPUT:-
    3
    4 (not 4.0 as the addition of these two 1.5+2.5 will ultimaltely be converetd to int at the time of returning.)
---

    Example 2 -
        #include<iostream>
        using namespace std;

        //These both functions are the example of the function overloading where the difference is about the data type of the parameters passed in them.

        int sum(int num1, int num2){
            return (num1+num2);
        }

        double sum(double num1, double num2){
            return (num1+num2);
        }

        int main(){
            sum(1+2); // function -> int sum would be called here as it has both its parameters as integer type.

            sum(1.5+2.5); // function -> double sum would be called here as it has both its parameters as double type.

            return 0;
        }

    OUTPUT:-
    3
    4.0
---

    Example 3 -
        #include<iostream>
        using namespace std;

        //These both functions are the example of the function overloading where the difference is about the number of the parameters passed in them.

        int sum(int num1, int num2, int num3){
            return (num1+num2);
        }

        int sum(int num1, int num2){
            return (num1+num2);
        }

        int main(){
            sum(1,2,3); // function -> with three parameter will be called.

            sum(1,2); // function -> with two parametes will be called.

            return 0;
        }
    
    OUTPUT:-
    6
    3
---

    Example 4 -
        #include<iostream>
        using namespace std;

        //These both functions are the example of the function overloading where the difference is about the number of the parameters passed in them.

        int sum(int num1, int num2){
            return (num1+num2);
        }

        int sum(int num1, int num2){
            return (num1+num2);
        }

        int main(){
            sum(1,2); // function -> with three parameter will be called.

            sum(4,2); // function -> with two parametes will be called.

            return 0;
        }
    
    OUTPUT:-
    Will throw an error as the same function with no parameter difference cann't be declared twice.
---

    Example 5 -
        #include<iostream>
        using namespace std;

        //These both functions are the example of the function overloading where the difference is about the number of the parameters passed in them.

        int sum(int num1, int num2,){
            return (num1+num2);
        }

        double sum(int num1, int num2){
            return (num1+num2);
        }

        int main(){
            sum(1,2,3); // function -> with three parameter will be called.

            sum(1,2); // function -> with two parametes will be called.

            return 0;
        }
    
    OUTPUT:-
    Will throw an error as the same function with no parametr difference cann't be declared twice. More precisely will throw a name error.