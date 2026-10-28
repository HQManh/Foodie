// rea decompile_all
// name: System.DateTimeFormat$$FormatDigits
// address: 0x759e268
// body: available
// range: 0x759e268-0x759e373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759e36c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759e370 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeFormat__FormatDigits(long param_1,int param_2,int param_3,ulong param_4)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short local_40 [20];
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  iVar4 = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  psVar2 = local_40 + 0xf;
  do {
    psVar3 = psVar2;
    iVar4 = iVar4 + 1;
    *psVar3 = (short)param_2 + (short)(param_2 / 10) * -10 + 0x30;
    if (0xffffffec < param_2 - 10U) break;
    psVar2 = psVar3 + -1;
    param_2 = param_2 / 10;
  } while (local_40 < psVar3);
  if (2 < param_3 && (param_4 & 1) == 0) {
    param_3 = 2;
  }
  if ((iVar4 < param_3) && (psVar2 = psVar3 + -1, local_40 < psVar3)) {
    do {
      psVar3 = psVar2;
      iVar4 = iVar4 + 1;
      *psVar3 = 0x30;
      if (param_3 <= iVar4) break;
      psVar2 = psVar3 + -1;
    } while (local_40 < psVar3);
  }
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0,psVar3);
    }
  }
  else {
    System_Text_StringBuilder__Append();
    if (*(long *)(lVar1 + 0x28) == local_18) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

