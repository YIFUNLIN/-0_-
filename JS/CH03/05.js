var hotel = {
    name : 'Park',
    rooms : 120,
    booked: 77,
};

/*新增和刪除物件*/
hotel.gym = true;
hotel.pool = false;
delete hotel.booked;

var elname = document.getElementById('hotelname');
elname.textContent = hotel.name;

var elPool = document.getElementById('pool');
elPool.className = 'Pool: ' + hotel.pool;

var elGym = document.getElementById('gym');
elGym.className = 'Gym: ' + hotel.gym;