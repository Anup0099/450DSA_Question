#include <bits/stdc++.h> 
using namespace std; 
// 2022 is a year of the Winter Olympics! Curling has been one of the most popular winter sports as it requires skill, strategy, and sometimes a bit of luck.

// In a curling game, two teams compete by sliding heavy granite stones on a long ice sheet. We call the teams the red team and the yellow team, as their stones are usually distinguished by the red and the yellow handle color. A curling game consists of several ends (subgames); in every end, the teams, each owning 8 stones, take turns to slide them across the long ice sheet toward a circular target area called the house. A stone may hit existing stones to change its own moving direction and other stones' position (including knocking them out of play). Roughly speaking, the goal for a team is to make their stones as close to the center of the house as possible.

// Geometrically, a house and a stone can be modeled as a circle and a disk (the region bounded by a circle), respectively, and the scoring rules at the conclusion of each end are formally summarized as follows.

// Each stone can be viewed as a disk of radius Rs on a 2-dimensional plane.
// The house is a circle of radius Rh centered at (0,0).
// Only stones in the house are considered in the scoring. A stone is in the house if any portion of the stone lies on or within the circle representing the house. Tangency also counts.
// A team is awarded 1 point for each of their own stones in the house such that no opponent's stone is closer (in Euclidean distance) to the center than it. We assume in this problem that no two stones are equally close to the center (0,0).
// Two teams are playing and have just delivered all their stones. The red team has N stones remaining on the curling sheet, centered at (X1,Y1),(X2,Y2),…,(XN,YN), while the yellow team has M stones remaining, centered at (Z1,W1),(Z2,W2),…,(ZM,WM). Now you are asked to figure out the scores of both teams.

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.

// Each test case begins with a line containing the two space-separated integers Rs and Rh.

// The next line contains the integer N. Then N lines follow, the i-th line of which containing the two space-separated integers Xi and Yi.

// After that, similarly, the next line contains the integer M. In the next M lines, the i-th line contains the two space-separated integers Zi and Wi.

// Output
// For each test case, output one line containing Case #x: y z, where x is the test case number (starting from 1), y is the score of the red team, and z is the score of the yellow team.

int main() {
    // t starts from 1
    

} 