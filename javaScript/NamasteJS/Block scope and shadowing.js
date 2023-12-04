// Block 
{
    // compound statement 
    //this is a block 
}
// combining multiple statement together 
// why combining 
    // when javascript expects only one statement ( and we have multiple statement ) then
    //  use <-- Block as a statement (by grouping them together)


// Block Scope 
{
    // what all variables and functions we can access inside this block 
    let a=10;
    var b=100;
    const c=1000;
    // let and const are in block scope  ( within block only accessable )<-- hoisting 
    // we can access var outside ( global level )
}

// we can access b outside 

console.log(b);


// shadowing 
console.log(x);

var x=1;
{
    var x=10;
    console.log(x); // <- shadowed  
}

// x value is also changed (because :-  They both are pointing to the same memory location);
console.log(x);

//  but in case of let 


let y=100;
{
    let y=100000;
    console.log(y); // block scope comes in picture 
}
console.log(y);

// same works for const like let 


// illegal shadowing  *****************************************************************

// NOTE:- VAR  is function scoped 
let a1=10;
function xyz(){
    var a1=10; 
    console.log(a1);
}

{
    // var a1=100;//<-- will throw an errow (illegal shadowing )

    let a1=100;// <- we can shadow like this 

}

console.log(a1);
