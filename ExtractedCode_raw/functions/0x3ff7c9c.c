// rea decompile_all
// name: FUN_03ff7c9c
// address: 0x3ff7c9c
// body: available
// range: 0x3ff7c9c-0x3ff7e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03ff7c9c(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  locale alStack_70 [8];
  locale alStack_68 [8];
  
  pbVar7 = (byte *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x50);
  if ((*pbVar7 & 1) == 0) {
    lVar3 = param_2 + 0x41;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    lVar8 = -1;
    lVar9 = -1;
    lVar6 = -1;
    lVar2 = *(long *)(param_2 + 0x28);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10) - lVar3;
    lVar9 = *(long *)(param_2 + 0x18) - lVar3;
    lVar8 = *(long *)(param_2 + 0x20) - lVar3;
    lVar2 = *(long *)(param_2 + 0x28);
  }
  if (lVar2 == 0) {
    lVar2 = -1;
    lVar5 = -1;
    lVar4 = -1;
  }
  else {
    lVar2 = lVar2 - lVar3;
    lVar5 = *(long *)(param_2 + 0x30) - lVar3;
    lVar4 = *(long *)(param_2 + 0x38) - lVar3;
  }
  lVar3 = *(long *)(param_2 + 0x58) - lVar3;
  if (*(long *)(param_2 + 0x58) == 0) {
    lVar3 = -1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  lVar11 = *(long *)(param_2 + 0x48);
  uVar10 = *(undefined8 *)pbVar7;
  param_1[10] = *(long *)(param_2 + 0x50);
  param_1[9] = lVar11;
  param_1[8] = uVar10;
  *pbVar7 = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  lVar11 = (long)param_1 + 0x41;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar11 = param_1[10];
  }
  if (lVar6 != -1) {
    param_1[2] = lVar11 + lVar6;
    param_1[3] = lVar11 + lVar9;
    param_1[4] = lVar11 + lVar8;
  }
  if (lVar2 != -1) {
    param_1[7] = lVar11 + lVar4;
    param_1[5] = lVar11 + lVar2;
    param_1[6] = lVar11 + lVar2 + lVar5;
  }
  lVar8 = 0;
  if (lVar3 != -1) {
    lVar8 = lVar11 + lVar3;
  }
  param_1[0xb] = lVar8;
  puVar1 = (undefined1 *)(param_2 + 0x41);
  if ((*(byte *)(param_2 + 0x40) & 1) != 0) {
    puVar1 = *(undefined1 **)(param_2 + 0x50);
  }
  *(undefined1 **)(param_2 + 0x10) = puVar1;
  *(undefined1 **)(param_2 + 0x18) = puVar1;
  *(undefined1 **)(param_2 + 0x20) = puVar1;
  *(undefined1 **)(param_2 + 0x28) = puVar1;
  *(undefined1 **)(param_2 + 0x30) = puVar1;
  *(undefined1 **)(param_2 + 0x38) = puVar1;
  *(undefined1 **)(param_2 + 0x58) = puVar1;
  std::__ndk1::locale::locale(alStack_70,(locale *)(param_2 + 8));
  (**(code **)(*param_1 + 0x10))(param_1,alStack_70);
  std::__ndk1::locale::locale(alStack_68,(locale *)(param_1 + 1));
  std::__ndk1::locale::operator=((locale *)(param_1 + 1),alStack_70);
  std::__ndk1::locale::~locale(alStack_68);
  std::__ndk1::locale::~locale(alStack_70);
  return;
}

