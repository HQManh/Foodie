# Missing in-game functions (FSBurger, as of this session)

Found by scanning `TODO(unrecovered)` markers (674 in `Scripts`/`Plugins`) and by listing classes whose methods are empty shells from the compiled DLLs
(`tools/empty_methods.js` -> `tools/empty_methods.json`: 66 classes, 711 empty methods in CakeOrder/CakeOrder.InGame).

## Works now
- Level load from the real level designs (Day 1-100 for burger), customers/orders, belt, click-to-pick, stations auto-feed and cook,
  plate + burger assembly, serve to customer, coins, coin-fly effect, customer line / admission, HUD numbers (coins, customers left, day),
  scenery, result popup shown at the end (static).

## Missing - player-facing (high)
| Area | What is missing | Where |
|---|---|---|
| HUD buttons | Pause button, 2x speed button, booster buttons (hold, tap, counts, locks), timer text (15:00 is the prefab's static text) | `UIInLevelCakeOrder`, `UICakePauseMenuInGame`, `UIButtonHUD*`, `TimeControlCakeOrder`, `UICakeTimeCounterInGame` |
| Boosters / Save-me | Booster use, save-me popups (out of slots, customer out of time, belt drained), rescue refill | `UIPopupBoosterSaveMeBase`, `LevelSaveMeControl`, `BoosterAndSaveMeRemoteConfig`, `GridIngController` rescue paths |
| Level end | Real win/lose flow: result data, stars, rewards, next-day / retry buttons, win logo + firework, popup texts (localization tables not loaded) | `UIEndGameBase/Win/Lose`, `UIPopupWinLogo`, `LevelBaseCakeOrderAbstract.OnEndGame` |
| Tutorial | Day-1 guided tutorial (hand pointers, talk bubbles, focus canvas) | `TutorialManager`, `TutorialContext`, `TutorialTalkView`, `HandTutController`, `InGameUITutorial*` |
| Combo | Combo meter and combo text/VFX (`PlayComboVfx` is empty) | `InGameComboMechanicControl`, `UIInLevelHUDPuzzleStyle`, `CustomerLineController.PlayComboVfx` |
| Pricing | Real coin formula (a flat 10 per dish is used), tips, emotion bonus | `OrderPricingCalculator`, `OrderPricingService.SimulatePricing` |
| Customer patience | Wait-time values: Day-1 data has wait 0 (no timer), later days need `FTimer` flow checked; timeout -> save-me | `CustomerLineController.OnTimeout/AskSaveMe` |
| Serve shelf (original system) | Plate slots, merge queue, merge animations, whole-dish mode, result anims, `TryTakeDirect` drop-in, shelf slot unlock UI; replaced by a simplified direct path | `ServeShelfController` (52 stubs) |
| Items | Dirty plates / clean-dish staff, `SpawnBagSaveMe`, stack/random queue (`ShuffleStack`, slot groups) | `SpawnBagSaveMe`, `StackModeService`, `LevelInfo` (15 stubs) |

## Missing - audio / feedback (medium)
- `AudioManagerCakeOrder` is an empty shell (45/45): no sound at all, `Instance` is null (calls are guarded).
- Haptics, `CakeOrderDataTracking` (analytics, 20/20 empty) - harmless.

## Missing - background / polish (low)
- `InGameBackgroundsControl`: only `SetUp` rebuilt; weather change, tint, show/hide animations missing (`InGameSingleBackground` 9/9 empty).
- `BackgroundColorGradingControl`, `SceneTransitionBehaviourWeather`, `VoronoiSpawner`.
- Spine atlas material errors for Fox, DeepFryer, diamond shop (other maps).
- Remaining magenta materials / UI shaders.

## Other maps' mechanics (not FSBurger)
- BBQ/skewer (`Skew`, `SkewItem`, `PlateSkew`, `SimpleBBQOrder`), `CreamOnBeachOrder`, `SushiOrderStrategy`, pasta sauce, minigames
  (`PourLiquidController`, `MinigameDragItem`), home map UI (`UIHomeMapSection`, `HomeBuilding`, `HomeCustomerParade`).

## Not recoverable from the DLL shells (needs original source)
- Anything inside the shell types listed above whose bodies are empty and have no Ghidra decompile worth rebuilding
  (e.g. UI base classes `SceneMainUI`, `UICakePopup`).

## Debug-only helpers (not original game)
- `FSBurgerDebugBootstrap` (level start, HUD bind, Day buttons, auto toggle, result popup), `FSBurgerAutoPlayer` (bot).
