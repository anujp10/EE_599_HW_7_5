#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <unordered_set>

class Graph {
public:
  int vertices;
  std::map <int, std::unordered_set<int>> v_;
  std::vector<std::vector<int>> graph_;

  Graph(int g) : vertices(g), graph_ (g, std::vector<int> (g, INT16_MAX)) {}

  void GetNumVertices(int v);
  void edge_input(int src, int dest);
  std::vector <bool> shortestpath (int src, int dest);
  void printGraph();
};

#endif



