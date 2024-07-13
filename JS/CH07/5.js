$(function() {
    $('ul').before('<p class = "notice">Just updated</p>'); // 在<ul>之前用before()方法將一個新的文字段落加入在清單之前
    $('li.hot').prepend('^o^')        //在li的id為hot前，加上符號
    var $newListItem = $('<li><em>Golden State</em> Warriors</li>');
    $('li:last').after($newListItem);
});