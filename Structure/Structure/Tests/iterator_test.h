#pragma once

#include <cxxtest/TestSuite.h>

#include "../Graph/Directed/directed_graph.h"
#include "../Graph/Adjacency Representations/adjacency_list.h"

class adjacency_list_test : public CxxTest::TestSuite
{
private:
	directed_graph<int, adjacency_list<int>> _graph;

public:
	void setUp()
	{
		_graph = directed_graph<int, adjacency_list<int>>{};
	}

	void tearDown()
	{

	}

	/*
		Tests that an empty directed graph has been created in a valid state.
	*/
	void testInitialisation()
	{
		TS_TRACE("Testing empty graph initialisation.");
		TS_ASSERT_EQUALS(_graph.num_vertices(), 0);
		TS_ASSERT_EQUALS(_graph.num_edges(), 0);
	}

	void testGraphStructure()
	{
		for (int vert = 0; vert <= 9; ++vert)
		{
			_graph.add_vertex(vert);
			TS_ASSERT(_graph.contains(vert));
		}

		_graph.add_edge(0, 1);
		_graph.add_edge(0, 3);
		_graph.add_edge(1, 4);
		_graph.add_edge(2, 5);
		_graph.add_edge(3, 2);
		_graph.add_edge(5, 7);
		_graph.add_edge(5, 8);
		_graph.add_edge(6, 4);
		_graph.add_edge(6, 7);
		_graph.add_edge(9, 7);
		_graph.add_edge(9, 8);

		TS_ASSERT_EQUALS(_graph.num_vertices(), 10);
		TS_ASSERT_EQUALS(_graph.num_edges(), 11);
	}

	/*
		Test vertex iterator for a directed graph using adjacency list graph representation.
	*/
	void testVertexIteratorAdjList()
	{
		for (int vert = 0; vert <= 9; ++vert)
		{
			_graph.add_vertex(vert);
			TS_ASSERT(_graph.contains(vert));
		}

		_graph.add_edge(0, 1);
		_graph.add_edge(0, 3);
		_graph.add_edge(1, 4);
		_graph.add_edge(2, 5);
		_graph.add_edge(3, 2);
		_graph.add_edge(5, 7);
		_graph.add_edge(5, 8);
		_graph.add_edge(6, 4);
		_graph.add_edge(6, 7);
		_graph.add_edge(9, 7);
		_graph.add_edge(9, 8);
	}
};