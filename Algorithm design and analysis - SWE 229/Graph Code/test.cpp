#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int node;
    list<int> *l;

public:
    Graph(int n)
    {
        this->node = n;
        l = new list<int>[node];
    }

    void addEdge(int x, int y)
    {
        l[x].push_back(y);
    }

    void printList()
    {
        for (int i = 1; i <= node; i++)
        {
            cout << "Node :" << i << "->";
            for (int it : l[i])
            {
                cout << it << " ";
            }
            cout <<endl;
        }
    }

};

int main()
{

    int nod, edge;
    cin >> nod >> edge;

    Graph g(nod);
    for (int i = 0; i < edge; i++)
    {
        int a, b;
        cin >> a >> b;

        g.addEdge(a, b);
    }

    g.printList();
}