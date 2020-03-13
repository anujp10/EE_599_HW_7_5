#include "solution.h"
#include <queue>
#include <iostream>

void Graph::edge_input(int src, int dest)
{
  if (src >= vertices || dest >= vertices)
    return;
    
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      graph_[src][dest] = 1;
      graph_[dest][src] = 1;
      graph_[src][src] = 0;
      graph_[dest][dest] = 0;
    }
  }
}

void Graph::printGraph()
{
  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      if (graph_[i][j] == INT16_MAX)
        std::cout << "- ";
      else
        std::cout << graph_[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

std::vector<bool> Graph::shortestpath(int src, int dest)
{
  std::vector<bool> result(vertices, 0);
  std::vector<std::vector<int>> distance(graph_);

  if (src >= vertices || dest >= vertices || src < 0 || dest < 0)
    return result;

  for (int i = 0; i < vertices; i++)
  {
    for (int j = 0; j < vertices; j++)
    {
      for (int k = 0; k < vertices; k++)
      {
        if ((distance[j][i] + distance[i][k]) < distance[j][k])
          distance[j][k] = distance[j][i] + distance[i][k];
      }
    }
  }

  for (int k = 0; k < vertices; k++)
  {
    for (int i = 0; i < vertices; i++)
    {
      for (int j = 0; j < vertices; j++)
      {
        if ((distance[i][k] + distance[k][j]) < distance[i][j])
          distance[i][j] = distance[i][k] + distance[k][j];
      }
    }
  }

  for (int i = 0; i < vertices; i++)
  {
    if (distance[src][dest] == distance[src][i] + distance[i][dest])
      result[i] = true;
    else
      result[i] = false;
  }

  return result;
}