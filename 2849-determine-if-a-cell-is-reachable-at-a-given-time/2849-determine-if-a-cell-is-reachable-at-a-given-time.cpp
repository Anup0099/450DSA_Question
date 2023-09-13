class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
//given four integers sx sy fx fy and positive integer t in an 2d grid you start the cell (sx,sy) for each second you must move any of its adjacent cells ab cell ka 8cell hai to to bahhut saare raaste honge but hume sabse kam time lage usrate me jana aur check karna hai ki sabse kam time aur given time se equal or chota hai ki nahi start point and ending point diya hai  
        
       int need = max(abs(sx - fx), abs(sy - fy));
        return need > 0 ? t >= need : t != 1;
        
    
    }
};