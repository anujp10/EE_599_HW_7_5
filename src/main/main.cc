#include <iostream>
#include "src/lib/solution.h"
#include <utility>

int main()
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

    std::vector <bool> result = g.shortestpath(0, 8);
    for (const auto &n : result)
        std::cout << (n ? "true" : "false") << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}