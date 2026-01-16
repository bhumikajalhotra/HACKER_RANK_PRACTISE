#include <stdio.h>

int main() {

    int budget, numguests, foodcostperguest, decorationcost, musiccost, extraexpense;
    
    scanf("%d", &budget);
    scanf("%d", &numguests);
    scanf("%d", &foodcostperguest);
    scanf("%d", &decorationcost);
    scanf("%d", &musiccost);
    scanf("%d", &extraexpense);
    
    int totalfoodcost = foodcostperguest * numguests;
    int totalcost = totalfoodcost + decorationcost + musiccost + extraexpense;
    
    if ( numguests <=5 || numguests > 50 )
    {
        printf("Celebration Denied");
    }
    else if ( totalcost > budget )
    {
        printf("Celebration Denied");
    }
    else if ( numguests > 25 && musiccost == 0 )
    {
        printf("Celebration Denied");
    }
    else if ( decorationcost >= 0.3 * budget && totalfoodcost >= 0.5 * budget )
    {
        printf("Celebration Denied");
    }
    else 
    {
        printf("Celebration Approved");
    }
    return 0;
}

// If-Else_New Year Celebration Budget Planner