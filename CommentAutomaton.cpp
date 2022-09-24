#include "CommentAutomaton.h"

using namespace std;

void CommentAutomaton::S0(const std::string& input) {
    if ((input[index] == '#') & (input[index + 1] == '|')) {
        inputRead++;
        index++;
        S2(input);
    } else if (input[index] == '#') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if(input[index] == '\n'){

    } else {
        inputRead++;
        index++;
        S1(input);
    }
}

void CommentAutomaton::S2(const std::string& input) {
    if ((input[index] == '|') & (input[index + 1] == '#')){
        inputRead++;
    } else if (input[index] == EOF){
        this->type = TokenType::UNDEFINED;
    }else {
        inputRead++;
        index++;
        S2(input);
    }
}