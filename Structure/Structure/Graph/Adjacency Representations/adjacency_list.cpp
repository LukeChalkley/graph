#ifndef ADJACENCY_LIST_IMP
#define ADJACENCY_LIST_IMP

#include "adjacency_list.h"

template <typename vertex>
adjacency_list<vertex>::adjacency_list()
{
	_edges = std::map<vertex, std::set<vertex>>{};
}

template <typename vertex>
adjacency_list<vertex>::~adjacency_list()
{
}

template <typename vertex>
bool adjacency_list<vertex>::is_adjacent(const vertex& u, const vertex& v) const
{
	if (!contains(u) || !contains(v))
		return false;

	return _edges.at(u).find(v) != _edges.at(u).cend();
}

template <typename vertex>
void adjacency_list<vertex>::add_edge(const vertex& u, const vertex& v)
{
	if (!contains(u))
		add_vertex(u);

	if (!contains(v))
		add_vertex(v);

	_edges.at(u).insert(v);
}

template <typename vertex>
void adjacency_list<vertex>::add_vertex(const vertex& vert)
{
	_edges.insert(std::pair<vertex, std::set<vertex>>(vert, std::set<vertex>{}));
}


template <typename vertex>
void adjacency_list<vertex>::remove_edge(const vertex& u, const vertex& v)
{

}

template <typename vertex>
void adjacency_list<vertex>::remove_vertex(const vertex& vert)
{
	_edges.erase(vert);
}

template <typename vertex>
size_t adjacency_list<vertex>::num_edges() const
{
	size_t edge_count = 0;

	for (auto vert : _edges)
		edge_count += vert.second.size();

	return edge_count;
}

template <typename vertex>
size_t adjacency_list<vertex>::num_vertices() const
{
	return _edges.size();
}

template<typename vertex>
bool adjacency_list<vertex>::contains(const vertex &vert) const
{
	return _edges.find(vert) != _edges.cend();
}

template<typename vertex>
vertex_iterator<vertex> adjacency_list<vertex>::get_vertex_iterator()
{
	return vertex_iterator<vertex>();
}

#endif