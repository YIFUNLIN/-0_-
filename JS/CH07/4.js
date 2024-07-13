$(function(){
    $('li:contains("second")').text('Lebron James'); // 替換li為second
    $('li.hot').html(function(){                     //替換其他id為hot的變成斜體字
        return '<em>' + $(this).text() + '</em>';
    })
    $('li#one').remove();
})