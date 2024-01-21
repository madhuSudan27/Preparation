
// map is used to transform an array 

// Array.map(Function)
//               |
//         Transform function 


// Map 
const arr = [5,3,1,2,4,6];

function double(x){
    return x*x;
}
function triple(x){
    return x* x* x;
}

function binary(x){
    return x.toString(2);
}

// const output = arr.map(double);
// const output1 = arr.map(triple);
// const output2 = arr.map(binary);
// console.log(output);
// console.log(output1);
// console.log(output2);


// filter 

function even(x){
    return x % 2 === 0;
}

function odd(x){
    return x % 2; 
}




// const output = arr.filter(odd);

// console.log(output);


// reduce 

// problem :- find the sum of array 

const output = arr.reduce(function(acc, curr){
    acc += curr;
    return acc;
},0)
const output1 = arr.reduce(function(max, curr){
    if(curr > max){
        max = curr;
    }
    return max;
},0)

console.log(output1);



