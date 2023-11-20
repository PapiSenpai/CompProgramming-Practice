#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("shell.in", "r", stdin);
    //initiating variables
    int a{0},b{0}, //these two initial shell positions will swaped
        g{0}, // guess
        n{0}; // amount of times game will go on and each iteration there will be a swap

    cin>>n; // first line to be inputted by file which dettermins amount of guesses

    int shell_pos[3]; // this will simulate the position of the pebble

    // sets initial positions of the pebble in the shell and will go through all possible guesses (Ex. Making the cups as well as there position)
    for(int i=0;i<3;i++){shell_pos[i]=i;}

    // guess pebble at every swap
    int arr[3]={0,0,0}; // stores number of times i was selected (initiate values for array, vectors are perferable)
    for(int i=0; i<n;i++){
        cin>> a>> b>> g; // secound line to be inputted
        //zero indexing
        a--, b--, g--;
        // bessie performs swap
        swap(shell_pos[a],shell_pos[b]);
        // compare result and count the probable case in where the pebble will be
        arr[shell_pos[g]]++;

    }

    freopen("shell.out", "w", stdout);
    cout << max({arr[0], arr[1], arr[2]}) <<endl; // gives the maximun of correct guesses based on amount of times that the pebble was placed in position position 'a' of current swap

    return 0;
}