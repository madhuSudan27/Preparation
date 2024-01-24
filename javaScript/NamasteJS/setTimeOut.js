/* function x(){
    var i = 1;
    setTimeout(() =>{
    console.log(i);
    }, 2000);
} */

/* function x(){
    for(var i = 0; i<= 5; i++){ 
        // each time i is referencing to the same location the output will be wrong 
        setTimeout(() =>{
        console.log(i);
        }, i * 1000);
    }
    console.log("anand");
} */


/* 
// using let 
function x(){
    for(let i = 0; i<= 5; i++){ // here let has block scope and will act as a complete new variable 
        setTimeout(() =>{
        console.log(i);
        }, i * 1000);
    }
    console.log("anand");
} */


function x(){
    for(var i = 0;i <= 5; i++ ){
        function closed(num){
            setTimeout(() =>{
            console.log(num);
            }, num * 1000);
        }
        closed(i);
    }

    console.log("anand");
}
x();
