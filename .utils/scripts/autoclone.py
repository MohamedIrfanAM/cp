from playwright.sync_api import sync_playwright
from pathlib import Path

with sync_playwright() as p:

    path_to_extension = Path(__file__).parent.joinpath("competitive_companion.xpi")
    browser = p.firefox.launch_persistent_context(
        "",
        headless=False,
        slow_mo = 10000,
        args=[
            f"--disable-extensions-except={path_to_extension}",
            f"--load-extension={path_to_extension}",
        ],
    )
    """ browser = p.firefox.launch(headless=False,slow_mo=1000) """

    page = browser.new_page()
    page.goto("https://codeforces.com/contest/1400")
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.wait_for_timeout(10000)
    page.keyboard.press("Control+Shift+U")
    page.wait_for_timeout(10000)
    print(page.title())
    browser.close()
