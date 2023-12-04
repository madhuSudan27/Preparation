// when ever js runs any program a global execution context is created 
// and it will have two componenet <-- memory component (variable environment) and code component 
// functions are heart of js

// function invocation and variable environment 

var x=1;
a();// will create a new execution context 
b();// this will also create a new execution context 

function a(){
    var x=10;
    console.log(x);
}

function b(){
    var x=20;
    console.log(x);
}

// at last entire call stack will be vanished 
