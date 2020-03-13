#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MultPathShould, MultPathReturn)
{
  Graph g(9);

  g.edge_input(0, 4);
  g.edge_input(0, 5);
  g.edge_input(0, 1);
  g.edge_input(1, 3);
  g.edge_input(1, 2);
  g.edge_input(2, 3);
  g.edge_input(2, 8);
  g.edge_input(8, 7);
  g.edge_input(8, 6);
  g.edge_input(7, 6);
  g.edge_input(6, 5);

  std::vector<bool> actual = g.shortestpath(0, 8);
  std::vector <bool> expected = {1, 1, 1, 0, 0, 1, 1, 0, 1};

  EXPECT_EQ(expected, actual);
}

TEST(MultPathShould_1, MultPathReturn_1)
{
  Graph g(9);

  g.edge_input(0, 4);
  g.edge_input(0, 5);
  g.edge_input(0, 1);
  g.edge_input(1, 3);
  g.edge_input(1, 2);
  g.edge_input(2, 3);
  g.edge_input(2, 8);
  g.edge_input(8, 7);
  g.edge_input(8, 6);
  g.edge_input(7, 6);
  g.edge_input(6, 5);

  std::vector<bool> actual = g.shortestpath(0, 18);
  std::vector <bool> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0};

  EXPECT_EQ(expected, actual);
}

TEST(MultPathShould_2, MultPathReturn_2)
{
  Graph g(9);

  g.edge_input(0, 4);
  g.edge_input(0, 5);
  g.edge_input(0, 1);
  g.edge_input(1, 3);
  g.edge_input(1, 2);
  g.edge_input(2, 3);
  g.edge_input(2, 8);
  g.edge_input(8, 7);
  g.edge_input(8, 6);
  g.edge_input(7, 6);
  g.edge_input(6, 5);

  std::vector<bool> actual = g.shortestpath(0, 0);
  std::vector <bool> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0};

  EXPECT_EQ(expected, actual);
}