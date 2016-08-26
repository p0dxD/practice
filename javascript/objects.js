/*Simple  printout of the avaiable data*/
var person = {
	name: "John", age: 100,
	name: "Calc", age: 10
};

document.write("One way " + person.age + "<br>");
document.write("Name " + person.name);
document.write("Second way "+ person['age'] +"<br>");

/*Object constructor*/
var testObject1 = {name1: "test", age1: 20};
function testObject(name1, age1){
	this.name1 = name1;
	this.age1 = age1;
}/*Constructor*/

document.write("Name " + testObject1.name1 + " Age "+testObject1.age1 + "<br>");

var person_one = new testObject("Changed", 14);

document.write("Name " + person_one.name1 + " Age "+person_one.age1 + "<br>");
person_one.name1 = "changed again"
document.write("Name " + person_one.name1 + " Age "+person_one.age1 + "<br>");


/*Associated object inside another function*/

function test(one, two){
	this.one = one;
	this.two = two;
	this.changeNum = function test_method(one){
		this.one = one;
	}
}
var Test = new test(1,2);

document.write("One " + Test.one + " Two " + Test.two + "<br>");


Test.changeNum(7);


document.write("One " + Test.one + " Two " + Test.two + "<br>");



/*Outside function*/


function test_outer_method(one, two){
	this.one = one;
	this.two = two;
	this.diference = sub;
}

function sub(){
	return this.two - this.one;
}

var Test2 = new test_outer_method(1,20);
document.write("One " + Test2.one + " Two " + Test2.two + " Difference "+ Test2.diference() +"<br>");
