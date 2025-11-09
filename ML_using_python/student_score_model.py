from sklearn.linear_model import LinearRegression, RANSACRegressor
from sklearn.model_selection import train_test_split
from sklearn.metrics import r2_score, mean_absolute_error, mean_squared_error
import pandas as pd

# Step 1: Create the dataset
student_data = {
    "assignment_scores": [
        78, 85, 92, 88, 74, 90, 67, 81, 95, 89,
        76, 84, 91, 87, 73, 93, 65, 80, 94, 86,
        77, 83, 90, 88, 70
    ],
    "attendance_rate": [
        92, 95, 98, 90, 85, 96, 80, 88, 99, 94,
        91, 93, 97, 89, 84, 98, 78, 87, 99, 93,
        90, 92, 96, 91, 82
    ],
    "study_hours": [
        12, 15, 18, 14, 10, 16, 8, 13, 19, 17,
        11, 14, 17, 13, 9, 18, 7, 12, 20, 16,
        10, 13, 17, 15, 8
    ],
    "screentime_non_academic": [
        6, 5, 4, 7, 8, 3, 9, 6, 2, 4,
        7, 5, 3, 6, 8, 2, 10, 5, 1, 4,
        7, 6, 3, 5, 9
    ],
    "monthly_test_scores": [
        82, 88, 91, 85, 79, 90, 70, 83, 95, 87,
        75, 89, 92, 84, 78, 91, 68, 82, 94, 88,
        76, 85, 90, 86, 72
    ]
}

# Step 2: Prepare DataFrame
df = pd.DataFrame(student_data)

# Step 3: Split features and target
X = df[['assignment_scores', 'attendance_rate', 'study_hours', 'screentime_non_academic']]
y = df['monthly_test_scores']

# Step 4: Train-test split
x_train, x_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Step 5: Train RANSAC model
basic_model = LinearRegression()
robust_model = RANSACRegressor(basic_model)
robust_model.fit(x_train, y_train)

# Step 6: Evaluate model
y_test_pred = robust_model.predict(x_test)
print(f"Model R² score: {r2_score(y_test, y_test_pred):.2f}")
print(f"Mean Absolute Error: {mean_absolute_error(y_test, y_test_pred):.2f}")
print(f"Mean Squared Error: {mean_squared_error(y_test, y_test_pred):.2f}")

# Step 7: Predict new data
assign_score = int(input("Enter assignment score: "))
attendance_rate = int(input("Enter attendance rate: "))
study_hour = int(input("Enter study hours: "))
screen_time = int(input("Enter screen time: "))

new_data = pd.DataFrame([[assign_score, attendance_rate, study_hour, screen_time]],
                        columns=['assignment_scores', 'attendance_rate', 'study_hours', 'screentime_non_academic'])

y_pred = robust_model.predict(new_data)
print(f"Predicted test score: {y_pred[0]:.2f}/100")


