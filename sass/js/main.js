var myjumps = [".head",".second-screen",".third-screen", ".fourth-screen"];


$("#target").click(function() {
	$('html,body').animate({
		scrollTop: $(".second-screen").offset().top},
		1500);
});


$(".move-first").click(function() {
	$('html,body').animate({
		scrollTop: $(".head").offset().top},
		1500);
});

$(".move-second").click(function() {
	$('html,body').animate({
		scrollTop: $(".second-screen").offset().top},
		1500);
});


$(".backtotop").click(function() {
	$('html,body').animate({
		scrollTop: $(".head").offset().top},
		1500);
});






// var b1 = document.getElementById('b1');IPoUIO
// var b2 = document.getElementById('b2');
// var b3 = document.getElementById('b3');

// if(b1.onclick="changeText();") {
// 	document.getElementById('pText').innerHTML = "You pressed button 1";
// }

// if(b2.onlick="changeText();") {
// 	document.getElementById('pText').innerHTML = "You pressed Button 2";
// }