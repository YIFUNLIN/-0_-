var msg;
var level = 2;

switch (level){
    case 1:
        msg = 'Good luck';
        break;
    
    case 2:
        msg = 'Curry is MVP!!';
        break;

    case 3:
        msg = 'haha';
        break;

    default:
        msg = "OOOO";
        break;    
    }

var el = document.getElementById('answer');
el.textContent = msg;