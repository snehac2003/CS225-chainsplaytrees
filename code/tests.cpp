//#include "splaytree.h"
#include <sstream>


/* This test case tests if the splay tree correctly splays a node
to the root after an insert operation */
TEST_CASE("Insertion Test 1", "[weight=5]")
{
    SplayTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    int lastInsert = 40;
    tree.insert(lastInsert);
    int rootElement = tree.getRoot();
    REQUIRE(lastInsert == rootElement);

    
}

/* This test case tests if the splay tree correctly splays a node
to the root after a delete operation */
TEST_CASE("Deletion Test 1", "[weight=5]")
{
	SplayTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    int elementToDelete = 30;
    tree.remove(elementToDelete);
    int expectedRoot = 20;
    int rootElement = tree.getRootElement();
    REQUIRE(expectedRoot == rootElement);
}

/* This test case tests if the splay tree correctly splays a node
to the root after a search operation */
TEST_CASE("Search Test 1", "[weight=5]")
{
	SplayTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    std::string elementToFind = 30;
    bool expected = tree.search(elementToFind);
    REQUIRE(expected == true);
    std::string rootElement = tree.getRoot();
    REQUIRE(elementToFind == rootElement);
}