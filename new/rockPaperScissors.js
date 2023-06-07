const prompt = require('prompt-sync')();

const computerPlay = () => {
    let ranNum = Math.floor(Math.random() * 3);
    let ranSelect;
    switch (ranNum) {
        case 0:
            ranSelect = 'rock';
            break;
        case 1:
            ranSelect = 'paper';
            break;
        case 2:
            ranSelect = 'scissors';
            break;
    }
    return ranSelect;
};
let result = computerPlay();
console.log(result);

const resultVerifier = (result, fingerPose) => {
    let response;
    if (result === 'rock' && fingerPose === 'scissors') response = false;
    else if (result === 'scissors' && fingerPose === 'paper') response = false;
    else if (result === 'paper' && fingerPose === 'rock') response = false;
    else if (result === fingerPose) return 'Draw';
    else response = true;
    let responseFin = response ? "You win" : "You lose";
    return responseFin;
};

let nameInput = prompt('Input a name ', 'player');
console.log("Hello " + nameInput + " welcome to our game!!");

let fingerPose = prompt("Input either rock, paper, or scissors ", "rock");

console.log(resultVerifier(result, fingerPose));