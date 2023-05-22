from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
from xvfbwrapper import Xvfb
import subprocess
import sys
import time
import schedule

contest = sys.argv[1]
date = sys.argv[2]

def clone():
#Open problems
    subprocess.call(["chromium",f"https://codeforces.com/contest/{contest}/problem/A"])
    subprocess.call(["chromium",f"https://codeforces.com/contest/{contest}/problem/B"])
    subprocess.call(["chromium",f"https://codeforces.com/contest/{contest}/problem/C"])
    subprocess.call(["chromium",f"https://codeforces.com/contest/{contest}/problem/D"])
#Navigate to contest page
    driver.get(f"https://codeforces.com/contest/{contest}")
#Clone the contest
    subprocess.call(["zsh","./activate-competitive-companion.sh"])
    input("Parsing problems...")
    driver.quit()
    vdisplay.stop()

#Start Virtual display
vdisplay = Xvfb()
vdisplay.start()
#Start chromium webdriver
options = Options()
options.BinaryLocation = "/usr/bin/chromium"
options.add_extension("competitive_companion.crx")
driver = webdriver.Chrome(executable_path="/usr/bin/chromedriver",options=options)

schedule.every().day.at(date).do(clone)
print(f"Ready to clone contest {contest} at {date}")
while True:
    schedule.run_pending()
    time.sleep(1)
