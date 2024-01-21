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

void dft(unordered_map<char, vector<char>> graph, char source){
    stack<char> nodes{};
    nodes.push(source);

    while(!nodes.empty()){
        char theNode = nodes.top();
        std::cout <<" Node : " << theNode << std::endl;
        nodes.pop();
        for(char i : graph[theNode]){
            nodes.push(i);
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
    dft(graph, 'a');
}