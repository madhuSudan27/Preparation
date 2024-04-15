// let are hoisted 
// these are in the temporal dead zone for time being 


// we can access b without even declaring and initializing it like :-
console.log(b);
// due to hoisting 

// console.log(a); //<-- error ( why this error )

let a=100; // a is also hoisted so  * WE SHOULD ACCESS IT even before initialization *

// we can not use same name in same scope as variable declaration  <- in case of let 

console.log(a);
/* 
    IN CASE OF LET AND CONST <-- MEMORY IS ALLOCATED  so its called hoisting 
    but in a separate execution context ( not at global )

    even before 1 st line of code execution the memory will be assigned for a <- but not initialized 

    * At line 9 a is in TEMPORAL DEAD ZONE 
    *  AT LINE 11 after initialization TEMPORAL DEAD ZONE ENDS
    * SO the phase ( of memory creation to initialization is calledd temporal dead zone)
    * 
*/

var b=10;

console.log(window.b); //<- b is attached to the window object 
console.log(this.b); //<- at global level window === this 
console.log(window === this);
// but in case of (let) not <-- because it has a separate storage (A reserved space)

// more strict than let 
/* 
we can declare let (anywhere)
let x;
    and initialize it later 
x=10;
but in case of const not 
*/
const C=100;

