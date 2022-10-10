#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<tuple<int,int,float>> adj[],int u, int v,int wt,float e_prob)
{
	adj[u].push_back(make_tuple(v,wt,e_prob));
	adj[v].push_back(make_tuple(u,wt,e_prob));
}
void printgraph(vector<tuple<int,int,float>> adj[], int S)
{
int fs, w; 
	float e_w;
	for(int i = 0;i<S;i++)
	{
		for(auto it = adj[i].begin();it!=adj[i].end();it++)
		{
			fs = get<0>(*it);
			w = get<1>(*it);
			e_w = get<2>(*it);
			cout<<i<<"--"<<fs<<", weight = "<<w<<" Edge_Prob= "<<e_w<<endl;
		}
		cout<<endl;
	}
}
void bfs(vector<tuple<int,int,float>> adj[], int S){
	int b_threasold = 10;
	int curr_b_power = 100;
	vector<bool> visit_check;
	visit_check.resize(S,false);
	queue<tuple<int,int,float>> q;
	auto it = adj[0].begin();
	q.push(*it);
	visit_check[0]=true;

	while((!q.empty())&&(curr_b_power > b_threasold))
	{
		tuple<int,int,float> s;
		s = q.front();
		int temp =get<0>(s);
		cout<<"Visited hop : "<< get<0>(s)<<endl;
		q.pop();

		for(auto adjacent : adj[temp])
		{
			int temp2 = get<0>(adjacent);
			int temp3 = get<1>(adjacent);
			if(!visit_check[temp2])
			{
				visit_check[temp2]=true;
				q.push(adjacent);
			}
			cout<<endl;
			cout<<"Battery strength reduced by "<<temp3<<" unit. "<<"  |  "<<"current battery power is: "<<curr_b_power<<" unit"<<endl;
			curr_b_power -= temp3;


		}
	}
	cout<<endl;
	cout<<"--------------------"<<endl;
	cout<<"simulation ends"<<endl;
}
int main()
{
	int V = 6;
	vector<tuple<int,int,float>> adj[V];
	addEdge(adj,0,1,12,0.6);
	addEdge(adj,0,3,5,0.6);
	addEdge(adj,0,2,7,0.9);
	addEdge(adj,2,4,9,0.8);
	addEdge(adj,2,3,6,0.7);
	addEdge(adj,4,5,12,0.6);
	addEdge(adj,5,3,8,0.4);
	addEdge(adj,1,2,19,0.5);
	cout<<"Initial Cost Graph represented in adjacency list"<<endl;
	cout<<"---------------------"<<endl;
	cout<<endl;
	printgraph(adj,V);
	cout<<"Simulation start"<<endl;
	cout<<"---------------------"<<endl;
	cout<<endl;
	bfs(adj,V);
}
