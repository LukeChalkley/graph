#ifndef VERTEX_ITERATOR
#define VERTEX_ITERATOR

#include "graph_iterator.h"


template <typename vertex>
class vertex_iterator : public graph_iterator<vertex>
{

};

#include "vertex_iterator.cpp"

#endif
