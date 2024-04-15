
/* 
* what is async ?
-> a keyword used before async function 


what is await 
how async await works behind the scene 

*/



const p = new Promise((resolve, reject)=>{
    setTimeout(() => {
        resolve("Promise resolved value");
    }, 10000);
});

const p1 = new Promise((resolve, reject)=>{
    setTimeout(() => {
        resolve("Promise p1  resolved value");
    }, 5000);
});


const p2 = new Promise((resolve, reject)=>{
    setTimeout(() => {
        resolve("Promise p2 resolved value");
    }, 10000);
});
/* 
// always returns a promise 
async function getData(){
    // we can return a promise from here 
    // if non promise value then 
        // then it will automatically wrap it inside a promise and 
        // will return a promise 
    // return "Anand";
    return p;
}
const dataPromise = getData();
console.log(dataPromise);

dataPromise.then((res)=>{
    console.log(res);
})

 */




// async and await is used to handle promises 
/* 
function getData(){
    p.then((res) => console.log(res));
    console.log("from older promise resolver");
}
getData(); */



/* 
async function handlePromise(){
    console.log("Hello World");


    // js Engine was waiting for promise to resolve   <- not (it looks like that )
    const val = await p;
    console.log("Madhusudan Anand");
    console.log(val);
    // await can only be used inside an async function 

    const val2 = await p;
    console.log("Madhusudan Anand 2");
    console.log(val2);
    // (Both promises will be resolved after 10 s)
}
handlePromise(); */




async function handlePromise(){
    console.log("Hello World");

    // js Engine was waiting for promise to resolve 
    const val = await p1;
    console.log("Madhusudan Anand");
    console.log(val);
    // await can only be used inside an async function 

    const val2 = await p2;
    console.log("Madhusudan Anand 2");
    console.log(val2);
    
}
handlePromise();