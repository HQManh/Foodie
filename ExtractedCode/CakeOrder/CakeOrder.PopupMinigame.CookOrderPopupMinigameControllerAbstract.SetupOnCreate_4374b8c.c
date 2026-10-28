// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameControllerAbstract$$SetupOnCreate
// address: 0x4374b8c
// body: available
// range: 0x4374b8c-0x4374e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4374e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4374e28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__SetupOnCreate
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *local_68;
  
  if ((DAT_095178fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdc50);
    FUN_03f5c2a4(&DAT_091868f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095178fd = 1;
  }
  local_68 = (long *)0x0;
  puVar9 = (undefined8 *)(param_4 + 0x58);
  *puVar9 = param_5;
  thunk_FUN_03f5d7b8(puVar9,param_5);
  uVar10 = *(undefined8 *)(param_4 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_04374e24;
    param_6 = *(undefined8 *)(*(long *)(param_4 + 0x30) + 0x20);
  }
  *(undefined8 *)(param_4 + 0x40) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x40),param_6);
  uVar10 = *(undefined8 *)(param_4 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar10,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
  }
  else {
    lVar4 = *(long *)(param_4 + 0x38);
  }
  if (lVar4 != 0) {
    UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar4,0);
    if (*(char *)(param_4 + 0x50) == '\0') {
      lVar4 = *(long *)(param_4 + 0x48);
      if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar1)) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar5 = *(long *)(lVar4 + uVar3 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_04374e24;
          uVar6 = FUN_04b7d49c(lVar5,&local_68,DAT_091cdc50);
          plVar2 = local_68;
          if ((uVar6 & 1) != 0) {
            if (local_68 == (long *)0x0) goto LAB_04374e24;
            lVar5 = *local_68;
            uVar10 = *puVar9;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_091868f8) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_04374e00;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_091868f8,0);
LAB_04374e00:
            (*(code *)*puVar7)(plVar2,uVar10,puVar7[1]);
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (int)uVar1);
      }
    }
    else {
      uVar10 = UnityEngine_Component__get_transform(param_4,0);
      CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__<SetupOnCreate>g__SetCameraForChildRecursive_34_0
                (param_4,uVar10);
    }
    CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__ApplyUnscaledTime(param_4);
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095175b2 == '\0') {
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_095175b2 = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    return *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
  }
LAB_04374e24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

