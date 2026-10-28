// rea decompile_all
// name: CakeOrder.PopupMinigame.InputMiniScene$$GetTouch
// address: 0x4378fc8
// body: available
// range: 0x4378fc8-0x43790d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43790d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_InputMiniScene__GetTouch(void *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined1 auStack_64 [68];
  
  if ((DAT_09517923 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091856f0);
    FUN_03f5c2a4(&DAT_09186df8);
    DAT_09517923 = 1;
  }
  uVar1 = CakeOrder_PopupMinigame_InputMiniScene__get_IsSimulateInput();
  if ((uVar1 & 1) == 0) {
    UnityEngine_Input__GetTouch(auStack_64,param_2,0);
  }
  else {
    if ((**(long **)(DAT_09186df8 + 0xb8) == 0) ||
       (plVar5 = *(long **)(**(long **)(DAT_09186df8 + 0xb8) + 0x20), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_091856f0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 6) * 0x10 + 0x138);
          goto LAB_0437909c;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091856f0,6);
LAB_0437909c:
    (*(code *)*puVar2)(auStack_64,plVar5,param_2,puVar2[1]);
  }
  memcpy(param_1,auStack_64,0x44);
  return;
}

