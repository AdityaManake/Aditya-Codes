from fastapi import FastAPI 
import json
from pathlib import Path 

DATA_PATH = Path(__file__).parent/ "patients.json"
app = FastAPI()

def load_data():
    with open(DATA_PATH, "r") as f:
        data = json.load(f)  
    return data 


@app.get("/")
def hello():
    return {'message': 'Hey'}


@app.get("/about")
def about():
    return {"message" : "A fully functional API to manage your patient data"}

@app.get("/view")
def view():
    return load_data()