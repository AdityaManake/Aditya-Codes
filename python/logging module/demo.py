import logging
#creates a file named demo.log and stores all the debug messages in it
logging.basicConfig(filename="demo.log",level=logging.DEBUG,filemode="w",format="%(asctime)s - %(levelname)s - %(message)s")

#logging.disable()

'''def CheckName(name):
    if len(name)<2:
        logging.debug("checking for name length")
        return "invalid name"
    elif name.isspace():
        logging.debug("checking for name space")
        return "invalid name"
    elif name.isalpha():
        logging.debug("checking for name alpha")
        return "valid name"
    else:
        logging.debug("Failed all checks")
        return "invalid name"

print(CheckName("aditya123"))'''

logging.debug("This is a debug message")
logging.info("This is an info message")
logging.warning("This is a warning message")
logging.error("This is an error message")
logging.critical("This is a critical message")  