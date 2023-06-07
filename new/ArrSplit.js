// const arr1 = ['a', 'b', 'c', 'd', 'e'];
const testArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11];
let testSize = 3;
const checkChunkArray = (arr1, size) => {
    let arrSub = [];
    const arr2 = [];
    let div = parseInt(arr1.length / size);
    for (let j = 0; j <= div; j++) {
        for (let i = 0; i < size; i++) {
            arrSub.push(arr1[i]);
        }
        arr2.push(arrSub);
        arrSub = [];
        // arr1.splice(0, size);
    }
    const finArray = arr2[arr2.length - 1].filter(item => item !== undefined);
    arr2.splice(arr2.length - 1);
    arr2.push(finArray);
    return arr2;
}

console.log(checkChunkArray(testArray, testSize));