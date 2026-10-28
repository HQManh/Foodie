// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$MoveNext
// address: 0x76f8e80
// body: available
// range: 0x76f8e80-0x76f8fe3 inclusive
// range: 0x76f8fec-0x76f93df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f8fe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f934c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9358 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f93d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f93dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  
  if ((DAT_09522907 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187208);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_09522907 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x38);
  if (iVar1 == 2) goto LAB_076f9248;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    plVar11 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a5d0) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076f8fb0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5d0,0);
LAB_076f8fb0:
    uVar3 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_076f8ff4:
  do {
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076f904c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076f904c:
    uVar9 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__<>m__Finally1();
      *(undefined8 *)(param_1 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
      return 0;
    }
    plVar11 = *(long **)(param_1 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917ac98) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076f90b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ac98,0);
LAB_076f90b8:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(ulong *)(lVar12 + 0x10);
    if ((uVar9 & 0xff) != 0) {
      lVar7 = Newtonsoft_Json_Linq_JsonPath_PathFilter__GetTokenIndex
                        (plVar11,*(undefined8 *)(param_1 + 0x40),uVar9 >> 0x20);
      if (lVar7 != 0) {
        *(long *)(param_1 + 0x18) = lVar7;
        thunk_FUN_03f5d7b8();
        uVar6 = 1;
        goto LAB_076f91b4;
      }
      goto LAB_076f8ff4;
    }
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      if (((*(byte *)(DAT_09187200 + 0x130) <= *(byte *)(lVar7 + 0x130)) &&
          (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09187200 + 0x130) * 8 + -8) ==
           DAT_09187200)) ||
         ((*(byte *)(DAT_09187208 + 0x130) <= *(byte *)(lVar7 + 0x130) &&
          (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(DAT_09187208 + 0x130) * 8 + -8) ==
           DAT_09187208)))) {
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a5d0) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_076f9228;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5d0,0);
LAB_076f9228:
        uVar3 = (*(code *)*puVar2)(plVar11,puVar2[1]);
        *(undefined8 *)(param_1 + 0x58) = uVar3;
        thunk_FUN_03f5d7b8();
LAB_076f9248:
        plVar11 = *(long **)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_076f92a4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076f92a4:
        uVar9 = (*(code *)*puVar2)(plVar11,puVar2[1]);
        if ((uVar9 & 1) != 0) {
          plVar11 = *(long **)(param_1 + 0x58);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 == 0) goto LAB_076f930c;
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          break;
        }
        Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__<>m__Finally2();
        *(undefined8 *)(param_1 + 0x58) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
        goto LAB_076f8ff4;
      }
    }
    cVar8 = '\0';
    if (*(long *)(param_1 + 0x40) != 0) {
      cVar8 = *(char *)(*(long *)(param_1 + 0x40) + 0x20);
    }
    if (cVar8 != '\0') {
      lVar12 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = (long *)System_Object__GetType(plVar11,0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar5 = thunk_FUN_03fc39d4(&DAT_09204910);
      uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar4 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonException___ctor(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091e5a08);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_0917ac98) {
      puVar2 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076f9328;
    }
  }
LAB_076f930c:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ac98,0);
LAB_076f9328:
  uVar3 = (*(code *)*puVar2)(plVar11,puVar2[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8();
  uVar6 = 2;
LAB_076f91b4:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return 1;
}

