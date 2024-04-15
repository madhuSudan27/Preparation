// PROMISE <- object represents eventual completion or failure of an async operation

// build promise
const promiseOne = new Promise((resolve, reject) => {
  // do any async task
  // db call , network call

  setTimeout(() => {
    console.log("Async task is completed");
    resolve();
  }, 1000);
});
promiseOne.then(() => {
  console.log("Promise consumed");
});

new Promise((resolve, reject) => {
  setTimeout(() => {
    console.log("Async task 2");
    resolve();
  }, 1000);
}).then(() => {
  console.log("Promise 2 resolved");
});

const promiseThree = new Promise((resolve, reject) => {
  setTimeout(() => {
    // inside the resolve function we can return data
    // most of time obj of data
    resolve({ username: "Chai", email: "madhu@gmail.com" });
  }, 1000);
});
promiseThree.then(function (user) {
  console.log(user);
});


// promise four 

// handle resolve and reject state 
const promiseFour = new Promise((resolve, reject) => {
  setTimeout(() => {
    let error = true;
    if (!error) {
      resolve({ username: "MadhuSudan", password: "123243" });
    } else {
      reject("Error something went wrong");
    }
  }, 2000);
});
promiseFour
  .then((user) => {
    console.log(`${user.username} , ${user.password} `);
    return user.username;
  })
  .then((username) => {
    console.log(username);
  })
  .catch((error) => {
    console.log(error);
  })
  .finally(() => {
    console.log("The promise is either resolved or rejected");
  });



// lets deal with async function 

const promiseFive = new Promise((resolve, reject) => {
  setTimeout(() => {
    let error = true;
    if (!error) {
      resolve({ username: "Javascript", password: "123" });
    } else {
      reject("Error: js went Wrong");
    }
  }, 2000);
});

async function consumePromiseFive() {
  try {
    const response = await promiseFive;
    console.log(response);
  } catch (error) {
    console.log(error);
  }
}


// async function getAllUser(){
//     try{
//         const response = await fetch('https://jsonplaceholder.typicode.com/users');
//         const data =await response.json();
//         console.log(data);
//     }catch(error){
//         console.log('E :' ,error);
//     }

// }

// getAllUser();

fetch('https://jsonplaceholder.typicode.com/users')
.then((response)=>{
    // console.log(response);
    return response.json();
}).then((users)=>{
    
    console.log(users);
}).catch((error)=>{
    console.log(error);
})