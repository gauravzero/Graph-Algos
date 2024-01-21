#include <stack>
#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <unordered_map>
using namespace std;

void addEdge(unordered_map<char, vector<char>> &graph, char from, char to){
    graph[from].push_back(to);
}

void bft(unordered_map<char, vector<char>> graph, char source){
    list<char> nodes{};
    nodes.push_back(source);

    while(!nodes.empty()){
        char theNode = nodes.front();
        std::cout <<" Node : " << theNode << std::endl;
        nodes.pop_front();
        for(char i : graph[theNode]){
            nodes.push_back(i);
        }
    }
}

int main(){
    // Create Graph
    unordered_map<char, vector<char>> graph;
    addEdge(graph, 'a', 'c');
    addEdge(graph, 'a', 'b');
    addEdge(graph, 'b', 'd');
    addEdge(graph, 'c', 'e');

    //DFT
    bft(graph, 'a');
}