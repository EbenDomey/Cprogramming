const testArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14];

let testSize = 7;

const checkChunkArray = (arr1, size) => {
    let subSize = size;
    let arrSub = [];
    const arr2 = [];
    let div = parseInt(arr1.length / size) + (arr1.length % size);
    let i = 0;
    for (let j = 0; j < div; j++) {
        for (; i < size; i++) {
            if (arr1[i] !== undefined) {
                arrSub.push(arr1[i]);
            }
        }
        size += subSize;
        arr2.push(arrSub);
        arrSub = [];
    }
    return arr2;
}




console.log(checkChunkArray(testArr, testSize));