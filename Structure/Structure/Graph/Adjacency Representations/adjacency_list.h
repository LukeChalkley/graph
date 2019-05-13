#ifndef ADJACENCY_LIST
#define ADJACENCY_LIST

#include "adjacency_container.h"
#include "../Iterators/vertex_iterator.h"

#include <map>
#include <set>

template <typename vertex>
class adjacency_list : public adjacency_container<vertex>
{
	private:
		std::map<vertex, std::set<vertex>> _edges;

	public:
		adjacency_list();
		~adjacency_list();

		void add_vertex(const vertex&) override;
		bool is_adjacent(const vertex&, const vertex&) const override;
		void add_edge(const vertex&, const vertex&) override;
		void remove_vertex(const vertex&) override;
		void remove_edge(const vertex&, const vertex&) override;
		size_t num_edges() const override;
		size_t num_vertices() const override;
		bool contains(const vertex&) const override;

		vertex_iterator<vertex> get_vertex_iterator() override;
};

#include "adjacency_list.cpp"

#endif