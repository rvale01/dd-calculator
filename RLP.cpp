#include <iostream>
#include "RLP.hpp"
using namespace std;

bool RLP::check_operator(char ch){
    if(ch == '*' || ch == '/' || ch == '+' || ch == '-'){
        return true;
    }
    return false;
};

int RLP::operation(int val1, int val2, char operand){
    switch (operand)
        {
            case '*':{
                return (val2 * val1);
            };break;
            case '+':{
                return (val2 + val1);
            };break;

            case '-':{
                return (val2 - val1);
            };break;
                case '/':{
                return (val2 / val1);
            };break;
            default:
                return 0;
                break;
        }
    return 0;
};

int RLP::rpn_eval(string expr){
    string temp_string = "";
    for(int x = 0; x<expr.length(); x++){
        if(expr[x] == ' '){
            if(temp_string != ""){
                int value = std::stoi(temp_string);
                temp_string = "";
                stack.push(value);
            }
            continue;
        }else if(check_operator(expr[x])){
            temp_string = "";
            int value1 = stack.pop();
            int value2 = stack.pop();
            int res = operation(value1, value2, expr[x]);
            stack.push(res); 
        }else{
            temp_string = temp_string + expr[x];
        }
    }
    int result = stack.pop();
    return result;
};

// Write tests here
int main(){
    string testing = "140 41 +";
    RLP rlp;
    int res = rlp.rpn_eval(testing);
    cout << res;
    return 0;
};