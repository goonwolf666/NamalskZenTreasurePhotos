# Namalsk Zen Treasure Photos for DayZ

Custom Namalsk treasure photo sets for [ZenTreasure](https://github.com/ZenarchistCode/ZenModPack/wiki/ZenTreasure), for DayZ servers running [Zens Treasures](https://steamcommunity.com/sharedfiles/filedetails/?id=3721974505) on Namalsk.

The [Steam Workshop page for this mod is here](https://steamcommunity.com/sharedfiles/filedetails/?id=3721974505).

Shout-outs to Zen for making his [source code available](https://github.com/ZenarchistCode/ZenTreasure), and to Hunterz for the original treasure hunt concept!

## How It Works

This is a standalone PBO mod that overrides ZenTreasure's photo definitions for Namalsk. It uses `requiredAddons` to load after the base mod, a `CfgMod`/`photo_base` class override to redirect photo paths when Namalsk is detected, and a `$PBOPREFIX$` to assert the correct image paths regardless of mod load order.

> Overriding textures and descriptions independently was unreliable and load-order dependent — this approach just works.
