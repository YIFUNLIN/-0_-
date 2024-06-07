/*使用建構子語法去建立物件*/
var hotel = new Object();
hotel.name = 'Curry';
hotel.rooms = 120;
hotel.booked = 77;
hotel.checkAvailability = function() {
    return this.rooms - this.booked;
};

var ename = document.getElementById('hotelname');
ename.textContent = hotel.name;

var erooms = document.getElementById('rooms');
erooms.textContent = hotel.checkAvailability();