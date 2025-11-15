@echo off
echo -----------------------------------------
echo Starting Jupyter Local Runtime for Colab
echo -----------------------------------------
echo.

pip install jupyter jupyter_http_over_ws

jupyter notebook ^
--NotebookApp.allow_origin='https://colab.research.google.com' ^
--port=8888

pause

