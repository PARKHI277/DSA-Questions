class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end(),[](const int a ,const int b) {return a>b;});
        int index = 0;
        int answer = 0;
        for(int time : processorTime)
        {
            int currMax = 0;
            int taskCount = 0;
            while(index < tasks.size() && taskCount < 4)
            {
                currMax = max(currMax, time + tasks[index]);
                index++;
                taskCount++;
            }
            
            answer = max(answer , currMax);
        }
        return answer;
    }
};

