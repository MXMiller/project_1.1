#ifndef PROJECT_1_Q_MARKAUTOMATON_H
#define PROJECT_1_Q_MARKAUTOMATON_H

#include "Automaton.h"

using namespace std;

class Q_MarkAutomaton : public Automaton
{
public:
    Q_MarkAutomaton() : Automaton(TokenType::Q_MARK) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //PROJECT_1_Q_MARKAUTOMATON_H
