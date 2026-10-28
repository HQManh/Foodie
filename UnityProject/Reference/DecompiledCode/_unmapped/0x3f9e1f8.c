// rea decompile_all
// name: FUN_03f9e1f8
// address: 0x3f9e1f8
// body: available
// range: 0x3f9e1f8-0x3f9e2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f9e1f8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *param_2;
  lVar4 = param_2[3];
  lVar1 = param_2[2];
  lVar8 = param_1[1];
  lVar6 = *param_1;
  lVar5 = param_1[3];
  lVar7 = param_1[2];
  param_1[1] = param_2[1];
  *param_1 = lVar3;
  param_1[3] = lVar4;
  param_1[2] = lVar1;
  param_2[1] = lVar8;
  *param_2 = lVar6;
  param_2[3] = lVar5;
  param_2[2] = lVar7;
  lVar3 = param_1[4];
  lVar6 = param_1[7];
  lVar5 = param_1[6];
  *(char *)(param_1 + 4) = (char)param_2[4];
  lVar7 = param_1[5];
  lVar4 = param_2[7];
  lVar1 = param_2[6];
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[7] = lVar4;
  param_1[6] = lVar1;
  *(char *)(param_2 + 4) = (char)lVar3;
  lVar1 = param_2[9];
  param_2[7] = lVar6;
  param_2[6] = lVar5;
  lVar5 = param_1[2];
  lVar3 = param_1[8];
  lVar4 = param_1[9];
  *(int *)(param_2 + 5) = (int)lVar7;
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  lVar1 = param_2[0xc];
  *(undefined1 *)(param_1 + 3) = 0;
  param_2[8] = lVar3;
  lVar3 = param_1[0xc];
  param_1[0xc] = lVar1;
  param_2[9] = lVar4;
  param_2[0xc] = lVar3;
  lVar3 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[0xd] = lVar3;
  lVar3 = param_1[10];
  lVar1 = param_2[2];
  param_1[1] = (long)((float)((ulong)lVar5 >> 0x20) * (float)(ulong)param_1[0xc]);
  *param_1 = (long)((float)lVar5 * (float)(ulong)param_1[0xc]);
  uVar2 = param_2[0xc];
  param_1[10] = param_2[10];
  param_2[10] = lVar3;
  lVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = lVar3;
  param_2[1] = (long)((float)((ulong)lVar1 >> 0x20) * (float)uVar2);
  *param_2 = (long)((float)lVar1 * (float)uVar2);
  return;
}

