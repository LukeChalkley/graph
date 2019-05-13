#ifndef GRAPH_H
#define GRAPH_H

#include "Adjacency Representations/adjacency_container.h"


template <typename vertex, typename adjacency_container>
class graph
{
	protected:
		adjacency_container _adjacency_container;

	public:
		graph() : _adjacency_container() {};

		virtual void add_vertex(const vertex&);
		virtual void remove_vertex(const vertex&);
		virtual void add_edge(const vertex&, const vertex&);
		virtual bool contains(const vertex&);
		
		//	Depends if directed or undirected.
		virtual bool is_adjacent(const vertex&, const vertex&) const = 0;
		
		virtual size_t num_vertices() const;
		virtual size_t num_edges() const;
};

#include "graph.cpp"

#endif