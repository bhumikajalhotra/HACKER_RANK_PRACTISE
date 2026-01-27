#include <stdio.h>

int main() {

    int path, choice, bridge, num, chest;
    scanf("%d", &path);
    
    if(path == 1)
    {
        printf("Player chooses the Left path.\n");
        
        scanf("%d", &choice);
            
        if(choice == 1)
        {
            printf("Poor choice, Game Over!\n");
            return 0;
        }
        else if(choice == 2)
        {
            printf("Player found a bridge.\n");
            
            scanf("%d", &bridge);
            
            if(bridge==1)
            {
                printf("Player crosses the bridge safely.\n");
            }
            else if (bridge == 2)
            {
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
    }
    
    else if(path == 2)
    {
        printf("Player chooses the Middle path.\n");
        
        scanf("%d", &num);
        
        if(num == 582)
        {
            printf("Player solved the puzzle.\n");
        }
        else
        {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    
    else if(path == 3)
    {
        printf("Player chooses the Right path.\n");
        
        scanf("%d", &num);
        
        if(num == 30 )
        {
            printf("Player solved the puzzle.\n");
        }
        else
        {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    
    scanf("%d", &chest);
    
    if (chest == 1)
    {
        printf("All that glitters is not gold, Game Over!\n");
    }
    else if(chest == 2)
    {
        printf("All your efforts were for nothing, Game Over!\n");
    }
    else if(chest == 3)
    {
        printf("Congratulations!! You won the treasure.\n");
    }
    
    
    
    return 0;
}

// If-Else_Treasure Hunt