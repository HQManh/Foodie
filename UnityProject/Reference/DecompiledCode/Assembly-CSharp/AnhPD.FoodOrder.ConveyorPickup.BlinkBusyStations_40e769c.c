// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$BlinkBusyStations
// address: 0x40e769c
// body: available
// range: 0x40e769c-0x40e7817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e7810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorPickup__BlinkBusyStations(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09516095 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516095 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_2 == (long *)0x0) {
LAB_040e7814:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
  if ((uVar1 & 1) != 0) {
    uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((**(long **)(DAT_091881a0 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar2 != 0)) {
        AnhPD_FoodOrder_LevelInfo__CollectBusyStations
                  (lVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_057e185c(&local_48,*(long *)(param_1 + 0x50),DAT_091ac068);
          while( true ) {
            uVar1 = FUN_071bd28c(&local_48,DAT_091a27d0);
            if ((uVar1 & 1) == 0) {
              FUN_071bd288(&local_48,DAT_091a27c8);
              return;
            }
            if (local_38 == 0) break;
            AnhPD_FoodOrder_CookingStation__PlayRejectBlink((int)param_2[0x25],local_38,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_040e7814;
    }
  }
  return;
}

