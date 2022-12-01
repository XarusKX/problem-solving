'use strict';

const fs = require('fs');

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
 * Complete the 'julo_solution' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER n as parameter.
 */

function julo_solution(n) {
    let result = '';

    if (n < 1) return 'invalid input';
    else {
        for (let i = 1; i <= n; i++) {

            let isJulo = (i % 3 === 0);
            let isFinance = (i % 5 === 0);

            if (!isJulo && !isFinance) {
                if (i === 1) result += '1';
                else result += ` ${i}`;
            } else {
                if (isJulo) result += ' JULO';
                if (isFinance) result += ' Finance';
            }

            if (i != n) result += ',';
            else result += '.';
        }
    }

    return result;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const n = parseInt(readLine().trim(), 10);

    const result = julo_solution(n);

    ws.write(result + '\n');

    ws.end();
}
