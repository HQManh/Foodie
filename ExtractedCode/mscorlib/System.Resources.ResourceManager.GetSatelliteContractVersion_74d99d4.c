// rea decompile_all
// name: System.Resources.ResourceManager$$GetSatelliteContractVersion
// address: 0x74d99d4
// body: available
// range: 0x74d99d4-0x74d9ed3 inclusive
// range: 0x74d9f8c-0x74d9f8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d9e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9eb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9ebc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9ec0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9ec4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9ed0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d9f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d9eb8) */

undefined8 System_Resources_ResourceManager__GetSatelliteContractVersion(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *extraout_x1;
  long lVar9;
  int *piVar10;
  
  if ((DAT_0952156f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a488);
    FUN_03f5c2a4(&DAT_0917ab38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b048);
    FUN_03f5c2a4(&DAT_09172b80);
    FUN_03f5c2a4(&DAT_0918a580);
    FUN_03f5c2a4(&DAT_0918cc90);
    DAT_0952156f = 1;
  }
  uVar1 = System_Reflection_Assembly__op_Equality(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    uVar7 = thunk_FUN_03fc39d4(&DAT_091fc040);
    uVar7 = System_Environment__GetResourceString(uVar7,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09216fc8);
    System_ArgumentNullException___ctor(uVar6,uVar8,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d7a90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    uVar7 = DAT_09172b80;
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
      lVar9 = (**(code **)(*param_1 + 0x228))(param_1,uVar7,0,*(undefined8 *)(*param_1 + 0x230));
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x18) == 0) {
          return 0;
        }
        if ((int)*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar2 = *(long **)(lVar9 + 0x20);
        if (plVar2 != (long *)0x0) {
          if (*plVar2 != DAT_0918a580) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          plVar2 = (long *)plVar2[2];
          goto LAB_074d9dfc;
        }
      }
    }
    else {
      plVar2 = (long *)System_Reflection_CustomAttributeData__GetCustomAttributes(param_1,0);
      if (plVar2 != (long *)0x0) {
        lVar9 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a488) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_074d9b88;
            }
            uVar1 = uVar1 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a488,0);
LAB_074d9b88:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        do {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar1 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_074d9c14;
              }
              uVar1 = uVar1 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_074d9c14:
          uVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((uVar1 & 1) == 0) {
            plVar2 = (long *)0x0;
            goto LAB_074d9d88;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar1 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917ab38) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_074d9c78;
              }
              uVar1 = uVar1 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ab38,0);
LAB_074d9c78:
          plVar2 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar5 = (long *)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          uVar7 = DAT_09172b80;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
          uVar1 = System_Type__op_Equality(uVar6,uVar7,0);
        } while ((uVar1 & 1) == 0);
        plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b048) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_074d9d5c;
            }
            uVar1 = uVar1 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b048,0);
LAB_074d9d5c:
        (*(code *)*puVar3)(plVar2,0,puVar3[1]);
        plVar2 = extraout_x1;
        if ((extraout_x1 != (long *)0x0) && (*extraout_x1 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(extraout_x1);
        }
LAB_074d9d88:
        if (plVar4 != (long *)0x0) {
          lVar9 = *plVar4;
          uVar1 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar1 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_09185a58) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_074d9de8;
              }
              uVar1 = uVar1 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_074d9de8:
          (*(code *)*puVar3)(plVar4,puVar3[1]);
        }
        if (plVar2 == (long *)0x0) {
          return 0;
        }
LAB_074d9dfc:
        uVar7 = thunk_FUN_03f9944c(DAT_0918cc90);
        System_Version___ctor(uVar7,plVar2,0);
        return uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

