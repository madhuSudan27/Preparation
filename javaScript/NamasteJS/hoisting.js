// js is loosely typed language  not a strict type 


// even before execution  memory is allocated to all the mariable and functions
// and stores undefind for this variables 
// in case of function whole code is put on 

// lets see how allocation works 
// getName(); // <- output of the function 
console.log(x);//<- undefined 
// console.log(getName); //<- will print the entire function(scope) 
console.log(getName);


var x=10;
// function getName(){
//     console.log("from Closure");
// }
// now lets make getname as arrow function 

var getName = ()=>{  //<- will behave lika a variable 
    console.log("from arrow Function");
}

/* getName();
console.log(x);
console.log(getName); //<- will print the entire function(scope)  */