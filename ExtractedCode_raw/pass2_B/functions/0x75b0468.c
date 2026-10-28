// rea decompile_all
// name: System.HashCode$$Add
// address: 0x75b0468
// body: available
// range: 0x75b0468-0x75b06f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_HashCode__Add(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  if ((DAT_09521cb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185018);
    DAT_09521cb1 = 1;
  }
  uVar2 = param_1[7];
  uVar1 = uVar2 & 3;
  param_1[7] = uVar2 + 1;
  if (uVar1 == 2) {
    param_1[6] = param_2;
  }
  else if (uVar1 == 1) {
    param_1[5] = param_2;
  }
  else if (uVar1 == 0) {
    param_1[4] = param_2;
  }
  else {
    if (uVar2 == 3) {
      if (*(int *)(DAT_09185018 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951984d == '\0') {
        FUN_03f5c2a4(&DAT_09185018);
        DAT_0951984d = '\x01';
      }
      if (*(int *)(DAT_09185018 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = DAT_09185018;
      piVar6 = *(int **)(DAT_09185018 + 0xb8);
      iVar7 = *piVar6 + 0x24234428;
      *param_1 = iVar7;
      param_1[1] = *piVar6 + -0x7a143589;
      iVar3 = *piVar6;
      param_1[2] = iVar3;
      param_1[3] = iVar3 + 0x61c8864f;
    }
    else {
      iVar7 = *param_1;
      lVar5 = DAT_09185018;
    }
    iVar3 = param_1[4];
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951984e == '\0') {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984e = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
      bVar4 = DAT_0951984e == '\0';
    }
    else {
      bVar4 = false;
    }
    uVar1 = iVar7 + iVar3 * -0x7a143589;
    iVar7 = param_1[1];
    iVar3 = param_1[5];
    *param_1 = (uVar1 >> 0x13 | uVar1 * 0x2000) * -0x61c8864f;
    if (bVar4) {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984e = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
      bVar4 = DAT_0951984e == '\0';
    }
    else {
      bVar4 = false;
    }
    uVar1 = iVar7 + iVar3 * -0x7a143589;
    iVar7 = param_1[2];
    iVar3 = param_1[6];
    param_1[1] = (uVar1 >> 0x13 | uVar1 * 0x2000) * -0x61c8864f;
    if (bVar4) {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984e = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
      bVar4 = DAT_0951984e == '\0';
    }
    else {
      bVar4 = false;
    }
    uVar1 = iVar7 + iVar3 * -0x7a143589;
    iVar7 = param_1[3];
    param_1[2] = (uVar1 >> 0x13 | uVar1 * 0x2000) * -0x61c8864f;
    if (bVar4) {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984e = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = iVar7 + param_2 * -0x7a143589;
    param_1[3] = (uVar1 >> 0x13 | uVar1 * 0x2000) * -0x61c8864f;
  }
  return;
}

