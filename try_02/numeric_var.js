var price;
var quantity;
var total;

price = 5;
quantity = 14;
total = price * quantity;

var el = document.getElementById('cost'); //尋找id屬性為cost的元件
el.textContent = '$' + total;
