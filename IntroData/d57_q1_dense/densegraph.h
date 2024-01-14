#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here

#include <iostream>
#include <vector>
using namespace std;
class DenseGraph {

  public:
    DenseGraph() : DenseGraph(3) {
        // Your code here

    }

    DenseGraph(int n_in) : n(n_in), edges(n_in) {
        // Your code here
        for(int i = 0 ; i < n; i++) {
            edges[i].resize(n);
        }


        /*for(vector<bool> &vertices : edges) {
            cout << "\n";
            for(bool vertex : vertices) {
                if(vertex) cout  << "1 ";
                else cout  << "0 ";

            }
        }*/

    }

    DenseGraph(const DenseGraph& G) : DenseGraph(G.n) {
        // Your code here
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                edges[i][j] = G.edges[i][j];
            }
        }
    }

    void AddEdge(int a, int b) {
        // Your code here
        edges[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edges[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edges[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph tmp(*this);
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                tmp.edges[j][i] = edges[i][j];
            }
        }
        return tmp;
    }

  protected:
    int n;
    vector<vector<bool>> edges;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
