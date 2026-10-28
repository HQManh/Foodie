// rea decompile_all
// name: System.String$$StartsWith
// address: 0x742e624
// body: available
// range: 0x742e624-0x742e90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742e7d4 to 0x75c9ed0 System.SpanHelpers$$SequenceEqual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742e8bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742e8c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__StartsWith(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09521001 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521001 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar4,uVar6,0);
    goto LAB_0742e8a8;
  }
  if (param_1 == param_2) {
LAB_0742e6c4:
    if (5 < param_3) {
      System_ThrowHelper__ThrowArgumentException(0x31,0x2f,0);
    }
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) goto LAB_0742e6c4;
  if ((int)param_3 < 3) {
    if (param_3 == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar2 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
      if (plVar2 == (long *)0x0) goto LAB_0742e8c0;
      plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
    }
    else {
      if (param_3 == 1) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar2 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (plVar2 == (long *)0x0) goto LAB_0742e8c0;
        plVar2 = (long *)(**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
        goto joined_r0x0742e78c;
      }
      if (param_3 != 2) goto LAB_0742e8c4;
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar2 = (long *)**(long **)(DAT_091827f8 + 0xb8);
    }
    if (plVar2 == (long *)0x0) goto LAB_0742e8c0;
    lVar7 = *plVar2;
    uVar6 = 0;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        if (*(int *)(param_1 + 0x10) < iVar1) {
          return 0;
        }
        if (*(short *)(param_1 + 0x14) == *(short *)(param_2 + 0x14)) {
          if (iVar1 == 1) {
            return 1;
          }
          uVar3 = System_SpanHelpers__SequenceEqual
                            ((short *)(param_1 + 0x14),(short *)(param_2 + 0x14),(long)iVar1 << 1,0)
          ;
          return uVar3;
        }
        return 0;
      }
      if (param_3 == 5) {
        if (*(int *)(param_1 + 0x10) < iVar1) {
          return 0;
        }
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                          (param_1,0,iVar1,param_2,0,iVar1,0);
        return (ulong)(iVar1 == 0);
      }
LAB_0742e8c4:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09219670);
      System_ArgumentException___ctor(uVar4,uVar6,uVar5,0);
LAB_0742e8a8:
      uVar6 = thunk_FUN_03fc39d4(&DAT_091da388);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar6);
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x0742e78c:
    if (plVar2 == (long *)0x0) {
LAB_0742e8c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar6 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0742e874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar7 + 0x1c8))(plVar2,param_1,param_2,uVar6,*(undefined8 *)(lVar7 + 0x1d0));
  return uVar3;
}

