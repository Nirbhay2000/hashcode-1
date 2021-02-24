#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

#include "Pizza.h"

using namespace std;

class Table {
    private:
        string inputFile;
        int M;
        int T2;
        int T3;
        int T4;
        vector<Pizza*> pizzas;
        map<string, int> ingredientsToId;
        int ingredientIdCounter;
    public :
        Table(string inputFile);
        vector<string> split(string str, char delimiter);
        vector<int> greedy(int teamNumber); //Return vector<int>[numberOfDiffIngredient, listPizzas of the solution (5,2,10)]
        int getIngredientId(string ingredient);

}