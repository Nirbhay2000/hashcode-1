#include "Table.h"

Table::Table(string inputFile)
{
  /*ifstream file(inputFile);
    string firstLine;
    getline(file, firstLine);
    vector<string> infoFirst = split(firstLine, ' ');
    this->M = stoi(infoFirst[0]);
    this->T2 = stoi(infoFirst[1]);
    this->T3 = stoi(infoFirst[2]);
    this->T4 = stoi(infoFirst[3]);
    string line;
    vector<string> info;
    Pizza* pizza;
    int count;
    while (getline(file, line)) {
        info = split(line, ' ');
        count = stoi(info[0]);
        info.erase(info.begin());
        pizza = new Pizza(count, info);
        this->pizzas.push_back(pizza);
    }*/

  ios::sync_with_stdio(0);
  cin.tie(0);
  freopen(inputFile, "r", stdin);
}

vector<string> Table::split(string str, char delimiter)
{
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;

  while (getline(ss, tok, delimiter))
  {
    internal.push_back(tok);
  }

  return internal;
}