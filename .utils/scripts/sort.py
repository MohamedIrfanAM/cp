import os
import shutil
import difflib
import re

CP_PATH = "D:\\cp\\"

def rename_codeforces(directory):
    for filename in os.listdir(directory):
        if filename.startswith('Codeforces'):
            new_name = re.sub(r'Codeforces', '', filename, count=1)
            new_path = os.path.join(directory, new_name)
            os.rename(os.path.join(directory, filename), new_path)

def rename_educational_rounds(directory):
    for filename in os.listdir(directory):
        if 'CodeforcesEducationalCodeforcesRound' in filename and 'Ratedfor' in filename:
            new_name = re.sub(r'CodeforcesEducationalCodeforcesRound(\d+)Ratedfor(\w+)', r'EducationalRound\1\2', filename)
            new_path = os.path.join(directory, new_name)
            os.rename(os.path.join(directory, filename), new_path)

def rename_rounds(directory):
    for filename in os.listdir(directory):
        match = re.match(r'Round(\d+)Div\.(\d+)', filename)
        if match:
            new_name = f'Round_{match.group(1)}_Div.{match.group(2)}'
            new_path = os.path.join(directory, new_name)
            os.rename(os.path.join(directory, filename), new_path)

def rename_cses(directory):
    for filename in os.listdir(directory):
        if filename.endswith('.cpp'):
            name = os.path.splitext(filename)[0]
            new_path = os.path.join(CP_PATH, 'cses', name, filename)
            shutil.move(os.path.join(directory, filename), new_path)

# Codeforces
solutions = [os.path.join(dirpath, filename)
            for dirpath, _, filenames in os.walk(os.path.join(CP_PATH, "Codeforces"))
            for filename in filenames if filename.endswith(".cpp")]

for solution in solutions:
    template_path = os.path.join(CP_PATH, ".utils", "template.cpp")
    if not any(diff for diff in difflib.unified_diff(open(solution).readlines(), open(template_path).readlines())):
        solution_name = os.path.splitext(solution)[0]
        for ext in ['.cpp', '.exe']:
            os.remove(solution_name + ext)

shutil.move(os.path.join(CP_PATH, "Codeforces"), os.path.join(CP_PATH, "codeforces"))
rename_codeforces(os.path.join(CP_PATH, "codeforces"))
rename_educational_rounds(os.path.join(CP_PATH, "codeforces"))
os.chdir(os.path.join(CP_PATH, "codeforces"))
rename_rounds(os.path.join(CP_PATH, "codeforces"))
os.chdir(CP_PATH)

# CSES
# cses_path = os.path.join(CP_PATH, "CSES-CSESProblemSet")
# cses_files = [f for f in os.listdir(cses_path) if f.endswith(".cpp")]
# for filename in cses_files:
#     name = os.path.splitext(filename)[0]
#     print(name)
#     os.makedirs(os.path.join(CP_PATH, "cses", name))
#     shutil.move(os.path.join(cses_path, filename), os.path.join(CP_PATH, "cses", name))

# shutil.rmtree(cses_path)

# Removing all executables
for filename in os.listdir(CP_PATH):
    if filename.endswith(".exe"):
        os.remove(os.path.join(CP_PATH, filename))
