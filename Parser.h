#ifndef PROJECT_1_PARSER_H
#define PROJECT_1_PARSER_H
#include <vector>
#include "Automaton.h"
#include "Token.h"
#include "DatalogProgram.h"
#include "Predicate.h"
#include "Rule.h"

using namespace std;

class Parser
{
private:

    DatalogProgram* datalog = new DatalogProgram();

    vector<Token*> tokens;

    int i = 0;

public:
    Parser(std::vector<Token*> inputTokens);
    ~Parser();

    DatalogProgram* parse();

    string toString();

    void match(TokenType type, int i);

    //DATALOG GRAMMAR

    void datalogProgram();

    void schemeList();
    void factList();
    void ruleList();
    void queryList();

    Predicate scheme();
    Predicate fact();
    Rule rule();
    Predicate query();

    void headPredicate(Rule* rule);
    void predicate(Rule* rule);
    void predicate(Predicate* query);

    void predicateList(Rule* rule);
    void parameterList(Predicate* input);
    void stringList(Predicate* fact);
    void idList(Predicate* input);
    void parameter(Predicate* input);

    DatalogProgram* getDatalog(){
        return datalog;
    }
};

#endif //PROJECT_1_PARSER_H
