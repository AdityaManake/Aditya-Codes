import logging 
import saveToFile as stf 

logger=logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

f=logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')

fh=logging.FileHandler('employee log')
fh.setFormatter(f)

logger.addHandler(fh)

#logging.basicConfig(filename='employee log',level=logger.DEBUG,format='%(asctime)s - %(levelname)s - %(message)s')
logger.debug('Start of employee program')

name='Aditya'
age=17
email = 'xys@gmail.com'

if stf.CheckName(name) is True:
    stf.saveData(name,age,email)
else:
    logger.error('Failed to save data')

logger.debug("End of employee program")
logger.debug("#######################")