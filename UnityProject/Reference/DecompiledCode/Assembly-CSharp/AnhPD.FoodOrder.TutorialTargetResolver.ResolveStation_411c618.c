// rea decompile_all
// name: AnhPD.FoodOrder.TutorialTargetResolver$$ResolveStation
// address: 0x411c618
// body: available
// range: 0x411c618-0x411c7ff inclusive
// range: 0x411c858-0x411c873 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411c7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x411c7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_TutorialTargetResolver__ResolveStation(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_0951626a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951626a = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar4 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  uVar4 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = System_String__IsNullOrEmpty(param_1,0);
    uVar4 = 0;
    if ((uVar1 & 1) == 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = AnhPD_FoodOrder_MessyController__GetCookingStations
                        (**(long **)(DAT_091881a0 + 0xb8),0);
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_057e185c(&local_68,lVar2,DAT_091ac068);
        uStack_48 = puStack_60;
        local_50 = local_68;
        local_40 = local_58;
        local_68 = 0;
        puStack_60 = &local_50;
        do {
          do {
            uVar1 = FUN_071bd28c(&local_50,DAT_091a27d0);
            lVar2 = local_40;
            if ((uVar1 & 1) == 0) {
              uVar4 = 0;
              goto LAB_0411c7d8;
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
          } while ((uVar3 & 1) == 0);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = System_String__op_Inequality(*(undefined8 *)(lVar2 + 0x28),param_1,0);
        } while (((uVar3 & 1) != 0) &&
                (uVar3 = System_String__op_Inequality(*(undefined8 *)(lVar2 + 0x30),param_1,0),
                (uVar3 & 1) != 0));
        uVar4 = *(undefined8 *)(lVar2 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar3 & 1) == 0) {
          uVar4 = UnityEngine_Component__get_transform(lVar2,0);
        }
        else {
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
        }
LAB_0411c7d8:
        if ((uVar1 & 1) == 0) {
          uVar4 = 0;
        }
        FUN_071bd288(&local_50,DAT_091a27c8);
      }
    }
  }
  return uVar4;
}

