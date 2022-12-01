'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function plusMinus(arr) {
    let positive = 0, negative = 0, zero = 0;
    arr.forEach((a) => {
        if (a > 0) positive++;
        else if (a === 0) zero++;
        else negative++;
    });

    let positiveFraction = positive ? positive / arr.length : 0;
    let negativeFraction = negative ? negative / arr.length : 0;
    let zeroFraction = zero ? zero / arr.length : 0;

    console.log(positiveFraction.toPrecision(6));
    console.log(negativeFraction.toPrecision(6));
    console.log(zeroFraction.toPrecision(6));
}

function main() {
    const n = parseInt(readLine().trim(), 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
