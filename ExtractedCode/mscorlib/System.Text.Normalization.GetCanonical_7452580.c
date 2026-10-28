// rea decompile_all
// name: System.Text.Normalization$$GetCanonical
// address: 0x7452580
// body: available
// range: 0x7452580-0x7452737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7452730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7452734 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_Normalization__GetCanonical
                (int param_1,long param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_3;
  if ((DAT_095210fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888e0);
    DAT_095210fe = 1;
  }
  if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Text_Normalization__GetCanonicalHangul(param_1,param_2,uVar7);
  if ((int)uVar4 <= (int)param_3) {
    if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Text_Normalization__CharMapIdx(param_1);
    if (uVar2 != 0) {
      if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(*(long *)(*(long *)(DAT_091888e0 + 0xb8) + 8) + (long)(int)uVar2 * 4) != param_1)
      {
        do {
          if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          piVar5 = (int *)(*(long *)(*(long *)(DAT_091888e0 + 0xb8) + 8) + (long)(int)uVar2 * 4);
          uVar6 = (uint)uVar7;
          if (*piVar5 == 0) {
            return uVar7;
          }
          if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
            FUN_03f5c424();
            piVar5 = (int *)((-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2) +
                            *(long *)(*(long *)(DAT_091888e0 + 0xb8) + 8));
          }
          iVar1 = *piVar5;
          if (iVar1 < 0x10000) {
            if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar3 = System_Text_Normalization__QuickCheck(iVar1,param_4);
            if (iVar3 != 0) goto LAB_074526c8;
            if (param_2 == 0) goto LAB_07452730;
            if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_07452734;
            uVar7 = (ulong)(uVar6 + 1);
            *(int *)(param_2 + (long)(int)uVar6 * 4 + 0x20) = iVar1;
          }
          else {
LAB_074526c8:
            if (*(int *)(DAT_091888e0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Text_Normalization__GetCanonical(iVar1,param_2,uVar7,param_4);
            uVar7 = uVar7 & 0xffffffff;
          }
          uVar2 = uVar2 + 1;
        } while( true );
      }
    }
    if (param_2 == 0) {
LAB_07452730:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(param_2 + 0x18) <= param_3) {
LAB_07452734:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar4 = (ulong)(param_3 + 1);
    *(int *)(param_2 + (long)(int)param_3 * 4 + 0x20) = param_1;
  }
  return uVar4;
}

