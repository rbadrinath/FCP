#include <stdio.h>

int happy(int queens[],int size){
    if (size<=1)
        return 1; // small board always happy! :-)
        
    // check if each tgt queen is happy with its followers
    for(int tgt=0;tgt<size-1;tgt++)
        for(int flwr=tgt+1;flwr<size;flwr++) {
            int rowdiff=queens[tgt]-queens[flwr];
            int coldiff=flwr-tgt;
            if (rowdiff==0 || rowdiff==coldiff || rowdiff==-coldiff)
                return 0; // unhappy :-(
        }
    return 1; // happy! :-)
}

// Given a board, get a new board. This is just like incrementing a 
// number.. so start from the last position ie queens[size-1]
void increment(int queens[],int size){
    int max=size-1;
    while(max>=0){
        queens[max]=(queens[max]+1)%size;
        if (queens[max]!=0)
            break;
        max=max-1;
    }
    return ;
}

// simple way to show a board
void show(int queens[],int size){
    for(int i=0;i<size;i++)
        printf("%d ",queens[i]);
    printf("\n");
}

// another way to show a board
void showboard(int queens[], int size){
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++)
            if (queens[j]==i)
                printf("O ");
            else
                printf("  ");
        printf("\n");
    }
            
}

// here main only finds one solution. Can you modify it for multiple solutions?

int main() {
    int queens[8] = {0,0,0,0, 0,0,0,0};
    int size=8;
    int j=0;
    while(!happy(queens,size))
        increment(queens,size);
    show(queens,size);
}
//--- Below is a recursive implementation of happy checking
// Check if the rest of the board is happy starting at position beginning of queens[]

int happyrec(int queens[],int size){
    if (size<=1)
        return 1; // small board always happy! :-)
        
    // check if queen @ 0 is unhappy
    int i=queens[0];
    for(int j=1;j<size;j++) {
        int rowdiff=i-queens[j];
        int coldiff=j;
        if (rowdiff==0 || rowdiff==coldiff || rowdiff==-coldiff)
            return 0; // unhappy :-(
    }
    return happyrec(queens+1,size-1); // happy if the rest is happy :-)
}
