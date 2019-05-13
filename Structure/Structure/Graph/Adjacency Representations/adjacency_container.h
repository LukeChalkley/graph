#ifndef ADJACENCY_CONTAINER
#define ADJACENCY_CONTAINER

#include <vector>
#include "../Iterators/graph_iterator.h"
#include "../Iterators/vertex_iterator.h"

template <typename vertex>
class adjacency_container
{
	public:
		friend class graph_iterator<vertex>;
		friend class vertex_iterator<vertex>;

		virtual bool is_adjacent(const vertex&, const vertex&) const = 0;
		virtual void add_edge(const vertex&, const vertex&) = 0;
		virtual void remove_edge(const vertex&, const vertex&) = 0;
		virtual size_t num_edges() const = 0;
		virtual void add_vertex(const vertex&) = 0;
		virtual void remove_vertex(const vertex&) = 0;
		virtual size_t num_vertices() const = 0;
		virtual bool contains(const vertex&) const = 0;

		virtual vertex_iterator<vertex> get_vertex_iterator() = 0;
};

#endif