/*Arrays and other stuff*/

var list = new Array("1", "2", "3");

for(var i = 0; i < list.length; i++){
	document.write(list[i] + "<br>");
}

document.write("Concat Example<br>");
/*concat*/
var arrayOne = [1,2,3];
var arrayTwo = [4,5,6];
var arrayThree = arrayOne.concat(arrayTwo);

for(var i = 0; i < arrayThree.length; i++){
	document.write(arrayThree[i] + "<br>");
}

