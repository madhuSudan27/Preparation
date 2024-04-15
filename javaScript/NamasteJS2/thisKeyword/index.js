"use strict"

// this in global space 
console.log(this); // global object 

// this inside a function
function x(){
    // value depends on strict and non strict mode 
    console.log(this);
} 
// x();


// this inside non strict mode - (this substitution)
    /* 
       - if the value of this keyword is undefined or null
        - then this will be replaced with globalObject (only in non strict mode ) 
    */

// this keyword  value depends on how this is called (window)

x();
window.x();

// this inside a object method 

const obj = {
    a : 10,
    x : function(){
        console.log(this);
    }
}
obj.x();



// share the methods
const student = {
    name : "madhusudan",
    printName : function(){
        console.log(this.name);
    },
};

student.printName();

const student2 ={
    name :"Rahul",
}

student.printName.call(student2); // value of this is student2 




// call apply bind method (sharing method)




//  this inside arrow function 
const obj1 = {
    a : 10,
    x : ()=>{
        console.log(this);
    }
}
obj1.x();

// this inside nested arrow function 

const obj2 = {
    1 : 100,
    x : function(){
        // console.log(this);
        const y = ()=> {
            console.log(this);
        };
        y();
    },
};

obj2.x();
// this inside DOM