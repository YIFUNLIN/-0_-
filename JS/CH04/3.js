var score = 75;
var msg;

if (score >= 60){
    msg = 'Congratulations!';
    msg += 'Proceed to the next round.';
}

var el = document.getElementById('answer');
el.textContent = msg;