function Hotel(name, rooms,booked){
    this.name = name;
    this.rooms = rooms;
    this.booked = booked;
    this.checkAvailability = function() {
        return this.rooms - this.booked;
    };
}

var A = new Hotel('A',40,25);
var B = new Hotel('B',100,77);

var ans1 = A.name + ' residual rooms: ';
ans1 += A.checkAvailability();
var elA = document.getElementById('hotel1');
elA.textContent = ans1;

var ans2 = B.name + ' residual rooms: ';
ans2 += B.checkAvailability();
var elB = document.getElementById('hotel2');
elB.textContent = ans2;
