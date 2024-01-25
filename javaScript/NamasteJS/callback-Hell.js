const cart = ["watch", "shoes", "pant" ,"tshirt"];

// call back hell -- pyramid of doom 
api.createOrder(cart , function (){
    api.proceedToPayment( function(){
        api.showOrderSummary(function(){
            api.updateWallet();
        })
    })

})

// inversion of control  <- loose  control of our program 

