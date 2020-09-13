#include <stdio.h>

// char input[25] = {'1967 DavidBowie', 
// '1969 SpaceOddity',
// '1970 TheManWhoSoldTheWorld',
// '1971 HunkyDory',
// '1972 TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars',
// '1973 AladdinSane',
// '1973 PinUps',
// '1974 DiamondDogs',
// '1975 YoungAmericans',
// '1976 StationToStation',
// '1977 Low',
// '1977 Heroes',
// '1979 Lodger',
// '1980 ScaryMonstersAndSuperCreeps',
// '1983 LetsDance',
// '1984 Tonight',
// '1987 NeverLetMeDown',
// '1993 BlackTieWhiteNoise',
// '1995 1.Outside',
// '1997 Earthling',
// '1999 Hours',
// '2002 Heathen',
// '2003 Reality',
// '2013 TheNextDay',
// '2016 BlackStar'};

static char str_return(char *str[]){
    str[0] = "1967 DavidBowie";
    str[1] = "1970 TheManWhoSoldTheWorld";

    return str;
}

int main(){
    int albums, title_from, title_to;
    char *input[25];
    scanf("%d", &albums);

    for(int i = 0; i < albums; i++){
        scanf("%d%d", &title_from, &title_to);
        int count = 0;
        
        for(int i = title_from; i <= title_to; i++){            
        char arr[100];
        int inx = 0;
            switch(title_from){
                case 1967:
                    count++;
                    arr[inx] = str_return(input[0]);
                    break;

                case 1969:
                    count++;                
                    str_return(input[inx]);
                    break;

                case 1970:
                    count++;
                    //arr[inx] = '1970 TheManWhoSoldTheWorld';
                    break;

                case 1971:
                    count++;
                   //arr[inx] = '1971 HunkyDory';
                    break;

                case 1972:
                    count++;
                   // arr[inx] = '1972 TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars';
                    break;
                
                default:
                    break;
            }
            inx++;
        }
        for(int i = 0; i < count; i++){
            printf("%ld\n", arr[i]);
        }
       

    }

    // for(int i = 0; i < 25; i++){
    //     printf("%hhd", input[i]);
    // }
}