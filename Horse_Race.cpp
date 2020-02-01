// Ethan Long's Horse Race Project
// CSCI 24000
// Andy Harris

#include<iostream>
#include<cstdlib>


// Makes each horse flip a coin

void toss(int horse[],int horse_c){
    for(int i=0; i<horse_c;i++){

// If horse coin is 0 then don't move, if horse coin is 1 then move one space
    bool advance= rand()%2==1;
        if(advance)horse[i]++;
            }
}

// Returns truth statement if horse is >= 15
    bool TheWinner(int horse[], int horse_c){
        for(int i=0; i<horse_c;i++){
            if(horse[i]>=15){
                std::cout<<"Yay! Horse "<<i<<" wins!"<<std::endl;      
            
    return true;
    }
}
return false;
    }

// Prints horse track
int print(int horse[], int horse_c){
    for(int i=0;i<horse_c;i++){
    for(int t=1; t<horse[i];t++) std::cout<<".";
            std::cout<<i;
    for(int t=horse[i]+1;t<=15;t++) std::cout<<".";
            std::cout<<std::endl;      
}
            std::cout<<std::endl;
            std::cout<<std::endl;
}
int main(){
unsigned int seed;
            std::cout<<"Please enter a random seed: ";std::cin>>seed;
        srand(seed);
const int Pony=5;

// Set all numbers starting to 1, if toss turns to 1, add 1 until = to 15
int horse[Pony]={1};

// Loop until winner
     while(!TheWinner(horse,Pony)){
        toss(horse,Pony);
            print(horse,Pony);
}    
}