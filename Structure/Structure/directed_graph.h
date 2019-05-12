#ifndef DIRECTED_GRAPH_H
#define DIRECTED_GRAPH_H

#include "graph.h"

template <typename vertex, typename adjacency_container>
class directed_graph : public graph<vertex, adjacency_container>
{
	public:
		directed_graph();
		~directed_graph();

		bool is_adjacent(const vertex&, const vertex&) const override;
};

#include "directed_graph.cpp"

#endif