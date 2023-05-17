from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.common.keys import Keys
options = Options()
options.BinaryLocation = "/usr/bin/chromium"
options.add_extension("competitive_companion.crx")
options.add_extension("shortkeys.crx")
driver = webdriver.Chrome(executable_path="/usr/bin/chromedriver",options=options)

keyAction = ActionChains(driver);
driver.get("chrome-extension://logpjaacgmcbpdkdchjiaagddngobkck/options/options.html")
element = driver.find_element("xpath","/html/body/div[1]/section/div/nav/ul/li[2]/a")
element.click()
text_area = driver.find_element("xpath","/html/body/div[1]/section/div/section/div[2]/div[1]/div/textarea")
shortcut_string = """
[
  {
    "key": "alt+p",
    "action": "trigger",
    "sites": "",
    "sitesArray": [
      ""
    ],
    "trigger": "ctrl+shfit+u",
    "activeInInputs": true,
    "blacklist": false
  }
]
"""
text_area.send_keys(shortcut_string)
button = driver.find_element("xpath","/html/body/div[1]/section/div/section/div[2]/div[2]/div[2]/div/button")
button.click()
main_button = driver.find_element("xpath","/html/body/div[1]/section/div/nav/ul/li[1]/a")
main_button.click();
save_button = driver.find_element("xpath","/html/body/div[1]/section/div/section/div[1]/div[2]/div[2]/div/button")
save_button.click();

driver.get("https://codeforces.com/contest/1824")
keyAction.key_down(Keys.ALT).send_keys("p").key_up(Keys.ALT);

input("HEllo")
driver.quit()
