#ifndef ADJACENCY_CONTAINER
#define ADJACENCY_CONTAINER

template <typename vertex>
class adjacency_container
{
	public:
		virtual bool is_adjacent(const vertex&, const vertex&) const = 0;
		virtual void add_edge(const vertex&, const vertex&) = 0;
		virtual void remove_edge(const vertex&, const vertex&) = 0;
		virtual size_t num_edges() const = 0;
		virtual void add_vertex(const vertex&) = 0;
		virtual void remove_vertex(const vertex&) = 0;
		virtual size_t num_vertices() const = 0;
		virtual bool contains(const vertex&) const = 0;
};

#endif