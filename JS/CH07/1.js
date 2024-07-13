$(':header').addClass('headline'); //選取所有<h1> ~ <h6>的標題
$('li:lt(3)').hide().fadeIn(1500);  // 選取清單前三項，將元件隱藏與淡出畫面
$('li').on('click',function() { // 設置監聽，移出畫面
    $(this).remove();
});