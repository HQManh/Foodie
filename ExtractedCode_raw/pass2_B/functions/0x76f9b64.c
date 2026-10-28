// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x76f9b64
// body: available
// range: 0x76f9b64-0x76f9cb7 inclusive
// range: 0x76f9cc0-0x76f9e9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f9cb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f9e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_0952290c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adcc0);
    DAT_0952290c = 1;
  }
  plStack_50 = &local_48;
  lVar7 = *(long *)(param_1 + 0x38);
  local_58 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto LAB_076f9d84;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a5d0) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076f9c88;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a5d0,0);
LAB_076f9c88:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined8 *)(local_48 + 0x50) = uVar2;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
  do {
    plVar6 = *(long **)(local_48 + 0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076f9e60;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076f9e60:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(local_48 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x50),0);
      return 0;
    }
    plVar6 = *(long **)(local_48 + 0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917ac98) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076f9d1c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac98,0);
LAB_076f9d1c:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(local_48 + 0x58) = uVar2;
    thunk_FUN_03f5d7b8();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(lVar7 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05797d74(&local_88,lVar3,DAT_091adcc0);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    *(undefined8 *)(local_48 + 0x68) = uStack_80;
    *(undefined8 *)(local_48 + 0x60) = local_88;
    *(undefined8 *)(local_48 + 0x70) = local_78;
    thunk_FUN_03f5d7b8(local_48 + 0x60,0);
    *(undefined4 *)(local_48 + 0x10) = 0xfffffffc;
LAB_076f9d84:
    while (uVar4 = FUN_071ad7a4(local_48 + 0x60,DAT_091a34d8), (uVar4 & 1) != 0) {
      lVar3 = Newtonsoft_Json_Linq_JsonPath_PathFilter__GetTokenIndex
                        (*(undefined8 *)(local_48 + 0x58),*(undefined8 *)(local_48 + 0x40),
                         *(undefined4 *)(local_48 + 0x70));
      if (lVar3 != 0) {
        *(long *)(local_48 + 0x18) = lVar3;
        thunk_FUN_03f5d7b8();
        *(undefined4 *)(local_48 + 0x10) = 1;
        return 1;
      }
    }
    Newtonsoft_Json_Linq_JsonPath_ArrayMultipleIndexFilter_<ExecuteFilter>d__2__<>m__Finally2();
    *(undefined8 *)(local_48 + 0x60) = 0;
    *(undefined8 *)(local_48 + 0x58) = 0;
    *(undefined8 *)(local_48 + 0x70) = 0;
    *(undefined8 *)(local_48 + 0x68) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x58),0);
  } while( true );
}

