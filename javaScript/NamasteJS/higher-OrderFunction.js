// function inside function 
// or functions which returns another function  or take function as parameter 

// problem :- given an array find its area, diameter , and parameter

const radious = [1,2,4,8,6];

const area = function (radious){
    return Math.PI* radious * radious;
}

const Parameter = function(radious){
    return Math.PI * 2 * radious;
}

const diameter = function(radious){
    return 2* radious;
}

const calculate = function (radious , logic){
    const output = [];
    for(let i = 0; i <radious.length; i++){
        output.push(logic(radious[i]));
    }
    return output;
}

console.log(calculate(radious, area));
console.log(calculate(radious, Parameter));
console.log(calculate(radious, diameter));

const Output = radious.map(area);

// lets create a polyphills
Array.prototype.calculation = function(logic){
    const ans = [];
    for(let i = 0; i< this.length; i++){
        ans.push(logic(this[i]));
    }
    return ans;
}

console.log(Output);
console.log(radious.calculation(area));
