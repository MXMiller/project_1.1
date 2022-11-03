#ifndef PROJECT_1_RELATION_H
#define PROJECT_1_RELATION_H
#include <vector>
#include <map>
#include "DatalogProgram.h"
#include "Predicate.h"
#include "Rule.h"
#include "Header.h"
#include "Tuple.h"

using namespace std;

class Relation
{
private:
    string name;
    Header colNames;
    set<Tuple*> tuples;

public:
    Relation() = default;
    Relation(string name, Header colNames){
        this->name = name;
        this->colNames = colNames;
    }
    ~Relation(){}

    string getName(){
        return name;
    }
    void addTuple(Tuple* newTuple){
        tuples.insert(newTuple);
    }

    Relation select(int i, string val);
    Relation select(int i1, int i2);
    Relation project(vector<int> columns);
    Relation rename(vector<string> newColNames);
    //Relation Join(Relation other);

};

#endif //PROJECT_1_RELATION_H
