/*Sentence print*/
function writeHello(){
	document.write("<h1>hello<h1>");
}

function writeHelloParam(name){
	document.write("<h1>Hello " + name + "</h1>");
}
writeHello();

/*Alert*/
var x = 9, y = 8;
function alertExample(x , y){
	alert(x + y);
}
alertExample(x, y);

/*Prompt*/
function promptBox(){
	return prompt("Enter name: ");
}

writeHelloParam(promptBox());

/*Confirm */
if(confirm("You want to leave?")){
	document.write("bye");
}else{
	document.write("good decision");
}

