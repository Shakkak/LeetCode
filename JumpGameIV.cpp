class Solution {
public:
    int minJumps(vector<int>& arr) {
        int SizeArr = arr.size();
        if (SizeArr == 1) return 0;

        unordered_map <int,vector<int>> MyArr;
        for (int i = 0; i <SizeArr; i++){
            MyArr[arr[i]].push_back(i);
        }

        queue <int> BFS;
        BFS.push(0);
        vector <bool> visited(arr.size());
        visited[0] = true;

        int steps = 0;

        while (!BFS.empty()){
            int SizeBFS = BFS.size();
            for (int i = 0; i< SizeBFS; i++){
                int curr = BFS.front();
                BFS.pop();
                if (curr == SizeArr -1) return steps;
                if ((curr + 1 < SizeArr) && (!visited[curr + 1])){
                    BFS.push(curr + 1);
                    visited[curr + 1] = true;
                }
                if ((curr - 1>= 0) && (!visited[curr - 1])){
                    BFS.push(curr - 1);
                    visited[curr - 1] = true;                    
                }
                for (int jumpto : MyArr[arr[curr]]){
                    if ((jumpto != curr) && (!visited[jumpto])){
                        BFS.push(jumpto);
                        visited[jumpto] = true;
                    }
                }
                MyArr[arr[curr]].clear();
            }
            steps += 1;
        }

        return -1;

        
    }
};