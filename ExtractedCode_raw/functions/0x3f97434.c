// rea decompile_all
// name: FUN_03f97434
// address: 0x3f97434
// body: available
// range: 0x3f97434-0x3f9753b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f97538 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f97434(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  lVar10 = param_1[1];
  lVar9 = *param_1;
  lVar5 = param_1[3];
  lVar8 = param_1[2];
  param_1[1] = param_2[1];
  *param_1 = lVar4;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  param_2[1] = lVar10;
  *param_2 = lVar9;
  param_2[3] = lVar5;
  param_2[2] = lVar8;
  lVar5 = param_2[4];
  lVar8 = param_2[7];
  lVar7 = param_2[6];
  lVar4 = param_1[4];
  lVar6 = param_1[5];
  uStack_20 = (undefined4)param_1[7];
  uStack_1c = (undefined4)((ulong)param_1[7] >> 0x20);
  local_28 = (undefined4)param_1[6];
  uStack_24 = (undefined4)((ulong)param_1[6] >> 0x20);
  param_1[5] = param_2[5];
  param_1[4] = lVar5;
  param_1[7] = lVar8;
  param_1[6] = lVar7;
  *(char *)(param_2 + 4) = (char)lVar4;
  *(int *)(param_2 + 5) = (int)lVar6;
  *(ulong *)((long)param_2 + 0x34) = CONCAT44(uStack_20,uStack_24);
  *(ulong *)((long)param_2 + 0x2c) = CONCAT44(local_28,uStack_2c);
  *(undefined4 *)((long)param_2 + 0x3c) = uStack_1c;
  lVar4 = param_2[8];
  lVar7 = param_2[9];
  lVar6 = param_1[8];
  lVar8 = param_1[9];
  lVar5 = param_1[2];
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = lVar4;
  param_1[9] = lVar7;
  param_2[8] = lVar6;
  lVar4 = param_1[0xc];
  param_2[9] = lVar8;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = lVar4;
  lVar4 = param_1[0xd];
  *(undefined1 *)(param_2 + 3) = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = lVar4;
  lVar4 = param_1[10];
  lVar6 = param_2[2];
  param_1[1] = (long)((float)((ulong)lVar5 >> 0x20) * (float)(ulong)param_1[0xc]);
  *param_1 = (long)((float)lVar5 * (float)(ulong)param_1[0xc]);
  uVar3 = param_2[0xc];
  param_1[10] = param_2[10];
  param_2[10] = lVar4;
  lVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = lVar4;
  param_2[1] = (long)((float)((ulong)lVar6 >> 0x20) * (float)uVar3);
  *param_2 = (long)((float)lVar6 * (float)uVar3);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

