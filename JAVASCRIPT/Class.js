class Player {
    static numberOfPlayers = 0; // Static property to keep track of the number of players

    constructor(name, score) {
        this.name = name; // Instance property for the player's name
        this.score = score; // Instance property for the player's score
        Player.numberOfPlayers += 1; // Increment the number of players when a new instance is created
    }

    // Method to pause the game
    pause() {
        console.log(this.name + " paused the game");
    }

    // Method to exit the game
    exit() {
        console.log(this.name + " exited the game");
    }
}

// Create player instances
let player1 = new Player("kondwani", 56);
console.log(player1.score); // Output: 56
player1.exit(); // Output: "kondwani exited the game"
player1.pause(); // Output: "kondwani paused the game"

let player2 = new Player("chisomo", 67);
console.log(player2.score); // Output: 67
player2.exit(); // Output: "chisomo exited the game"
player2.pause(); // Output: "chisomo paused the game"

let player3 = new Player("moreen", 30);
console.log(player3.score); // Output: 30
player3.exit(); // Output: "moreen exited the game"
player3.pause(); // Output: "moreen paused the game"

console.log(Player.numberOfPlayers); // Output: 3 (total number of players)
