class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0,y = 0;
        for(char s : moves){
            if (s == 'U')
                y += 1;
            else
                if(s == 'D')
                    y -= 1;
                else 
                    if (s == 'L')
                        x -= 1;
                    else
                        x += 1;
            
        }
        return (x == 0 && y == 0);
            
    }
};