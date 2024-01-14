#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include<set>
#include<vector>
using namespace std;

class SparseGraph {
  public:
    SparseGraph() : SparseGraph(3) {
        // Your code here
    }

    SparseGraph(int n_in) : n(n_in), edges(n_in) {
        // Your code here
    }

    SparseGraph(const SparseGraph& G) : n(G.n), edges(G.edges) {
        // Your code here
    }

    void AddEdge(int a, int b) {
        // Your code here
        edges[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edges[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return (edges[a].find(b) != edges[a].end());
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph tmp(this->n);
        for(int i = 0 ; i < edges.size(); i++) {
            for(const auto &directTo : edges[i]) {
                tmp.AddEdge(directTo,i);
            }
        }

        return tmp;
    }

  protected:
    // Your code here
    int n;
    vector< set<int>> edges;
};
#endif // __SPARSE_GRAPH_H__

