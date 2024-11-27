#include <iostream>
#include <vector>
#include <climits>
#include <map>

using namespace std;

int salesman(int pos, int visited, const vector<vector<int>>& dist, vector<vector<int>>& memo) 
{
    if (visited == (1 << dist.size()) - 1) 
    {
        return dist[pos][0]; 
    }

    if (memo[pos][visited] != -1) 
    {
        return memo[pos][visited];
    }

    int res = INT_MAX; 
    
    for (int next = 0; next < dist.size(); ++next) 
    {
        if ((visited & (1 << next)) == 0) 
        {  
            int new_res = dist[pos][next];
            if (new_res < 1e6) 
            {
                new_res += salesman(next, visited | (1 << next), dist, memo);
                res = min(res, new_res);
            }
        }
    }

    return memo[pos][visited] = res;
}

int salesman() 
{
    vector<string> points = {"A", "B", "C", "D", "E"};
    int n = points.size();

    map<pair<string, string>, int> distances = 
    {
        {{"A", "B"}, 2}, {{"A", "C"}, 2},
        {{"B", "A"}, 2}, {{"B", "C"}, 3}, {{"B", "E"}, 1}, {{"B", "D"}, 3}, 
        {{"C", "A"}, 2}, {{"C", "B"}, 3}, {{"C", "E"}, 3}, {{"C", "D"}, 1},
        {{"D", "B"}, 3}, {{"D", "C"}, 1}, {{"D", "E"}, 3},
        {{"E", "B"}, 1}, {{"E", "C"}, 3}, {{"E", "D"}, 3}
    };
    
    vector<vector<int>> dist(n, vector<int>(n, 1e6));  
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j) 
        {
            if (i != j && distances.count({points[i], points[j]})) 
            {
                dist[i][j] = distances[{points[i], points[j]}];
            } 
            else if (i == j) 
            {
                dist[i][j] = 0;
            }
        }
    }
    
    vector<vector<int>> memo(n, vector<int>((1 << n), -1));
    
    int result = salesman(0, 1, dist, memo);
    
    cout << "Salesman: " << result << endl;
    return 0;
}
