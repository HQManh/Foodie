// rea decompile_all
// name: CookingGraph.IngredientQueueGenerator.<>c__DisplayClass4_0.<<OrderedItems>g__Walk|0>d$$MoveNext
// address: 0x44388c8
// body: available
// range: 0x44388c8-0x4438b7b inclusive
// range: 0x4438bb0-0x4438dab inclusive
// range: 0x4438df8-0x4438e0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4438b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438b6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438b78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4438e08 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__MoveNext
          (long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_50;
  long *plStack_48;
  long local_38;
  
  local_38 = param_1;
  if ((DAT_09517fd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b38);
    FUN_03f5c2a4(&DAT_091a3b40);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091aecc0);
    FUN_03f5c2a4(&DAT_091aeca8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_0917c840);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517fd5 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x38);
  plStack_48 = &local_38;
  local_50 = 0;
  if (iVar2 == 2) goto LAB_04438c48;
  if (iVar2 == 1) {
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar2 == 0) {
      lVar8 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x10) != 0) {
          lVar8 = *(long *)(lVar8 + 0x28);
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_03f9944c(DAT_0917c840);
            FUN_057e0400(lVar8,DAT_091aeca8);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          FUN_057e185c(&local_88,lVar8,DAT_091aecc0);
          uStack_68 = uStack_80;
          local_70 = local_88;
          local_60 = local_78;
          *(undefined8 *)(param_1 + 0x48) = uStack_80;
          *(undefined8 *)(param_1 + 0x40) = local_88;
          *(undefined8 *)(param_1 + 0x50) = local_78;
          thunk_FUN_03f5d7b8(param_1 + 0x40,0);
          *(undefined4 *)(local_38 + 0x10) = 0xfffffffd;
          while (uVar4 = FUN_071bd28c(local_38 + 0x40,DAT_091a3b38), (uVar4 & 1) != 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar5 = (long *)CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0__<OrderedItems>g__Walk_0
                                       (lVar10,*(undefined8 *)(local_38 + 0x50));
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a598) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04438c28;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a598,0);
LAB_04438c28:
            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            *(undefined8 *)(local_38 + 0x58) = uVar7;
            thunk_FUN_03f5d7b8();
            param_1 = local_38;
LAB_04438c48:
            plVar5 = *(long **)(param_1 + 0x58);
            *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04438ca4;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_04438ca4:
            uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar4 & 1) != 0) {
              plVar5 = *(long **)(local_38 + 0x58);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *plVar5;
              uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar4 == 0) goto LAB_04438d34;
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_04438d1c;
            }
            CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__<>m__Finally2
                      ();
            *(undefined8 *)(local_38 + 0x58) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(local_38 + 0x58),0);
          }
          CookingGraph_IngredientQueueGenerator_<>c__DisplayClass4_0_<<OrderedItems>g__Walk_0>d__<>m__Finally1
                    (local_38);
          uVar7 = 0;
          *(undefined8 *)(local_38 + 0x48) = 0;
          *(undefined8 *)(local_38 + 0x50) = 0;
          *(undefined8 *)(local_38 + 0x40) = 0;
          goto LAB_04438d7c;
        }
        plVar5 = *(long **)(lVar8 + 0x20);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else if (*plVar5 != DAT_09186c00) {
          plVar5 = (long *)0x0;
        }
        lVar1 = 0x14;
        if (-1 < *(int *)(lVar8 + 0x18)) {
          lVar1 = 0x18;
        }
        iVar2 = *(int *)(lVar8 + lVar1);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar3 = UnityEngine_Object__op_Equality(plVar5,0,0);
        if ((bVar3 & -1 < iVar2) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x30);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (iVar2 < *(int *)(lVar10 + 0x18)) {
            plVar5 = (long *)FUN_057e0998(lVar10,iVar2,DAT_091ada40);
          }
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Inequality(plVar5,0,0);
        if ((uVar4 & 1) != 0) {
          *(long *)(local_38 + 0x18) = (long)plVar5;
          thunk_FUN_03f5d7b8((long *)(local_38 + 0x18),plVar5);
          uVar7 = 1;
          *(undefined4 *)(local_38 + 0x10) = 1;
          goto LAB_04438d7c;
        }
      }
    }
    uVar7 = 0;
  }
  goto LAB_04438d7c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_04438d1c:
    if (*(long *)(piVar9 + -2) == DAT_0917ac48) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04438d50;
    }
  }
LAB_04438d34:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ac48,0);
LAB_04438d50:
  uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  *(undefined8 *)(local_38 + 0x18) = uVar7;
  thunk_FUN_03f5d7b8();
  uVar7 = 1;
  *(undefined4 *)(local_38 + 0x10) = 2;
LAB_04438d7c:
  lVar10 = local_50;
  if (local_50 != 0) {
    FUN_039b8648(&plStack_48);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(lVar10);
  }
  return uVar7;
}

