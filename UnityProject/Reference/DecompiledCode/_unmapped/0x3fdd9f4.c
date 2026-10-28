// rea decompile_all
// name: FUN_03fdd9f4
// address: 0x3fdd9f4
// body: available
// range: 0x3fdd9f4-0x3fddb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdd9f4(long param_1,void *param_2,size_t param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1734);
  if ((int)uVar1 < 0xe) {
    iVar2 = uVar1 + 3;
    uVar3 = *(ushort *)(param_1 + 0x1730) | (ushort)(param_4 << (ulong)(uVar1 & 0x1f));
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = (uint)*(ushort *)(param_1 + 0x1730) | param_4 << (ulong)(uVar1 & 0x1f);
    *(short *)(param_1 + 0x1730) = (short)uVar1;
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)uVar1;
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar4) = *(undefined1 *)(param_1 + 0x1731);
    iVar2 = *(int *)(param_1 + 0x1734) + -0xd;
    uVar3 = (ushort)((param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
  }
  *(ushort *)(param_1 + 0x1730) = uVar3;
  *(int *)(param_1 + 0x1734) = iVar2;
  FUN_03fddb24(param_1);
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)param_3;
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)(param_3 >> 8);
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)~(uint)param_3;
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + lVar4) = (char)(~(uint)param_3 >> 8);
  if (param_3 != 0) {
    memcpy((void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28)),param_2,param_3);
  }
  *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  return;
}

