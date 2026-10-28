// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x7701d88
// body: available
// range: 0x7701d88-0x7701ee7 inclusive
// range: 0x7701ef0-0x770216f inclusive
// range: 0x77021cc-0x77021df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7701ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770215c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770216c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77021dc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077021cc) */

undefined8 Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09522946 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    FUN_03f5c2a4(&DAT_09187230);
    DAT_09522946 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x38);
  if (iVar1 - 2U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_07701f88;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_07701f78;
  }
  if (iVar1 != 0) {
    return 0;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a5d0) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07701eb8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5d0,0);
LAB_07701eb8:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07702114;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_07702114:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(param_1 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
      return 0;
    }
    plVar8 = *(long **)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917ac98) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07701f4c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ac98,0);
LAB_07701f4c:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    thunk_FUN_03f5d7b8();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
      uVar4 = 1;
LAB_077020dc:
      *(undefined4 *)(param_1 + 0x10) = uVar4;
      return 1;
    }
LAB_07701f78:
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50));
LAB_07701f88:
    plVar8 = *(long **)(param_1 + 0x50);
    if (plVar8 == (long *)0x0) {
LAB_07701fac:
      plVar8 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_09187210 + 0x130)) goto LAB_07701fac;
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) !=
          DAT_09187210) {
        plVar8 = (long *)0x0;
      }
    }
    uVar3 = Newtonsoft_Json_Linq_JsonPath_PathFilter__GetNextScanValue
                      (*(undefined8 *)(param_1 + 0x48),plVar8);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8();
    plVar8 = *(long **)(param_1 + 0x50);
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_09187230 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) !=
          DAT_09187230)) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          *(undefined8 *)(param_1 + 0x18) = plVar8;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),plVar8);
          uVar4 = 3;
          goto LAB_077020dc;
        }
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = System_String__op_Equality(plVar8[0xc],*(undefined8 *)(lVar9 + 0x10),0);
        if ((uVar6 & 1) != 0) {
          uVar3 = Newtonsoft_Json_Linq_JProperty__get_Value(plVar8,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8();
          uVar4 = 2;
          goto LAB_077020dc;
        }
      }
      goto LAB_07701f88;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
  } while( true );
}

