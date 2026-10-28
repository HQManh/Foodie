// rea decompile_all
// name: TrungKien.UI.NewFearther.UINextFeatherButton$$GetToolIcon
// address: 0x4086fa4
// body: available
// range: 0x4086fa4-0x4087577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4087098 to 0x4086670 TrungKien.UI.NewFearther.NewFeatherConfig$$GetIconNewFeather (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408724c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40874a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4087554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4087558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408755c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4087560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4087564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408756c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4087574 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not tex
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04087570) */
/* WARNING: Removing unreachable block (ram,0x04087568) */

undefined8
TrungKien_UI_NewFearther_UINextFeatherButton__GetToolIcon
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  
  if ((DAT_09515ca3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c470);
    DAT_09515ca3 = 1;
  }
  if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = TrungKien_UI_NewFearther_UIPopupNewFeather__IsRestaurantMilestone(param_2,param_3);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNewToolIds(param_2,param_3);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a768) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04087114;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a768,0);
LAB_04087114:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      do {
        do {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04087198;
              }
              uVar1 = uVar1 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04087198:
          uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar1 & 1) == 0) {
            uVar2 = 0;
            iVar9 = 7;
            goto LAB_04087268;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917ae48) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_040871fc;
              }
              uVar1 = uVar1 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ae48,0);
LAB_040871fc:
          uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(0,uVar2);
          }
          lVar7 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindConfigByToolId();
        } while (lVar7 == 0);
        uVar2 = TrungKien_UI_NewFearther_NewFeatherConfig__GetIconNewFeather();
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
      } while ((uVar1 & 1) == 0);
      iVar9 = 6;
LAB_04087268:
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185a58) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040872c8;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_040872c8:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      if (iVar9 != 7) {
        if (iVar9 == 6) {
          return uVar2;
        }
        if (iVar9 != 0) {
          return 0;
        }
      }
      if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = (long *)TrungKien_UI_NewFearther_UIPopupNewFeather__GetNewObstacleKeys
                                 (param_2,param_3);
      if (plVar3 != (long *)0x0) {
        lVar7 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917a768) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04087364;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a768,0);
LAB_04087364:
        plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        do {
          do {
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_040873e8;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_040873e8:
            uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            uVar8 = uVar1 & 0xffffffff;
            if ((uVar1 & 1) == 0) {
              uVar8 = 0;
              uVar5 = uVar2;
              goto LAB_040874c0;
            }
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917ae48) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_04087450;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ae48,0);
LAB_04087450:
            uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(0,uVar5);
            }
            lVar7 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindObstacleConfig();
          } while (lVar7 == 0);
          uVar5 = TrungKien_UI_NewFearther_NewFeatherConfig__GetIconNewFeather();
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
        } while ((uVar1 & 1) == 0);
LAB_040874c0:
        if (plVar3 != (long *)0x0) {
          lVar7 = *plVar3;
          uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar1 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185a58) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0408751c;
              }
              uVar1 = uVar1 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0408751c:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        return uVar5;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    if (*(int *)(DAT_0918c470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = TrungKien_UI_NewFearther_UIPopupNewFeather__GetNextMapId(param_2);
    if (lVar7 != 0) {
      lVar7 = TrungKien_UI_NewFearther_UINewFeartherConfig__FindRestaurantConfig(lVar7,uVar2);
      if (lVar7 == 0) {
        return 0;
      }
      uVar2 = TrungKien_UI_NewFearther_NewFeatherConfig__GetIconNewFeather();
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

