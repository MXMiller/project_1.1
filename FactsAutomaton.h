#ifndef PROJECT_1_FACTSAUTOMATON_H
#define PROJECT_1_FACTSAUTOMATON_H

#include "Automaton.h"

using namespace std;

class FactsAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);
    void S3(const std::string& input);
    void S4(const std::string& input);

public:
    FactsAutomaton() : Automaton(TokenType::FACTS) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //PROJECT_1_FACTSAUTOMATON_H
