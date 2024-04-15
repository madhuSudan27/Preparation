// promises are used to handle async operation in js

const cart = ["shoes", "pant", "Shirt"];
// promise objects are immutable


/* 
const promise = createOrder(cart); // orderId
console.log(promise); // initially it is in pending state

promise.then(function(orderId){
    console.log(orderId);
    // proceedToPayment(orderId);
}).catch((err)=>{
    console.log(err.message);
}); */






createOrder(cart)
  .then(function (orderId) {
    console.log(orderId);
    return orderId;
  })
  .catch((err) => { // scenario suppose we want to proceed to payment without validating the card 
    console.log(err.message);
  })
  .then((orderId) => {
    return proceedToPayment(orderId);
  })
  .then((paymentStatus)=>{
    console.log(paymentStatus);
  })
  .catch((err)=>{ // this will handle only the upper error 
    console.log(err.message);
  })
.then((orderId)=>{
    console.log('No matter what i will definitely be called ');
});


function createOrder(cart) {
  const promise = new Promise(function (resolve, reject) {
    // we can do stuff here

    // create order
    // validate cart
    // order id

    if (!validateCart(cart)) {
      const error = new Error("Cart is not valid");
      reject(error);
    }

    const orderId = "12345";

    if (orderId) {
      // lets add some timeout
      setTimeout(() => {
        resolve(orderId);
      }, 5000);
    }
  });

  return promise;
}

function proceedToPayment(orderId){
    return new Promise((resolve, reject)=>{
        resolve("Payment Successful");
    });

}

/* function validateCart(cart) {
  return true;
} */

function validateCart(cart){
    return false;
}
