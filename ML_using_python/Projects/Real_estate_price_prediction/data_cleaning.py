import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import logging
import os

log_dir= r"D:\Programs\ML_using_python\Projects\Real_estate_price_prediction\logs"
log_file=os.path.join(log_dir,"data_cleaning.log")
logger=logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

f=logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
fh=logging.FileHandler(log_file,mode='a')
fh.setFormatter(f)

logger.addHandler(fh)

def load_data(filepath):
    logger.info("Loading Data")
    if not os.path.exists(filepath):
        logger.error("File not found")
        return None
    else:
        logger.info("File loaded sucessfully")
    return pd.read_csv(filepath)


def is_float(x):
    try:
        float(x)
        return True
    except:
        return False


def convert_sqft_to_num(x):
    x = str(x)
    tokens = x.split('-')

    if len(tokens) == 2:
        try:
            return (float(tokens[0]) + float(tokens[1])) / 2
        except:
            return None

    try:
        return float(x)
    except:
        return None


def clean_data(df):
    logger.info("Cleaning Data")
    if df is None:
        logger.error("No data to clean")
        return None
    else:
        logger.info("Data cleaned sucessfully")
        df = df.drop(['area_type', 'availability', 'society', 'balcony'], axis=1)
        df = df.dropna()
        df['bhk'] = df['size'].apply(lambda x: int(x.split(' ')[0]))

    return df


filepath = r"D:\Programs\ML_using_python\Projects\Real_estate_price_prediction\bengaluru_house_prices.csv"


def final_cleaned_data(filepath):
    if filepath is None:
        logger.error("No filepath provided")
        return None
    else:
        logger.info("Filepath provided")
        df = load_data(filepath)
        df_cleaned = clean_data(df)
        non_float_sqft = df_cleaned[~df_cleaned['total_sqft'].apply(is_float)]
        df_cleaned['total_sqft'] = df_cleaned['total_sqft'].apply(convert_sqft_to_num)
        df_cleaned = df_cleaned.dropna(subset=['total_sqft'])
        return df_cleaned

if __name__ == "__main__":
    logger.info("Starting data cleaning")
    df_cleaned = final_cleaned_data(filepath)
    print(df_cleaned.head(10))