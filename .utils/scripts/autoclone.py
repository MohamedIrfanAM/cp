from playwright.sync_api import sync_playwright
from pathlib import Path
import pywinctl as pwctl

with sync_playwright() as p:

    path_to_extension = Path(__file__).parent.joinpath("competitive_companion")
    browser = p.chromium.launch_persistent_context(
        "",
        headless=True,
        slow_mo = 10000,
        args=[
            f"--disable-extensions-except={path_to_extension}",
            f"--load-extension={path_to_extension}",
        ],
    )

    page = browser.new_page()
    page.goto("https://codeforces.com/contest/1400")

    print(pwctl.getAllTitles())
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.keyboard.press('Tab')
    page.wait_for_timeout(10000)
    page.keyboard.press("Alt+P")
    page.wait_for_timeout(10000)
    print(page.title())

    browser.close()
