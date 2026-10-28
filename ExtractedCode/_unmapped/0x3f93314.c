// rea decompile_all
// name: FUN_03f93314
// address: 0x3f93314
// body: available
// range: 0x3f93314-0x3f9341b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f93314(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  byte *__src;
  byte bVar4;
  undefined1 auVar5 [16];
  
  bVar4 = (byte)*param_1;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (param_2 < 0xb) {
    auVar5._8_8_ = param_2 + 1;
    auVar5._0_8_ = (byte *)((long)param_1 + 2);
    bVar4 = 1;
    uVar3 = uVar1;
    __src = (byte *)param_1[2];
  }
  else {
    uVar3 = 10;
    if ((bVar4 & 1) != 0) {
      uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 < param_2) {
      auVar5 = FUN_03f65130(param_1,param_2 + 1);
    }
    else {
      auVar5 = FUN_03f65130(param_1,param_2 + 1);
    }
    bVar2 = (byte)*param_1;
    bVar4 = bVar2 & 1;
    uVar3 = (ulong)(bVar2 >> 1);
    __src = (byte *)((long)param_1 + 2);
    if ((bVar2 & 1) != 0) {
      uVar3 = param_1[1];
      __src = (byte *)param_1[2];
    }
  }
  if ((uVar3 + 1 & 0x7fffffffffffffff) != 0) {
    memmove(auVar5._0_8_,__src,(uVar3 + 1) * 2);
  }
  if (bVar4 != 0) {
    operator_delete(__src);
  }
  if (param_2 < 0xb) {
    *(byte *)param_1 = (byte)((int)uVar1 << 1);
  }
  else {
    param_1[2] = (ulong)auVar5._0_8_;
    *param_1 = auVar5._8_8_ | 1;
    param_1[1] = uVar1;
  }
  return;
}

