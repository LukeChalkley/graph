#include "directed_graph.h"

#ifndef DIRECTED_GRAPH_IMP
#define DIRECTED_GRAPH_IMP

template <typename vertex, typename adjacency_container>
directed_graph<vertex, adjacency_container>::directed_graph()
{

}

template <typename vertex, typename adjacency_container>
directed_graph<vertex, adjacency_container>::~directed_graph()
{
}

template<typename vertex, typename adjacency_container>
bool directed_graph<vertex, adjacency_container>::is_adjacent(const vertex &u, const vertex &v) const
{
	return this->_adjacency_container.is_adjacent(u, v);
}


#endif