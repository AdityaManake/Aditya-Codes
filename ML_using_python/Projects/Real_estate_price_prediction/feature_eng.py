from data_cleaning import final_cleaned_data, filepath
import pandas as pd
import logging
import os 

log_dir= r"D:\Programs\ML_using_python\Projects\Real_estate_price_prediction\logs"
log_file=os.path.join(log_dir,"feature_eng.log")
logger=logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

f=logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
fh=logging.FileHandler(log_file,mode='a') # a-append to existing file , w-overwrite existing file 
fh.setFormatter(f)

logger.addHandler(fh)
df_cleaned = final_cleaned_data(filepath)

def feature_eng(df_cleaned):
    logger.info("Started Feature Engineering")
    try:
        df_cleaned=df_cleaned.drop(columns=['size'],axis=1)
        df_cleaned['price_per_sqft'] = df_cleaned['price']*100000/df_cleaned['total_sqft']
        df_cleaned.location=df_cleaned.location.apply(lambda x: x.strip())
        '''location_stats=df_cleaned.groupby('location')['location'].agg('count').sort_values(Ascending=False)
        print(len(location_Stats[location_Stats>10]))'''
        location_stats_less_than_10=location_stats[location_stats<=10]
        df_cleaned.location=df_cleaned.location.apply(lambda x: 'other' if x in location_stats_less_than_10 else x) 
        logger.info("Feature Engineering Completed")
        return df_cleaned
    except Exception as e:
        logger.error(f"Error during feature engineering: {e}")
        raise e

def outliers(df_cleaned):
# next task is to remove outliers
    logging.info("Started Outlier Removal")


if __name__=='__main__':
    logger.info("Starting Feature Engineering")
    df_cleaned = feature_eng(df_cleaned)
    logger.info("Feature Engineering Completed")

