#include<bits/stdc++.h>
using namespace std;

#define V 6

int selectMinVertex(vector<int>& value, vector<bool>& setMST)
{
    int minimum = INT_MAX;
    int vertex;
    for(int i=0;i<V;i++)
    {
        if(setMST[i]==false && value[i]<minimum)
        {
            vertex = i;
            minimum = value[i];
        }
    }

    return vertex;
}

void findMST(int graph[V][V])
{
    int parent[V]; //stores MST
    vector<int> value(V,INT_MAX); //used for edge relaxation
    vector<bool> setMST(V,false); //true->vertex is included in graph

    //assuming start point as node-0ll

    parent[0] = -1; // start node has no parent
    value[0] = 0; //start node has value 0 to get picked 1st

    //for mst with V-1 Edges
    for(int i=0;i<V-1;i++)
    {
        //select best vertex by applying
        int U = selectMinVertex(value, setMST);
        setMST[U]=true; //include new vertex in mst

        //relax adjacent vertices (not yet included in mst)
        for(int j=0;j<V;j++)
        {
            /* 3 Constraints to relax 
            1. Edge is present from U to j.
            2. Vertex j is not included in mst
            3. Edge weight is smaller than current edge weight.
            */

           if(graph[U][j]!=0 && setMST[j]==false && graph[U][j]<value[j])
           {
               value[j] = graph[U][j];
               parent[j] = U;
           }
        }
    }

    //print MST
    for(int i=1;i<V;i++)
        cout << "U->V: "<<parent[i]<<"->"<<i<<" wt = "<<graph[parent[i]][i]<<"\n";

}

int main()
{
    int graph[V][V] = { {0, 4, 6, 0, 0, 0},
						{4, 0, 6, 3, 4, 0},
						{6, 6, 0, 1, 8, 0},
						{0, 3, 1, 0, 2, 3},
						{0, 4, 8, 2, 0, 7},
						{0, 0, 0, 3, 7, 0} };

	findMST(graph);	
}