/*
  Programmer: Johnathan Huskisson
  file-name:  Dijkstra.cpp
  Description: An implementation of Dijkstra's Algorithm for shortest path
  Last-edit: 6-1-17  MM-DD-YY
 */
  
#include <vector>
#include <queue>
#include <set>

#define vector std::vector
#define INFINITY 2147483647 //I'm sure there is a better way than manually entering the ceiling. 
                 

Dijkstra(vector<vector<int>> graph, int source, int target){
  
  vector<int> min_distance( graph.size(), INFINITY);
  
  min_distance[source] = 0;
  
  std::set<std::pair<int,int>> active_verticies;
  active_verticies.insert({0,source});
  
  while(!active_verticies.empty()){
  
  	int where = active_verticies.begin()->second;
    
  	if(where == target)
  		return min_distance[where];
  	
  	active_verticies.erase(active_verticies.begin());
    
  	//comparisons 
    
	  for(int i = 0; i < dist.size(); i++){
  		if(min_distance[i] > min_distance[where] + graph[where][i]){
      
  		active_verticies.erase({min_distance[i],i});
      min_distance[i] = min_distance[where] + graph[where][i];
      active_verticies.insert({min_distance[i],i});
		  
      }	  
	}
  
  }
  return INFINITY;
  }
