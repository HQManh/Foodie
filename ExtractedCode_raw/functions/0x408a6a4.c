// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$HasConfiguredNewFeature
// address: 0x408a6a4
// body: available
// range: 0x408a6a4-0x408ab87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408aaac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab7c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408ab84 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0408ab80) */
/* WARNING: Removing unreachable block (ram,0x0408ab78) */

uint TrungKien_UI_NewFearther_UIPopupNewFeather__HasConfiguredNewFeature
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  
  if ((DAT_09515cb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515cb1 = 1;
  }
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNewToolIds(param_1,param_2);
  if (plVar2 == (long *)0x0) {
LAB_0408ab74:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a768) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0408a7a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a768,0);
LAB_0408a7a0:
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0408a81c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0408a81c:
    uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      iVar9 = 5;
      goto LAB_0408a8bc;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917ae48) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0408a884;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae48,0);
LAB_0408a884:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar4,uVar4);
    }
    lVar5 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindConfigByToolId(param_3);
  } while (lVar5 == 0);
  iVar9 = 4;
LAB_0408a8bc:
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0408a91c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0408a91c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if ((iVar9 == 5) || ((iVar9 != 4 && (iVar9 == 0)))) {
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNewObstacleKeys(param_1,param_2)
    ;
    if (plVar2 == (long *)0x0) goto LAB_0408ab74;
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a768) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0408a9b0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a768,0);
LAB_0408a9b0:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0408aa1c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0408aa1c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      uVar8 = uVar6 & 0xffffffff;
      if ((uVar6 & 1) == 0) {
        uVar8 = 0;
        goto LAB_0408aac4;
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917ae48) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0408aa84;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ae48,0);
LAB_0408aa84:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      lVar5 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindObstacleConfig(param_3);
    } while (lVar5 == 0);
    uVar1 = 1;
LAB_0408aac4:
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185a58) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0408ab24;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0408ab24:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    if ((uVar8 & 1) == 0) {
      uVar1 = 0;
    }
  }
  return uVar1 & 1;
}

