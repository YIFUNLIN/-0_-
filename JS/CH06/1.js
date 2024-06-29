function checkLength(e, minlength) {
    var el, elmsg;
    if (!e) {
        e = window.event;
    }
    el = e.target || e.srcElement;
    elmsg = el.nextSibling;

    if(el.value.length < minlength) {
        elmsg.innerHTML = 'Username must be at least ' + minlength + ' characters or more';
    }
    else{
        elmsg.innerHTML = '';
    }
}

var elusername = document.getElementById('username');
if (elusername.addEventListener){
    elusername.addEventListener('blur',function(e){
        checkLength(e, 5);
    },false);
}
else{
    elusername.attachEvent('onblur', function(e) {
        checkLength(e, 5);
    });
}
