// rea decompile_all
// name: System.Globalization.HijriCalendar$$GetDatePart
// address: 0x7533db0
// body: available
// range: 0x7533db0-0x753401f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7533fc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7533fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753401c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_HijriCalendar__GetDatePart(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((DAT_09521880 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185118);
    DAT_09521880 = 1;
  }
  if (*(int *)(DAT_09185118 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Globalization_HijriCalendar__CheckTicksRange(param_2);
  iVar4 = System_Globalization_HijriCalendar__get_HijriAdjustment(param_1);
  lVar10 = param_2 / 864000000000 + (long)iVar4 + 1;
  auVar3 = SEXT816(lVar10 * 0x1e + -0x67eb16) * SEXT816(0x31512094b8a6407d);
  uVar2 = (int)(auVar3._8_8_ >> 0xb) - (auVar3._12_4_ >> 0x1f);
  uVar11 = (ulong)uVar2;
  uVar1 = uVar2 + 1;
  lVar5 = System_Globalization_HijriCalendar__DaysUpToHijriYear(param_1,uVar1);
  iVar4 = (**(code **)(*param_1 + 0x228))(param_1,uVar1,0,*(undefined8 *)(*param_1 + 0x230));
  lVar6 = DAT_09185118;
  if (lVar10 < lVar5) {
    lVar9 = lVar5 - iVar4;
  }
  else if (lVar10 == lVar5) {
    iVar4 = (**(code **)(*param_1 + 0x228))(param_1,uVar11,0,*(undefined8 *)(*param_1 + 0x230));
    lVar9 = lVar10 - iVar4;
    lVar6 = DAT_09185118;
  }
  else {
    lVar9 = lVar5 + iVar4;
    uVar2 = uVar2 + 2;
    if (lVar10 <= lVar9) {
      uVar2 = uVar1;
      lVar9 = lVar5;
    }
    uVar11 = (ulong)uVar2;
  }
  DAT_09185118 = lVar6;
  if ((param_3 != 0) && (uVar11 = lVar10 - lVar9, param_3 != 1)) {
    uVar12 = 0;
    do {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = DAT_09185118;
      }
      lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar10 == 0) goto LAB_07533fcc;
      if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_07533fc8;
      if ((long)uVar11 <= (long)*(int *)(lVar10 + uVar12 * 4 + 0x20)) {
        iVar4 = (int)uVar12 + 1;
        goto LAB_07533f5c;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0xc);
    iVar4 = 0xd;
LAB_07533f5c:
    if (param_3 == 2) {
      uVar11 = (ulong)(iVar4 - 1);
    }
    else {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar10 = *(long *)(*(long *)(DAT_09185118 + 0xb8) + 8);
        if (lVar10 == 0) {
LAB_07533fcc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(uint *)(lVar10 + 0x18) <= (uint)((long)iVar4 + -2)) {
LAB_07533fc8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (param_3 != 3) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_09205000);
        uVar7 = System_Environment__GetResourceString(uVar7,0);
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar8 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091ce8c0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar7);
      }
      uVar11 = (ulong)(uint)((int)uVar11 - *(int *)(lVar10 + ((long)iVar4 + -2) * 4 + 0x20));
    }
  }
  return uVar11 & 0xffffffff;
}

