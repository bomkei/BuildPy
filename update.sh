python3 setup.py clean --all
rm -rf dist *.egg-info
python3 setup.py sdist
python3 setup.py bdist_wheel
