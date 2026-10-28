// rea decompile_all
// name: _GAME.SaveGame.SaveGameCodec$$BuildSummary
// address: 0x779fa58
// body: available
// range: 0x779fa58-0x77a0053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a004c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a0050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_SaveGame_SaveGameCodec__BuildSummary(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((DAT_09522e13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_091cab10);
    FUN_03f5c2a4(&DAT_091cab98);
    FUN_03f5c2a4(&DAT_091cb370);
    FUN_03f5c2a4(&DAT_091794f8);
    FUN_03f5c2a4(&DAT_09178100);
    FUN_03f5c2a4(&DAT_091780f8);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918a5b0);
    FUN_03f5c2a4(&DAT_091ef790);
    FUN_03f5c2a4(&DAT_091ef798);
    FUN_03f5c2a4(&DAT_091ef7a0);
    FUN_03f5c2a4(&DAT_091ef7a8);
    FUN_03f5c2a4(&DAT_09194140);
    FUN_03f5c2a4(&DAT_0921dc48);
    FUN_03f5c2a4(&DAT_0921c970);
    FUN_03f5c2a4(&DAT_09222a60);
    FUN_03f5c2a4(&DAT_09222f58);
    DAT_09522e13 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0918a5b0);
  System_Object___ctor(lVar5,0);
  uVar2 = _GAME_Bridge_CookOrderBridge__get_LevelsCompleted(0);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x10) = uVar2;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
      thunk_FUN_03f5d7b8();
      uVar14 = DAT_091b49d8;
      if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20);
        uVar6 = FUN_05a8eda4(uVar14);
        if ((uVar6 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          lVar7 = *(long *)(DAT_091b49d0 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_077a0050;
          uVar3 = CakeOrder_Shop_InAppShopDataAccess__get_IsRemoveAdsPermanent
                            (**(long **)(lVar7 + 0xb8),0);
          uVar3 = uVar3 & 1;
        }
        *(uint *)(lVar5 + 0x24) = uVar3;
        if (param_1 != 0) {
          if (((*(long *)(param_1 + 0x18) != 0) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 != 0)) &&
             (0 < (int)*(ulong *)(lVar7 + 0x18))) {
            uVar6 = 0;
            uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar6) goto LAB_077a004c;
              lVar15 = *(long *)(lVar7 + 0x20 + uVar6 * 8);
              if (lVar15 != 0) {
                lVar11 = *(long *)(lVar15 + 0x20);
                if (lVar11 != 0) {
                  iVar1 = *(int *)(lVar5 + 0x14);
                  if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                  lVar12 = puVar10[1];
                  if (lVar12 == 0) {
                    if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                    }
                    uVar14 = *puVar10;
                    lVar12 = thunk_FUN_03f9944c(DAT_091794f8);
                    FUN_053239c8(lVar12,uVar14,DAT_091ef790,0);
                    plVar8 = (long *)(*(long *)(DAT_09194140 + 0xb8) + 8);
                    *plVar8 = lVar12;
                    thunk_FUN_03f5d7b8(plVar8,lVar12);
                  }
                  iVar4 = FUN_04b0264c(lVar11,lVar12,DAT_091cab98);
                  *(int *)(lVar5 + 0x14) = iVar4 + iVar1;
                }
                lVar15 = *(long *)(lVar15 + 0x28);
                if (lVar15 != 0) {
                  iVar1 = *(int *)(lVar5 + 0x14);
                  if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                  lVar11 = puVar10[2];
                  if (lVar11 == 0) {
                    if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                    }
                    uVar14 = *puVar10;
                    lVar11 = thunk_FUN_03f9944c(DAT_091794f8);
                    FUN_053239c8(lVar11,uVar14,DAT_091ef798,0);
                    plVar8 = (long *)(*(long *)(DAT_09194140 + 0xb8) + 0x10);
                    *plVar8 = lVar11;
                    thunk_FUN_03f5d7b8(plVar8,lVar11);
                  }
                  iVar4 = FUN_04b0264c(lVar15,lVar11,DAT_091cab98);
                  *(int *)(lVar5 + 0x14) = iVar4 + iVar1;
                }
              }
              uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          if (((*(long *)(param_1 + 0x10) != 0) &&
              (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 != 0)) &&
             (0 < (int)*(ulong *)(lVar7 + 0x18))) {
            uVar6 = 0;
            uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar9 <= uVar6) {
LAB_077a004c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar15 = *(long *)(lVar7 + 0x20 + uVar6 * 8);
              if (lVar15 != 0) {
                uVar9 = System_String__op_Equality(*(undefined8 *)(lVar15 + 0x10),DAT_0921dc48,0);
                if ((uVar9 & 1) == 0) {
                  uVar9 = System_String__op_Equality(*(undefined8 *)(lVar15 + 0x10),DAT_09222a60,0);
                  if ((uVar9 & 1) != 0) {
                    uVar14 = *(undefined8 *)(lVar15 + 0x18);
                    if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                    lVar15 = puVar10[3];
                    if (lVar15 == 0) {
                      if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                      }
                      uVar13 = *puVar10;
                      lVar15 = thunk_FUN_03f9944c(DAT_091780f8);
                      FUN_05307ea0(lVar15,uVar13,DAT_091ef7a0,0);
                      plVar8 = (long *)(*(long *)(DAT_09194140 + 0xb8) + 0x18);
                      *plVar8 = lVar15;
                      thunk_FUN_03f5d7b8(plVar8,lVar15);
                    }
                    uVar14 = FUN_04b09abc(uVar14,lVar15,DAT_091cb370);
                    if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09194140);
                    }
                    puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                    lVar15 = puVar10[4];
                    if (lVar15 == 0) {
                      if (*(int *)(DAT_09194140 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09194140);
                        puVar10 = *(undefined8 **)(DAT_09194140 + 0xb8);
                      }
                      uVar13 = *puVar10;
                      lVar15 = thunk_FUN_03f9944c(DAT_09178100);
                      FUN_053080bc(lVar15,uVar13,DAT_091ef7a8,0);
                      plVar8 = (long *)(*(long *)(DAT_09194140 + 0xb8) + 0x20);
                      *plVar8 = lVar15;
                      thunk_FUN_03f5d7b8(plVar8,lVar15);
                    }
                    uVar2 = FUN_04b0249c(uVar14,lVar15,DAT_091cab10);
                    *(undefined4 *)(lVar5 + 0x20) = uVar2;
                  }
                }
                else {
                  if (*(long *)(lVar15 + 0x18) == 0) goto LAB_077a0050;
                  FUN_06fcbf70(*(long *)(lVar15 + 0x18),DAT_0921c970,lVar5 + 0x18,DAT_0919f9c8);
                  if (*(long *)(lVar15 + 0x18) == 0) goto LAB_077a0050;
                  FUN_06fcbf70(*(long *)(lVar15 + 0x18),DAT_09222f58,lVar5 + 0x1c,DAT_0919f9c8);
                }
              }
              uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          return lVar5;
        }
      }
    }
  }
LAB_077a0050:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

