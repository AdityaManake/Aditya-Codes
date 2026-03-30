import os 
import logging

logger=logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

f=logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')

fh=logging.FileHandler('saveToFile.log')
fh.setFormatter(f)

logger.addHandler(fh)

#logging.basicConfig(filename='saveToFile.log',level=logger.DEBUG,format='%(asctime)s - %(levelname)s - %(message)s')

def CheckName(name):
    logger.debug(f'Checking name "{name}"')
    if os.path.exists('data.txt'):
        with open('data.txt','r') as readFile:
            for line in readFile:
                if line.lower().startwith(f'name:{name.lower()}'):
                    logger.error(f'Name "{name}" already exists')
                    return False
            if len(name)==0:
                logger.critical("name cannot be blank")
                return False
            elif name.isspace():
                logger.debug("checking for name space")
                return False
            elif not name.isalpha():
                logger.critical("Name must be an alphabet")
                return False
            else:
                logger.error(f"Check Sucessfull!")
                return True
    else:
        logger.debug("No data found")
        return True

def saveData(name,age,email):
    logger.debug(f'saving details of {name}...')
    with open('data.txt','a') as appendFile:
        appendFile.write(f'name: {name} - age: {age} - email: {email}\n')
        logger.info(f'Details  saved sucessfully')
        print(f'details saved sucessfully')

logger.info("End of savetofile Program")
logger.debug("########################")