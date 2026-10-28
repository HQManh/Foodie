// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.QueryScanFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x77013c4
// body: available
// range: 0x77013c4-0x77014f7 inclusive
// range: 0x7701500-0x770186f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77014f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770184c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770185c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7701868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770186c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_0952293f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    DAT_0952293f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x38);
  if (iVar1 != 2) {
    if (iVar1 == 1) goto LAB_077016f4;
    if (iVar1 != 0) {
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_077014c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a5d0,0);
LAB_077014c4:
    uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_07701508:
  do {
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07701560;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_07701560:
    uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(param_1 + 0x60) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),0);
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x60);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_077015cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ac98,0);
LAB_077015cc:
    plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(DAT_09187210 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) ==
          DAT_09187210)) {
        plVar9 = (long *)Newtonsoft_Json_Linq_JContainer__DescendantsAndSelf(plVar9,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a5d0) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_077016d0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a5d0,0);
LAB_077016d0:
        uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        *(undefined8 *)(param_1 + 0x68) = uVar3;
        thunk_FUN_03f5d7b8();
LAB_077016f4:
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
        do {
          plVar9 = *(long **)(param_1 + 0x68);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_07701754;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_07701754:
          uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
          if ((uVar7 & 1) == 0) goto LAB_07701834;
          plVar9 = *(long **)(param_1 + 0x68);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917ac98) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_077017c0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ac98,0);
LAB_077017c0:
          uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar9 = *(long **)(lVar10 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = (**(code **)(*plVar9 + 0x178))
                            (plVar9,*(undefined8 *)(param_1 + 0x40),uVar3,
                             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*plVar9 + 0x180));
          if ((uVar7 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
            uVar5 = 1;
            goto LAB_07701810;
          }
        } while( true );
      }
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = *(long **)(lVar10 + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(param_1 + 0x40),plVar9,*(undefined8 *)(param_1 + 0x50)
                       ,*(undefined8 *)(*plVar4 + 0x180));
    if ((uVar7 & 1) != 0) {
      *(long *)(param_1 + 0x18) = (long)plVar9;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),plVar9);
      uVar5 = 2;
LAB_07701810:
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      return 1;
    }
  } while( true );
LAB_07701834:
  Newtonsoft_Json_Linq_JsonPath_QueryScanFilter_<ExecuteFilter>d__2__<>m__Finally2();
  *(undefined8 *)(param_1 + 0x68) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),0);
  goto LAB_07701508;
}

