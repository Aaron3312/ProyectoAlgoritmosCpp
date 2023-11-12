#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct node {
    int vertex;
    struct node* next;
};

// Graph class (containing attributes, methods, and functions)
class Graph {
private:
    int numVertex;
    list<int>* adjLists;
    bool* visited;

public:
    // Constructor
    Graph(int V) {
        numVertex = V;
        adjLists = new list<int>[V];
        visited = new bool[V];
    };

    ~Graph() {
        delete[] adjLists;
        delete[] visited;
    };

    void addEdge(int s, int d) {
        this->adjLists[s].push_back(d);
        this->adjLists[d].push_back(s);
    };

    void loadGraph() {
        for (int i = 0; i < this->numVertex; i++) {
            cout << "Vertex " << i << ":";
            for (auto x : this->adjLists[i]) {
                cout << "-> " << x;
            }
            cout << endl;
        }
    };

    void resetVisited() {
        for (int i = 0; i < numVertex; i++) {
            visited[i] = false;
        }
    };

    bool isTree() {
        resetVisited();
        return !hasCycle(0, -1) && isConnected();
    }

    bool hasCycle(int vertex, int parent) {
        visited[vertex] = true;
        for (auto i : adjLists[vertex]) {
            if (!visited[i]) {
                if (hasCycle(i, vertex)) {
                    return true;
                }
            } else if (i != parent) {
                return true;
            }
        }
        return false;
    }

    bool isConnected() {
        for (int i = 0; i < numVertex; i++) {
            if (!visited[i]) {
                return false;
            }
        }
        return true;
    }

    void topologicalSort() {
        resetVisited();
        stack<int> s;
        for (int i = 0; i < numVertex; i++) {
            if (!visited[i]) {
                topologicalSortUtil(i, s);
            }
        }
        cout << "\nTopological Sort:\n";
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }

    void topologicalSortUtil(int vertex, stack<int>& s) {
        visited[vertex] = true;
        for (auto i : adjLists[vertex]) {
            if (!visited[i]) {
                topologicalSortUtil(i, s);
            }
        }
        s.push(vertex);
    }

    bool bipartiteGraph() {
        vector<int> color(numVertex, -1);

        for (int i = 0; i < numVertex; ++i) {
            if (color[i] == -1) {
                if (!bipartiteGraphUtil(i, color)) {
                    return false;
                }
            }
        }
        return true;
    }

    bool bipartiteGraphUtil(int vertex, vector<int>& color) {
        color[vertex] = 1;

        queue<int> q;
        q.push(vertex);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto v : adjLists[u]) {
                if (color[v] == -1) {
                    color[v] = 1 - color[u];
                    q.push(v);
                } else if (color[v] == color[u]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    int vertex, edge, a, b;
    cout << "Enter number of vertices:\n";
    cin >> vertex;
    cout << "Enter number of edges:\n";
    cin >> edge;

    Graph G(vertex);

    for (int i = 0; i < edge; i++) {
        cout << "For edge #" << i + 1 << endl;
        cout << "Enter value a: ";
        cin >> a;
        cout << "Enter value b: ";
        cin >> b;
        G.addEdge(a, b);
    }

    cout << "\nGraph:\n";
    G.loadGraph();

    cout << "\nIs Tree: " << (G.isTree() ? "Yes" : "No") << "\n";

    G.topologicalSort();

    cout << "\n\nIs Bipartite Graph: " << (G.bipartiteGraph() ? "Yes" : "No") << "\n\n";

    return 0;
}
