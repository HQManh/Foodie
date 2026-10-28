// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer.<GetDescendants>d__36$$MoveNext
// address: 0x76dd974
// body: available
// range: 0x76dd974-0x76dde1f inclusive
// range: 0x76dde88-0x76dde9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dde04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dde98 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076dde88) */

undefined8 Newtonsoft_Json_Linq_JContainer_<GetDescendants>d__36__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_095227c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    DAT_095227c4 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 < 2) {
    plVar5 = *(long **)(param_1 + 0x28);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(char *)(param_1 + 0x24) != '\0') {
        *(long *)(param_1 + 0x18) = (long)plVar5;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),plVar5);
        uVar4 = 1;
        goto LAB_076dddb0;
      }
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0);
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x5e8))(plVar5,*(undefined8 *)(*plVar5 + 0x5f0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076ddba0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a5d0,0);
LAB_076ddba0:
    uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  else {
    if (iVar1 == 2) {
      plVar5 = *(long **)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(DAT_09187210 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) ==
            DAT_09187210)) {
          plVar5 = (long *)Newtonsoft_Json_Linq_JContainer__GetDescendants(plVar5,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076ddde0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a5d0,0);
LAB_076ddde0:
          uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
          *(undefined8 *)(param_1 + 0x40) = uVar2;
          uVar2 = thunk_FUN_03f5d7b8();
          goto LAB_076dda18;
        }
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
LAB_076dda18:
      plVar5 = *(long **)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar2);
      }
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076ddbd8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_076ddbd8:
      uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar7 & 1) != 0) {
        plVar5 = *(long **)(param_1 + 0x40);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076ddd90;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ac98,0);
LAB_076ddd90:
        uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8();
        uVar4 = 3;
        goto LAB_076dddb0;
      }
      Newtonsoft_Json_Linq_JContainer_<GetDescendants>d__36__<>m__Finally2();
      *(undefined8 *)(param_1 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09185b10) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_076ddcc0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_076ddcc0:
  uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  if ((uVar7 & 1) == 0) {
    Newtonsoft_Json_Linq_JContainer_<GetDescendants>d__36__<>m__Finally1();
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),0);
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_076ddd50;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ac98,0);
LAB_076ddd50:
  uVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  thunk_FUN_03f5d7b8();
  uVar4 = 2;
LAB_076dddb0:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

