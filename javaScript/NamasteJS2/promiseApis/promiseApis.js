const p1 = new Promise((resolve, reject) => {
  /* setTimeout(() => {
    resolve("P1 Success");
  }, 3000); */
  setTimeout(() => {
    reject("P1 Failed");
  }, 3000);
});

const p2 = new Promise((resolve, reject) => {
 /*  setTimeout(() => {
    resolve("P2 Success");
  }, 5000); */

  setTimeout(() => {
    reject("P2 Failed");
  }, 1000);
});

const p3 = new Promise((resolve, reject) => {
  /* setTimeout(() => {
    resolve("P3 Success");
  }, 2000); */
  setTimeout(() => {
    reject("P3 Failed");
  }, 2000);
});


// Promise.all(); 


/* 

Promise.all([p1, p2, p3])
  .then((res) => {
    console.log(res);
  })
  .catch((err) => {
    console.error(err);
  }); 
  
*/

// lets deep dive into promise.allSettled();

/* 
Promise.allSettled([p1,p2,p3]) // <- safest option among all  
.then((res)=>{
    console.log(res);
}).catch((err)=>{
    console.error(err);
})

 */


// promise.race 

/* 
Promise.race([p1,p2,p3])
.then((res)=>{
    console.log(res);
}).catch((err)=>{
    console.error(err);
}) */


// Promise.any() 

// if all failed then it will give aggregate error 

Promise.any([p1,p2,p3])
.then((result)=>{
    console.log(result);

}).catch((err)=>{
    console.error(err);
    
    // to  show all the aggregated error 
    console.log(err.errors);
})


