// scope in java script is directly related to lexical environment 

// a();//<-- will print undefined duo to hoisting (b is not executed)

function a(){
    b=100;
    c();
    function c(){
        console.log(b); // <-  due to scope chain will print 100
    }
}

var b=10;
a();

/* 
NOTE :- when ever an execution context is created a lexical environment is also created.
LEXICAL ENVIRONMENT = local memory + reference to lexical Environments of its parent.

in above c() has lexical environment of a() (as reference).

AT GLOBAL LEVEL  the lexical environment points to NULL
*/