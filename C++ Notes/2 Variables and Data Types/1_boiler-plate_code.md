# Boiler-plate Code
This much code have to write in any Cpp Program file and are usually known as `Template` code.

    #include<iostream>
    using namespace std;
    int main(){
        //Code Logic

        return 0;
    }

This code will execute but won't give us any output.
But lets say we do something like:-

    #include<iostream>
    using namespace std;
    int main(){
        cout<<"Aman"<<endl;
        return 0;
    }
**Output :-** Aman

The above code gave us output as Aman because here we tried to print just a single line.

---

Let's Know try to break the above code:-
- **# ->** `Pre-Processor Directive.`
- **iostream ->** `Header File.`
- **namespace std ->** `Some sort of namespace.`
- **int main() ->** `Its for the main function execution.The Program execution starts from the main function itself.`
- **return 0 ->** `Indicating the successful end or execution of the program.No statement gets executed after this statement.`
- **{ ... } ->** `These curly braces indicates the block of code i.e they indicate the starting and ending of the code.`
- **; ->** `Statement Terminator Indicates the end of the one complete statement.`