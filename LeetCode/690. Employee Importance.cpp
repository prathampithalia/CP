/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    void dfs(unordered_map<int, Employee*> mp, int id, int& sum) {
        sum += mp[id]->importance;
        for (auto i : mp[id]->subordinates) {
            dfs(mp, i, sum);
        }
    }
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> mp;
        for (auto i : employees) {
            mp[i->id] = i;
        }
        int sum = 0;
        dfs(mp, id, sum);
        return sum;
    }
};