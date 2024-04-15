// good part of call backs


// bad part of call back 
const cart = ['shoes', 'pant' , 'shirt'];

api.createOrder(cart , function(){
    api.proceedToPayment(function(){
        api.showOrderSummary(function(){
            api.updateWallet();
        });
    });
});

// each one is dependent on other 
// this is a call back hell 

// this is also known as pyramid if doom 


// inversion of control 
// when we loose control on our code 

api.createOrder(cart , function(){
    // we don't know  how this one is called 
    api.proceedToPayment();
})





