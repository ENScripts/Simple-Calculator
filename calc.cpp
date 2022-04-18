#include <iostream>
#include <string>

using namespace std;
int main()
{
    char op;
    string answer = "The answer is: ";
    float num1;
    float num2;
    cout << R"(
   _____ _                 _                  _            _       _             
  / ____(_)               | |                | |          | |     | |            
 | (___  _ _ __ ___  _ __ | | ___    ___ __ _| | ___ _   _| | __ _| |_ ___  _ __ 
  \___ \| | '_ ` _ \| '_ \| |/ _ \  / __/ _` | |/ __| | | | |/ _` | __/ _ \| '__|
  ____) | | | | | | | |_) | |  __/ | (_| (_| | | (__| |_| | | (_| | || (_) | |   
 |_____/|_|_| |_| |_| .__/|_|\___|  \___\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
                    | |                                                          
                    |_|                                                          
)" << endl;

    cout << R"(
              ____          ______ _   _   _  _    ___  __ ____ ____  
             |  _ \        |  ____| \ | |_| || |_ / _ \/_ |___ \___ \ 
             | |_) |_   _  | |__  |  \| |_  __  _| (_) || | __) |__) |
             |  _ <| | | | |  __| | . ` |_| || |_ \__, || ||__ <|__ < 
             | |_) | |_| | | |____| |\  |_  __  _|  / / | |___) |__) |
             |____/ \__, | |______|_| \_| |_||_|   /_/  |_|____/____/ 
                     __/ |                                            
                    |___/                                             
    )" << endl;

    cout << "Type any operator (* / + -)" << endl;
    cin >> op;
    cout << "Type the first number of the sum " << endl;
    cin >> num1;
    cout << "Type the second number of the sum " << endl;
    cin >> num2;
    switch (op)
    {
    case '*':
        cout << answer << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    break;

    case '+':
        cout << answer << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    break;

    case '/':
        cout << answer << num1 << " / " << num2 << " = " << num1 / num2 << endl; 
    break;

    case '-':
        cout << answer << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    break;

    default:
        cout << op << " Is not a valid operator" << endl;
    break;
    }
}