// rea decompile_all
// name: FUN_03fac0bc
// address: 0x3fac0bc
// body: available
// range: 0x3fac0bc-0x3fac173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fac0bc(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  long lVar7;
  int local_80 [3];
  undefined1 auStack_74 [28];
  int local_58;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x80);
  uVar3 = FUN_03fb8274(lVar7 + 0x20);
  if ((uVar3 & 1) != 0) {
    lVar7 = FUN_03fb4784(*(undefined8 *)(lVar7 + 0x60));
  }
  FUN_03f98df4(auStack_74,*(undefined8 *)(lVar7 + 0x68),&DAT_0953522c);
  local_80[0] = local_58 + (int)((ulong)(param_1 - lVar6) >> 5);
  iVar1 = *(int *)(DAT_09535220 + 0x7c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(DAT_09535220 + 0x78) / iVar1;
  }
  pvVar4 = bsearch(local_80,(void *)(DAT_09535218 + *(int *)(DAT_09535220 + 0x74)),(long)iVar1,
                   (long)iVar2,FUN_03fac174);
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    FUN_03f98d10(pvVar4,&DAT_0953522c);
    uVar5 = extraout_x1;
  }
  return uVar5;
}

