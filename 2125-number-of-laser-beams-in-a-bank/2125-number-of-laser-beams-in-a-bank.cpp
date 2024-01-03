class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevRowCount = 0;
        int total = 0;
        for(const std :: string& row : bank)
        {
            int currRowCount = calc(row);
            if(currRowCount == 0)
            {
                continue;
            }
            total += currRowCount  * prevRowCount;
            prevRowCount = currRowCount;
        }
        return total;
    }
    
    private:
      int calc(const std :: string& s)
      {
          int count = 0;
          for(char c : s)
          {
              count += c - '0';
          }
          return count;
      }
};

 