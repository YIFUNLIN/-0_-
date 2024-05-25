var username;
var message;

username = 'Molly';
message = 'See our upcoming range';

// 取得原先HTML中的element: name、note ，之後要做修改
var  elName = document.getElementById('name');
var elNote = document.getElementById('note');

// 將新變數內容設為
elName.textContent = username; 
elNote.textContent = message;


