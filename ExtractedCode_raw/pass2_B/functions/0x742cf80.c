// rea decompile_all
// name: System.String$$Compare
// address: 0x742cf80
// body: available
// range: 0x742cf80-0x742d247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742d0e8 to 0x74fe23c System.Globalization.CompareInfo$$CompareOrdinalIgnoreCase (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742d14c to 0x742cdc8 System.String$$CompareOrdinalHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742d1e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742d244 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__Compare(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_09520ff9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09520ff9 = 1;
  }
  if (param_1 == param_2) {
    if (5 < param_3) {
      System_ThrowHelper__ThrowArgumentException(0x31,0x2f,0);
    }
    return 0;
  }
  if (param_1 == 0) {
    if (5 < param_3) {
      System_ThrowHelper__ThrowArgumentException(0x31,0x2f,0);
    }
    return 0xffffffff;
  }
  if (param_2 == 0) {
    if (5 < param_3) {
      System_ThrowHelper__ThrowArgumentException(0x31,0x2f,0);
    }
    return 1;
  }
  if ((int)param_3 < 3) {
    if (param_3 == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
      if (plVar4 == (long *)0x0) goto LAB_0742d1e8;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    }
    else {
      if (param_3 == 1) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (plVar4 == (long *)0x0) goto LAB_0742d1e8;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
        goto joined_r0x0742d1c0;
      }
      if (param_3 != 2) goto LAB_0742d1ec;
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)**(long **)(DAT_091827f8 + 0xb8);
    }
    if (plVar4 == (long *)0x0) {
LAB_0742d1e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar4;
    uVar8 = 0;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        uVar3 = (uint)*(ushort *)(param_1 + 0x14) - (uint)*(ushort *)(param_2 + 0x14);
        if (uVar3 != 0) {
          return (ulong)uVar3;
        }
        uVar5 = System_String__CompareOrdinalHelper(param_1,param_2);
        return uVar5;
      }
      if (param_3 == 5) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                          (param_1,0,uVar1,param_2,0,uVar2,0);
        return uVar5;
      }
LAB_0742d1ec:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar8 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09219670);
      System_ArgumentException___ctor(uVar8,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091da228);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar6);
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x0742d1c0:
    if (plVar4 == (long *)0x0) goto LAB_0742d1e8;
    lVar9 = *plVar4;
    uVar8 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0742d1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(lVar9 + 0x1a8))(plVar4,param_1,param_2,uVar8,*(undefined8 *)(lVar9 + 0x1b0));
  return uVar5;
}

