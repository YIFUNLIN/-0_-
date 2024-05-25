var greeting = "Hello :)) ";
var namee = 'Curry';
var message = ',please check your order:';
var welcome = greeting + namee + message;

var sign = '7-11';
var titles = sign.length;
var subtotal = titles * 5;
var shipping = 7;
var grandTotal = subtotal + shipping;

var el = document.getElementById('greeting'); // 原本只有Hello
el.textContent = welcome; //用新的變數直接取代掉

var elsign = document.getElementById('usersign');
elsign.textContent = sign;

var total = document.getElementById('tiles');
total.textContent = titles

var sub = document.getElementById('subtotal');
sub.textContent = subtotal

var shi = document.getElementById('shipping');
shi.textContent = shipping;

var g = document.getElementById('grandTotal');
g.textContent = grandTotal;


