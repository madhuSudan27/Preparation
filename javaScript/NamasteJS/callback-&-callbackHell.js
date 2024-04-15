// what is a callback function in java script 

setTimeout(() => {
    console.log('timer');
}, 5000);

function x(y){
    console.log('From function x');
    y();
}

x(function y(){
    console.log("y");
})


// blocking the main thread 

// js has only one call stack 
// so if any function or expression blocks the call stack then 
// it is called as blocking the main thread 

// power of callback 





/* const cart = ["watch", "shoes", "pant" ,"tshirt"];

// call back hell -- pyramid of doom 
api.createOrder(cart , function (){
    api.proceedToPayment( function(){
        api.showOrderSummary(function(){
            api.updateWallet();
        })
    })

}) */

// inversion of control  <- loose  control of our program 

