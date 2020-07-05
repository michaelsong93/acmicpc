#include <stdio.h>

int main(){
    int TotalCountries, Country;
    //Rank, Gold, Silver, Bronze;
    scanf("%d%d", &TotalCountries, &Country);

    int Board[TotalCountries][4];
    // Rank = Board[TotalCountries][0];
    // Gold = Board[TotalCountries][1];
    // Silver = Board[TotalCountries][2];
    // Bronze = Board[TotalCountries][3];

    for(int i = 0; i < TotalCountries; i++){
        scanf("%d%d%d%d", &Board[i][0], &Board[i][1],
         &Board[i][2], &Board[i][3]);
    }

    for(int i = 0; i < TotalCountries-1; i++){
        if(Board[i][1] > Board[i+1][1]){
            continue;
        }

        else if(Board[i][1] < Board[i+1][1]){
            int temp = Board[i][0];
            Board[i][0] = Board[i+1][0];
            Board[i+1][0] = temp;
        }

        else if(Board[i][1] == Board[i+1][1]){
            if(Board[i][2] > Board[i+1][2]){
                continue;
            }

            else if(Board[i][2] < Board[i+1][2]){
                int temp = Board[i][0];
                Board[i][0] = Board[i+1][0];
                Board[i+1][0] = temp;
            }

            else if(Board[i][2] == Board[i+1][2]){
                if(Board[i][3] > Board[i+1][3]){
                    continue;
                }

                else if(Board[i][3] < Board[i+1][3]){
                    int temp = Board[i][0];
                    Board[i][0] = Board[i+1][0];
                    Board[i+1][0] = temp;
                }
                
                else if(Board[i][3] == Board[i][3]){
                    Board[i][0] = Board[i+1][0];
                }
            }
        }
    }
    int index = 1;
    int arr[TotalCountries];
    for(int i = 0; i < TotalCountries; i++){
        printf("%d", Board[i][0]);
    }

    // for(int i = 0; i < TotalCountries; i++){
    //     for(int j = 0; j < 4; j++){
    //         printf(" a[%d][%d]= %d\n",i,j,Board[i][j]);
    //     }
    // }
    a
}