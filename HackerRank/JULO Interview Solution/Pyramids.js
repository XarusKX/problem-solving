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
 * Complete the 'pyramids' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER height
 *  2. INTEGER n_rotations
 */

function pyramids(height, n_rotations) {
    const isCounterClockwise = (n_rotations < 0);
    const position = Math.abs(n_rotations) % 4;

    if (height < 1) return 'invalid input';

    let pyramid = null;
    if (isCounterClockwise) {
        if (position === 0) pyramid = bottomPyramid(height);
        else if (position === 1) pyramid = rightPyramid(height);
        else if (position === 2) pyramid = topPyramid(height);
        else pyramid = leftPyramid(height);
    } else {
        if (position === 0) pyramid = bottomPyramid(height);
        else if (position === 1) pyramid = leftPyramid(height);
        else if (position === 2) pyramid = topPyramid(height);
        else pyramid = rightPyramid(height);
    }

    return pyramid;
}

function leftPyramid(height) {
    let pyramid = '';
    let k = 0;

    for (let i = height - 1; i >= 0; i--) {

        for (let j = i; j < height; j++) pyramid += '*';

        pyramid += '\n';
    }

    for (let i = 1; i < height; i++) {

        for (let j = 0; j < height - i; j++) pyramid += '*';

        if (i !== height - 1) pyramid += '\n';
    }

    return pyramid;
}

function topPyramid(height) {
    let pyramid = '';

    for (let i = 0; i < height; i++) {
        for (let j = 0; j < i; j++) pyramid += ' ';

        for (let k = 0; k < 2 * (height - i) - 1; k++) pyramid += '*';

        if (i !== height - 1) pyramid += '\n';
    }

    return pyramid;
}

function rightPyramid(height) {
    let pyramid = '';

    for (let i = 1; i <= height; i++) {

        for (let j = 0; j < height - i; j++) pyramid += ' ';

        for (let k = 0; k < i; k++) pyramid += '*';

        pyramid += '\n';
    }

    for (let i = height - 1; i > 0; i--) {

        for (let j = i; j < height; j++) pyramid += ' ';

        for (let k = 0; k < i; k++) pyramid += '*';

        if (i !== 1) pyramid += '\n';
    }

    return pyramid;
}

function bottomPyramid(height) {
    let pyramid = '';

    for (let i = 1; i <= height; i++) {

        for (let j = 1; j <= height - i; j++) pyramid += ' ';

        for (let k = 0; k < 2 * i - 1; k++) pyramid += '*';

        if (i !== n) pyramid += '\n';
    }

    return pyramid;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const height = parseInt(readLine().trim(), 10);

    const n_rotations = parseInt(readLine().trim(), 10);

    const result = pyramids(height, n_rotations);

    ws.write(result + '\n');

    ws.end();
}
