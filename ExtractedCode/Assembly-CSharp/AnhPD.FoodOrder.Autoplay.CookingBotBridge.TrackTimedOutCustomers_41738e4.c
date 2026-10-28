// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$TrackTimedOutCustomers
// address: 0x41738e4
// body: available
// range: 0x41738e4-0x4173bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4173bb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4173bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotBridge__TrackTimedOutCustomers(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_095165e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2308);
    FUN_03f5c2a4(&DAT_091a34b8);
    FUN_03f5c2a4(&DAT_091a34c0);
    FUN_03f5c2a4(&DAT_091a2310);
    FUN_03f5c2a4(&DAT_091a2318);
    FUN_03f5c2a4(&DAT_091a34c8);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a82c8);
    FUN_03f5c2a4(&DAT_091ab458);
    FUN_03f5c2a4(&DAT_091ab490);
    DAT_095165e3 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_053d74ac(*(long *)(param_1 + 0x70),DAT_091a82b8);
    if ((param_2 != 0) && (*(long *)(param_2 + 0x58) != 0)) {
      FUN_057e185c(&local_b8,*(long *)(param_2 + 0x58),DAT_091ab458);
      local_70 = local_a8;
      puStack_78 = puStack_b0;
      local_80 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_80;
      while (uVar1 = FUN_071bd28c(&local_80,DAT_091a2310), (uVar1 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053d8048(*(long *)(param_1 + 0x70),*(undefined4 *)(local_70 + 0x10),DAT_091a82b0);
      }
      FUN_071bd288(&local_80,DAT_091a2308);
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_053d79cc(&local_b8,*(long *)(param_1 + 0x78),DAT_091a82c8);
        local_90 = local_a8;
        puStack_98 = puStack_b0;
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_a0;
        while (uVar2 = FUN_071ad430(&local_a0,DAT_091a34c0), uVar1 = local_90, (uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = FUN_053d750c(*(long *)(param_1 + 0x70),local_90 & 0xffffffff,DAT_091a82c0);
          if ((uVar2 & 1) == 0) {
            if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053d8048(*(long *)(param_1 + 0x80),uVar1 & 0xffffffff,DAT_091a82b0);
          }
        }
        FUN_071ad42c(&local_a0,DAT_091a34b8);
        if (*(long *)(param_1 + 0x78) != 0) {
          FUN_053d74ac(*(long *)(param_1 + 0x78),DAT_091a82b8);
          if (*(long *)(param_2 + 0x58) != 0) {
            FUN_057e185c(&local_b8,*(long *)(param_2 + 0x58),DAT_091ab458);
            local_70 = local_a8;
            puStack_78 = puStack_b0;
            local_80 = local_b8;
            local_b8 = 0;
            puStack_b0 = &local_80;
            while( true ) {
              uVar1 = FUN_071bd28c(&local_80,DAT_091a2310);
              if ((uVar1 & 1) == 0) {
                FUN_071bd288(&local_80,DAT_091a2308);
                return;
              }
              if (local_70 == 0) break;
              if (*(char *)(local_70 + 0x14) == '\0') {
                if (*(long *)(local_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (0 < *(int *)(*(long *)(local_70 + 0x18) + 0x18)) {
                  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  FUN_053d8048(*(long *)(param_1 + 0x78),*(undefined4 *)(local_70 + 0x10),
                               DAT_091a82b0);
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

