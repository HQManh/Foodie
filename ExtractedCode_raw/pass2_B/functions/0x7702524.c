// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x7702524
// body: available
// range: 0x7702524-0x7702697 inclusive
// range: 0x77026a0-0x770272f inclusive
// range: 0x770273c-0x77029cb inclusive
// range: 0x7702a28-0x7702a3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7702694 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770272c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77029b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77029bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77029c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77029c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77029c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7702a38 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_60;
  long *plStack_58;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_0952294a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_0952294a = 1;
  }
  plStack_58 = &local_48;
  lVar9 = *(long *)(param_1 + 0x38);
  local_60 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto LAB_07702864;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
LAB_077026a0:
    uVar3 = 0;
LAB_077028cc:
    lVar9 = local_60;
    if (local_60 != 0) {
      FUN_03ebcd78(&plStack_58);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar9);
    }
    return uVar3;
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
        goto LAB_07702668;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5d0,0);
LAB_07702668:
  uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
  *(undefined8 *)(local_48 + 0x40) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
  do {
    plVar8 = *(long **)(local_48 + 0x40);
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
          goto LAB_07702988;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_07702988:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(local_48 + 0x40) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x40),0);
      goto LAB_077026a0;
    }
    plVar8 = *(long **)(local_48 + 0x40);
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
          goto LAB_077026fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ac98,0);
LAB_077026fc:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(local_48 + 0x48) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(local_48 + 0x50) = *(undefined8 *)(local_48 + 0x48);
    thunk_FUN_03f5d7b8();
    while( true ) {
      plVar4 = *(long **)(local_48 + 0x50);
      plVar8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        plVar8 = (long *)0x0;
        if ((*(byte *)(DAT_09187210 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
           (plVar8 = plVar4,
           *(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) !=
           DAT_09187210)) {
          plVar8 = (long *)0x0;
        }
      }
      uVar3 = Newtonsoft_Json_Linq_JsonPath_PathFilter__GetNextScanValue
                        (*(undefined8 *)(local_48 + 0x48),plVar8);
      *(undefined8 *)(local_48 + 0x50) = uVar3;
      thunk_FUN_03f5d7b8();
      lVar5 = DAT_09187230;
      plVar8 = (long *)(local_48 + 0x50);
      plVar4 = (long *)*plVar8;
      if (plVar4 == (long *)0x0) break;
      bVar1 = *(byte *)(DAT_09187230 + 0x130);
      plVar8 = (long *)0x0;
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (plVar8 = plVar4,
         *(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09187230)) {
        plVar8 = (long *)0x0;
      }
      *(long *)(local_48 + 0x58) = (long)plVar8;
      plVar8 = (long *)0x0;
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (plVar8 = plVar4, *(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar5)) {
        plVar8 = (long *)0x0;
      }
      thunk_FUN_03f5d7b8((long *)(local_48 + 0x58),plVar8);
      if (*(long *)(local_48 + 0x58) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(lVar9 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_98,lVar5,DAT_091b05a8);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        *(undefined8 *)(local_48 + 0x68) = uStack_90;
        *(undefined8 *)(local_48 + 0x60) = local_98;
        *(undefined8 *)(local_48 + 0x70) = local_88;
        thunk_FUN_03f5d7b8(local_48 + 0x60,0);
        *(undefined4 *)(local_48 + 0x10) = 0xfffffffc;
LAB_07702864:
        while (uVar6 = FUN_071bd28c(local_48 + 0x60,DAT_091a45a0), (uVar6 & 1) != 0) {
          if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = System_String__op_Equality
                            (*(undefined8 *)(*(long *)(local_48 + 0x58) + 0x60),
                             *(undefined8 *)(local_48 + 0x70),0);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = Newtonsoft_Json_Linq_JProperty__get_Value(*(long *)(local_48 + 0x58),0);
            *(undefined8 *)(local_48 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8();
            uVar3 = 1;
            *(undefined4 *)(local_48 + 0x10) = 1;
            goto LAB_077028cc;
          }
        }
        Newtonsoft_Json_Linq_JsonPath_ScanMultipleFilter_<ExecuteFilter>d__2__<>m__Finally2();
        *(undefined8 *)(local_48 + 0x68) = 0;
        *(undefined8 *)(local_48 + 0x70) = 0;
        *(undefined8 *)(local_48 + 0x60) = 0;
      }
      *(undefined8 *)(local_48 + 0x58) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x58),0);
    }
    *plVar8 = 0;
    thunk_FUN_03f5d7b8(plVar8,0);
    *(undefined8 *)(local_48 + 0x48) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x48),0);
  } while( true );
}

