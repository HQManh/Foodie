// rea decompile_all
// name: thunk_FUN_03fabc90
// address: 0x3fc3b18
// body: available
// range: 0x3fc3b18-0x3fc3b1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03fabc90(undefined8 param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_64 [44];
  int iStack_38;
  ushort uStack_20;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  FUN_03f98df4(auStack_64,param_1,&DAT_0953522c);
  lVar6 = DAT_09535220;
  lVar5 = DAT_09535218;
  lVar2 = DAT_09535218 + *(int *)(DAT_09535220 + 0xbc);
  if (*param_2 == 0) {
    if (uStack_20 == 0) {
      return 0;
    }
    iVar3 = *(int *)(lVar2 + (long)iStack_38 * 4);
    *param_2 = lVar2 + (long)iStack_38 * 4;
  }
  else {
    piVar1 = (int *)(*param_2 + 4);
    if ((long)(int)(iStack_38 + (uint)uStack_20) <= (long)piVar1 - lVar2 >> 2) {
      return 0;
    }
    iVar3 = *piVar1;
    *param_2 = (long)piVar1;
  }
  if (iVar3 == -1) {
    return 0;
  }
  iVar4 = 0;
  if (*(int *)(lVar6 + 0xf4) != 0) {
    iVar4 = *(int *)(lVar6 + 0xf0) / *(int *)(lVar6 + 0xf4);
  }
  return lVar5 + *(int *)(lVar6 + 0xec) + (long)(iVar4 * iVar3);
}

