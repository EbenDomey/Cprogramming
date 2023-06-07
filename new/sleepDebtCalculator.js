const getSleepHours = day => {
    day = day.toLowerCase();
    switch (day) {
        case 'monday':
            return 8;
        case 'tuesday':
            return 6;
        case 'wednesday':
            return 7;
        case 'thursday':
            return 9;
        case 'friday':
            return 5;
        case 'saturday':
            return 10;
        case 'sunday':
            return 11;
    }
};

const getActualSleepHours = () => getSleepHours('Monday') + getSleepHours('Tuesday') + getSleepHours('Wednesday') + getSleepHours('Thursday') + getSleepHours('Friday') + getSleepHours('Saturday') + getSleepHours('Sunday');

const getIdealSleepHours = () => {
    let idealHours = 8;
    return idealHours * 7;
};


const calculateSleepDebt = () => {
    let actualSleepHours = getActualSleepHours();
    let idealSleepHours = getIdealSleepHours();
    let sleepRemainder = idealSleepHours - actualSleepHours;
    sleepRemainder = Math.abs(sleepRemainder);
    if (actualSleepHours === idealSleepHours) {
        console.log('You got the perfect amount of sleep');
    } else if (actualSleepHours > idealSleepHours) {
        console.log('You got more sleep than needed. About ' + sleepRemainder + " hours more");
    } else {
        console.log('You are sleep deprived. About ' + sleepRemainder + ' hours less. Get more rest');
    }
};

calculateSleepDebt();