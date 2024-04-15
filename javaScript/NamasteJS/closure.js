

// closure <- function along with its lexical scope(parent) forms a closure  or 
// function bundled together to its surrounding space 

/* function x(){
    let a=10;
    function y(){
        console.log(a);
    }
    a=100;
    return y;
}
let newFunction=x();
console.log(newFunction);
newFunction(); */


function z(){
    let b=100;
    function x(){
        let a=10;
        function y(){
            console.log(a,b);
        }
        y();
    }
    x();
}
z();