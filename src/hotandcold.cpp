#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

string getFeedback(int guess, int previousGuess, int secret) {
    if (guess == secret) return "correct";
    if (previousGuess == -1) return "first";
    
    int prevDist = abs(previousGuess - secret);
    int currDist = abs(guess - secret);
    
    if (currDist < prevDist) return "hotter";
    if (currDist > prevDist) return "colder";
    return "same";
}

void automaticGame(int N) {
    srand(time(0));
    int secret = rand() % N + 1;
    int left = 1, right = N;
    int guess = (left + right) / 2;
    int previous = -1;
    int attempts = 0;
    string feedback;
    
    cout << "Secret number: " << secret << endl;
    cout << "Starting automatic search...\n";
    cout << "Expected max guesses: " << 2 * ceil(log2(N)) << endl;
    
    while (true) {
        attempts++;
        feedback = getFeedback(guess, previous, secret);
        
        cout << "Guess " << attempts << ": " << guess << " -> " << feedback << endl;
        
        if (feedback == "correct") {
            cout << "Found in " << attempts << " guesses!\n";
            break;
        }
        
        if (attempts > 2 * ceil(log2(N)) + 10) {
            cout << "Search taking too long. Aborting.\n";
            break;
        }
        
        
        if (feedback == "first") {
            
            if (guess < secret) left = guess + 1;
            else right = guess - 1;
        }
        else if (feedback == "hotter") {
            
            if (guess > previous) {
                
                left = (previous + guess) / 2 + 1;
            } else {
                
                right = (previous + guess) / 2 - 1;
            }
        }
        else if (feedback == "colder") {
          
            if (guess > previous) {
                
                right = previous - 1;
            } else {
                
                left = previous + 1;
            }
        }
        else { 
            guess = (previous + guess) / 2;
            previous = guess;
            continue;
        }
        
        previous = guess;

        if (left > right) {
            left = 1;
            right = N;
        }
        
        guess = (left + right) / 2;
    }
}

