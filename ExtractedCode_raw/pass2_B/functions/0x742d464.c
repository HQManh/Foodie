// rea decompile_all
// name: System.String$$Compare
// address: 0x742d464
// body: available
// range: 0x742d464-0x742d897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742d640 to 0x74fe23c System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742d6b0 to 0x75ca184 System.SpanHelpers$$SequenceCompareTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742d7c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742d848 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742d84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__Compare
                (long param_1,uint param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  
  if ((DAT_09520ffb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09520ffb = 1;
  }
  if (5 < param_6) {
    System_ThrowHelper__ThrowArgumentException(0x31,0x2f,0);
  }
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 1;
    if (param_1 == 0) {
      uVar1 = 0xffffffff;
    }
    uVar2 = 0;
    if (param_1 != param_3) {
      uVar2 = uVar1;
    }
    return (ulong)uVar2;
  }
  if (param_5 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_0921e638);
    uVar11 = thunk_FUN_03fc39d4(&DAT_09206b98);
    System_ArgumentOutOfRangeException___ctor(uVar9,uVar10,uVar11,0);
    goto LAB_0742d7b0;
  }
  if ((int)(param_4 | param_2) < 0) {
    puVar8 = &DAT_0921d418;
    if ((int)param_2 < 0) {
      puVar8 = &DAT_0921d410;
    }
LAB_0742d7f8:
    uVar10 = thunk_FUN_03fc39d4(puVar8);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar11 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092049a8);
    System_ArgumentOutOfRangeException___ctor(uVar11,uVar10,uVar9,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091da238);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar10);
  }
  iVar3 = *(int *)(param_1 + 0x10) - param_2;
  if (iVar3 < 0) {
    puVar8 = &DAT_0921d410;
    goto LAB_0742d7f8;
  }
  if ((int)(*(int *)(param_3 + 0x10) - param_4) < 0) {
    puVar8 = &DAT_0921d418;
    goto LAB_0742d7f8;
  }
  if ((param_5 == 0) || ((param_1 == param_3 && (param_2 == param_4)))) {
    return 0;
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Math__Min(param_5,iVar3,0);
  uVar5 = System_Math__Min(param_5,*(int *)(param_3 + 0x10) - param_4,0);
  if ((int)param_6 < 3) {
    if (param_6 == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
      if (plVar6 == (long *)0x0) goto LAB_0742d84c;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
    }
    else {
      if (param_6 == 1) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (plVar6 == (long *)0x0) goto LAB_0742d84c;
        plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        goto joined_r0x0742d738;
      }
      if (param_6 != 2) goto LAB_0742d850;
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)**(long **)(DAT_091827f8 + 0xb8);
    }
    if (plVar6 == (long *)0x0) {
LAB_0742d84c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    pcVar12 = *(code **)(*plVar6 + 0x1b8);
    uVar10 = *(undefined8 *)(*plVar6 + 0x1c0);
    uVar11 = 0;
  }
  else {
    if (param_6 != 3) {
      if (param_6 == 4) {
        uVar7 = System_SpanHelpers__SequenceCompareTo
                          (param_1 + (ulong)param_2 * 2 + 0x14,uVar4,
                           param_3 + (ulong)param_4 * 2 + 0x14,uVar5,0);
        return uVar7;
      }
      if (param_6 == 5) {
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                          (param_1,param_2,uVar4,param_3,param_4,uVar5,0);
        return uVar7;
      }
LAB_0742d850:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar9 = thunk_FUN_03f9944c();
      uVar10 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_09219670);
      System_ArgumentException___ctor(uVar9,uVar10,uVar11,0);
LAB_0742d7b0:
      uVar10 = thunk_FUN_03fc39d4(&DAT_091da238);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar10);
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x0742d738:
    if (plVar6 == (long *)0x0) goto LAB_0742d84c;
    pcVar12 = *(code **)(*plVar6 + 0x1b8);
    uVar10 = *(undefined8 *)(*plVar6 + 0x1c0);
    uVar11 = 1;
  }
  uVar7 = (*pcVar12)(plVar6,param_1,param_2,uVar4,param_3,param_4,uVar5,uVar11,uVar10);
  return uVar7;
}

