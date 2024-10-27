# 💫 MLops
## MIPT x SberTech
### Problem 1
💘 **Task**: Python пакет с биндингами

💘 Билдим:
```bash
docker build --no-cache -t my_python_package .
```

💘 Зайти в контейнер:
```bash
docker run --rm -it my_python_package 
```

💘 В контейнере:
```bash
make MeanVector
python3 -m build
pip3 install --force-reinstall dist/*.whl
python3 performance.py
```