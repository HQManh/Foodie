// rea decompile_all
// name: System.String$$EndsWith
// address: 0x742dbf4
// body: available
// range: 0x742dbf4-0x742dec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742de74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742de78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__EndsWith(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_09520ffe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09520ffe = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
    goto LAB_0742de60;
  }
  if ((param_1 == param_2) || (iVar2 = *(int *)(param_2 + 0x10), iVar2 == 0)) {
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
      plVar3 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
      if (plVar3 == (long *)0x0) goto LAB_0742de78;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    }
    else {
      if (param_3 == 1) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar3 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (plVar3 == (long *)0x0) goto LAB_0742de78;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        goto joined_r0x0742dde0;
      }
      if (param_3 != 2) goto LAB_0742de7c;
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = (long *)**(long **)(DAT_091827f8 + 0xb8);
    }
    if (plVar3 == (long *)0x0) {
LAB_0742de78:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar3;
    uVar7 = 0;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        if (*(int *)(param_1 + 0x10) < iVar2) {
          return 0;
        }
        iVar2 = System_SpanHelpers__SequenceCompareTo
                          (param_1 + (long)(*(int *)(param_1 + 0x10) - iVar2) * 2 + 0x14,iVar2,
                           param_2 + 0x14,iVar2,0);
LAB_0742de24:
        return (ulong)(iVar2 == 0);
      }
      if (param_3 == 5) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 < iVar2) {
          return 0;
        }
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                          (param_1,iVar1 - iVar2,iVar2,param_2,0,iVar2,0);
        goto LAB_0742de24;
      }
LAB_0742de7c:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09219670);
      System_ArgumentException___ctor(uVar5,uVar7,uVar6,0);
LAB_0742de60:
      uVar7 = thunk_FUN_03fc39d4(&DAT_091da2a0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar7);
    }
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)**(long **)(DAT_091827f8 + 0xb8);
joined_r0x0742dde0:
    if (plVar3 == (long *)0x0) goto LAB_0742de78;
    lVar8 = *plVar3;
    uVar7 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0742de04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar8 + 0x1d8))(plVar3,param_1,param_2,uVar7,*(undefined8 *)(lVar8 + 0x1e0));
  return uVar4;
}

