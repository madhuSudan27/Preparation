console.log(a); //<-- will print undefined 
    // memory creation phase is already done <- so undefined (as temporary assignment)
    // during the code execution phase it will assign the value of a =10 
    // undefined != empty <- it is just a place holder 


var a=10;
console.log(a); //<-- prints 10  

//console.log(x);//<- not defined     
    // x is not present in memory 

var b;
console.log(b);
if(b === undefined){
    console.log("b is undefined");
}
else{ 
    console.log("b is not undefined");
}

// js is loosely typed language  not a strict type ( weekly typed )

var c;
console.log(c);
c=10;
console.log(c);
c= "i am madhusudan";
console.log(c);

// bad practice <-- lead to inconsistency 
var test=undefined; // a very bad thing to do ( because undefind is just a place holder)
