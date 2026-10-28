// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameControllerAbstract$$<SetupOnCreate>g__SetCameraForChildRecursive|34_0
// address: 0x4374e2c
// body: available
// range: 0x4374e2c-0x437511f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4375108 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437510c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4375110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4375114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437511c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04375118) */

void CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__<SetupOnCreate>g__SetCameraForChildRecursive_34_0
               (long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *local_38;
  
  if ((DAT_09517900 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5928);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091868f8);
    FUN_03f5c2a4(&DAT_0918c010);
    DAT_09517900 = 1;
  }
  local_38 = (long *)0x0;
  if (param_2 != 0) {
    uVar1 = FUN_04a6b048(param_2,&local_38,DAT_091c5928);
    plVar3 = local_38;
    if ((uVar1 & 1) != 0) {
      if (local_38 == (long *)0x0) goto LAB_04375114;
      lVar5 = *local_38;
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868f8) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04374f1c;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(local_38,DAT_091868f8,0);
LAB_04374f1c:
      (*(code *)*puVar2)(plVar3,uVar7,puVar2[1]);
    }
    plVar3 = (long *)UnityEngine_Transform__GetEnumerator(param_2,0);
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04374fb8;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04374fb8:
      uVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar1 & 1) == 0) {
        plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 == 0) goto LAB_043750c4;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_043750ac;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_04375020;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_04375020:
      plVar4 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918c010 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918c010 + 0x130) * 8 + -8) !=
            DAT_0918c010)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
      }
      CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__<SetupOnCreate>g__SetCameraForChildRecursive_34_0
                (param_1,plVar4);
    } while( true );
  }
LAB_04375114:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar6 = piVar6 + 4;
    if (uVar1 == 0) break;
LAB_043750ac:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_043750e0;
    }
  }
LAB_043750c4:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_043750e0:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}

