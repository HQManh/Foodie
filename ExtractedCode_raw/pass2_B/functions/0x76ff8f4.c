// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression$$IsMatch
// address: 0x76ff8f4
// body: available
// range: 0x76ff8f4-0x76ffcbb inclusive
// range: 0x76ffcc0-0x76ffdbf inclusive
// range: 0x76ffe00-0x76ffe13 inclusive
// range: 0x76ffe24-0x76ffe3f inclusive
// range: 0x76ffea0-0x76fff3f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ff9d8 to 0x4ab3c44 FUN_04ab3c44 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76ffcb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffdbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe28 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ffe3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fff3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076ffe24) */
/* WARNING: Removing unreachable block (ram,0x076fff3c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__IsMatch
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  lVar1 = param_1;
  if ((DAT_09522935 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9308);
    FUN_03f5c2a4(&DAT_091cb208);
    FUN_03f5c2a4(&DAT_0917a0c0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    lVar1 = FUN_03f5c2a4(&DAT_09185b10);
    DAT_09522935 = 1;
  }
  iVar11 = *(int *)(param_1 + 0x10);
  plVar2 = (long *)Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__GetResult
                             (lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x18));
  if (iVar11 == 3) {
    uVar3 = FUN_04ab3c44(plVar2,DAT_091c9308);
    return uVar3;
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar2;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917a5d0) {
        puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_076ffa34;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a5d0,0);
LAB_076ffa34:
  plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar2;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_076ffaa8;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076ffaa8:
  uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
  if ((uVar3 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar5 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__GetResult
                      (uVar3,param_2,param_3,*(undefined8 *)(param_1 + 0x20));
    plVar6 = (long *)thunk_FUN_03f99350(uVar5,DAT_0917a0c0);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_04b08b78(uVar5,DAT_091cb208);
    }
    uVar10 = 0;
    do {
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917ac98) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076ffb60;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ac98,0);
LAB_076ffb60:
      uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917a5d0) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076ffbc0;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a5d0,0);
LAB_076ffbc0:
      plVar7 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076ffc28;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_076ffc28:
        uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          iVar11 = 9;
          goto LAB_076ffcd8;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917ac98) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076ffc8c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917ac98,0);
LAB_076ffc8c:
        uVar8 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        uVar3 = Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__MatchTokens
                          (param_1,uVar5,uVar8,param_4);
      } while ((uVar3 & 1) == 0);
      uVar10 = 1;
      iVar11 = 8;
LAB_076ffcd8:
      if (plVar7 != (long *)0x0) {
        lVar1 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185a58) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_076ffd38;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_076ffd38:
        (*(code *)*puVar4)(plVar7,puVar4[1]);
      }
      if ((iVar11 != 9) && (iVar11 != 0)) goto LAB_076ffe04;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076ffda8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076ffda8:
      uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    } while ((uVar3 & 1) != 0);
    iVar11 = 10;
LAB_076ffe04:
    uVar10 = iVar11 == 8 & uVar10;
  }
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076fff04;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076fff04:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return (ulong)uVar10;
}

