var score1 = 50;
var score2 = 90;
var s1 = 60;
var s2 = 90;

var comp = (score1 + score2) > (s1 + s2);
var el = document.getElementById('answer');
el.textContent = 'New high score: ' + comp;