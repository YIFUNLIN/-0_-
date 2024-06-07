var hotel = {
    name: 'Curry',
    rooms: 40,
    booked: 25,
    checkAvailability: function (){
        return  this.rooms - this.booked;
    }
};

var elnmae = document.getElementById('hotelname')
elnmae.textContent = hotel.name;

var elrooms = document.getElementById('rooms')
elrooms.textContent = hotel.checkAvailability();