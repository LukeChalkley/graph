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

		void testAddVertex()
		{
			TS_TRACE("Testing addition of vertices to graph.");
			
			_graph.add_vertex(1);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 1);
			TS_ASSERT(_graph.contains(1));

			_graph.add_vertex(4);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 2);
			TS_ASSERT(_graph.contains(4));

			//	Add vertex twice, should already be in list - no count change.
			_graph.add_vertex(4);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 2);
			TS_ASSERT(_graph.contains(4));

			//	Check for vertex that does not exist.
			TS_ASSERT(!_graph.contains(7));
		}

		void testRemoveVertex()
		{
			TS_TRACE("Testing removal of vertices from graph.");
			
			_graph.add_vertex(3);
			_graph.add_vertex(5);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 2);

			_graph.remove_vertex(3);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 1);

			//	Try removing the same vertex - should do nothing!
			_graph.remove_vertex(3);
			TS_ASSERT_EQUALS(_graph.num_vertices(), 1);
		}

		void testAddEdges()
		{
			TS_TRACE("Testing adding edges to graph.");
			
			_graph.add_vertex(3);
			_graph.add_vertex(5);
			_graph.add_edge(3, 5);
			TS_ASSERT_EQUALS(_graph.num_edges(), 1);

			TS_ASSERT(_graph.is_adjacent(3, 5));

			//	Test graph is directed.
			TS_ASSERT(!_graph.is_adjacent(5, 3));

			//	Test non-existing vertex returns false.
			TS_ASSERT(!_graph.is_adjacent(7, 3));
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
};