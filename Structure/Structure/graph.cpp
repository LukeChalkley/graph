#ifndef GRAPH_IMP
#define GRAPH_IMP

#include "graph.h"

template <typename vertex, typename adjacency_container>
size_t graph<vertex, adjacency_container>::num_edges() const
{
	return _adjacency_container.num_edges();
}

template<typename vertex, typename adjacency_container>
void graph<vertex, adjacency_container>::add_vertex(const vertex &vert)
{
	_adjacency_container.add_vertex(vert);
}

template<typename vertex, typename adjacency_container>
void graph<vertex, adjacency_container>::add_edge(const vertex &u, const vertex &v)
{
	_adjacency_container.add_edge(u, v);
}

template<typename vertex, typename adjacency_container>
bool graph<vertex, adjacency_container>::contains(const vertex &vert)
{
	return _adjacency_container.contains(vert);
}

template <typename vertex, typename adjacency_container>
size_t graph<vertex, adjacency_container>::num_vertices() const
{
	return _adjacency_container.num_vertices();
}

template<typename vertex, typename adjacency_container>
void graph<vertex, adjacency_container>::remove_vertex(const vertex &vert)
{
	_adjacency_container.remove_vertex(vert);
}


#endif