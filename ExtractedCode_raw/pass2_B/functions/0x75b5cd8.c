// rea decompile_all
// name: System.Marvin$$ComputeHash32
// address: 0x75b5cd8
// body: available
// range: 0x75b5cd8-0x75b60cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Marvin__ComputeHash32(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_09521d06 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187df0);
    DAT_09521d06 = 1;
  }
  uVar9 = (ulong)(int)param_2;
  uVar6 = param_3 >> 0x20;
  uVar5 = (uint)(param_3 >> 0x20);
  if (param_2 < 8) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar9 & 0xfffffffffffffff8;
    piVar10 = (int *)(param_1 + 4);
    do {
      iVar4 = piVar10[-1];
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09521d7e == '\0') {
        FUN_03f5c2a4(&DAT_09187df0);
        DAT_09521d7e = '\x01';
      }
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
        cVar2 = DAT_09521d7e;
      }
      else {
        cVar2 = '\x01';
      }
      iVar8 = *piVar10;
      if (cVar2 == '\0') {
        FUN_03f5c2a4(&DAT_09187df0);
        DAT_09521d7e = '\x01';
      }
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = iVar4 + (int)param_3;
      uVar9 = uVar9 - 8;
      piVar10 = piVar10 + 2;
      uVar3 = uVar5 ^ (uint)uVar6;
      uVar5 = uVar3 + (uVar5 >> 0xc | uVar5 * 0x100000);
      uVar3 = uVar5 ^ (uVar3 >> 0x17 | uVar3 << 9);
      uVar5 = uVar3 + (uVar5 >> 5 | uVar5 * 0x8000000) + iVar8;
      uVar1 = uVar5 ^ (uVar3 >> 0xd | uVar3 << 0x13);
      uVar3 = uVar1 + (uVar5 >> 0xc | uVar5 * 0x100000);
      uVar1 = uVar3 ^ (uVar1 >> 0x17 | uVar1 << 9);
      uVar5 = uVar1 >> 0xd | uVar1 << 0x13;
      uVar6 = (ulong)uVar5;
      param_3 = (ulong)(uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000));
    } while (7 < uVar9);
  }
  iVar4 = (int)param_3;
  iVar8 = (int)uVar9;
  if (iVar8 < 4) {
    if (1 < iVar8) {
      if (iVar8 == 2) {
LAB_075b5f10:
        uVar3 = iVar4 + (uint)*(ushort *)(param_1 + uVar7) + 0x800000;
        goto LAB_075b6014;
      }
LAB_075b5ff8:
      uVar3 = (uint)*(uint3 *)(param_1 + uVar7) + iVar4 + -0x80000000;
      goto LAB_075b6014;
    }
    if (iVar8 == 0) {
LAB_075b5e90:
      uVar3 = iVar4 + 0x80;
      goto LAB_075b6014;
    }
  }
  else {
    if (5 < iVar8) {
      if (iVar8 == 6) {
        iVar8 = *(int *)(param_1 + uVar7);
        if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09521d7e == '\0') {
          FUN_03f5c2a4(&DAT_09187df0);
          DAT_09521d7e = '\x01';
        }
        uVar7 = uVar7 | 4;
        uVar3 = iVar8 + iVar4;
        if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = uVar3 ^ uVar5;
        uVar3 = uVar5 + (uVar3 >> 0xc | uVar3 * 0x100000);
        uVar1 = uVar3 ^ (uVar5 >> 0x17 | uVar5 << 9);
        uVar5 = uVar1 >> 0xd | uVar1 << 0x13;
        iVar4 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
        goto LAB_075b5f10;
      }
      iVar8 = *(int *)(param_1 + uVar7);
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09521d7e == '\0') {
        FUN_03f5c2a4(&DAT_09187df0);
        DAT_09521d7e = '\x01';
      }
      uVar7 = uVar7 | 4;
      uVar3 = iVar8 + iVar4;
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = uVar3 ^ uVar5;
      uVar3 = uVar5 + (uVar3 >> 0xc | uVar3 * 0x100000);
      uVar1 = uVar3 ^ (uVar5 >> 0x17 | uVar5 << 9);
      uVar5 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar4 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
      goto LAB_075b5ff8;
    }
    if (iVar8 == 4) {
      iVar8 = *(int *)(param_1 + uVar7);
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09521d7e == '\0') {
        FUN_03f5c2a4(&DAT_09187df0);
        DAT_09521d7e = '\x01';
      }
      uVar3 = iVar8 + iVar4;
      if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = uVar3 ^ uVar5;
      uVar3 = uVar5 + (uVar3 >> 0xc | uVar3 * 0x100000);
      uVar1 = uVar3 ^ (uVar5 >> 0x17 | uVar5 << 9);
      uVar5 = uVar1 >> 0xd | uVar1 << 0x13;
      iVar4 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
      goto LAB_075b5e90;
    }
    iVar8 = *(int *)(param_1 + uVar7);
    if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09521d7e == '\0') {
      FUN_03f5c2a4(&DAT_09187df0);
      DAT_09521d7e = '\x01';
    }
    uVar7 = uVar7 | 4;
    uVar3 = iVar8 + iVar4;
    if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = uVar3 ^ uVar5;
    uVar3 = uVar5 + (uVar3 >> 0xc | uVar3 * 0x100000);
    uVar1 = uVar3 ^ (uVar5 >> 0x17 | uVar5 << 9);
    uVar5 = uVar1 >> 0xd | uVar1 << 0x13;
    iVar4 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
  }
  uVar3 = iVar4 + (uint)*(byte *)(param_1 + uVar7) + 0x8000;
LAB_075b6014:
  if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09521d7e == '\0') {
    FUN_03f5c2a4(&DAT_09187df0);
    DAT_09521d7e = '\x01';
  }
  if ((*(int *)(DAT_09187df0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09521d7e == '\0')) {
    FUN_03f5c2a4(&DAT_09187df0);
    DAT_09521d7e = '\x01';
  }
  if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = uVar5 ^ uVar3;
  uVar3 = uVar5 + (uVar3 >> 0xc | uVar3 << 0x14);
  uVar1 = uVar3 ^ (uVar5 >> 0x17 | uVar5 << 9);
  uVar5 = uVar1 + (uVar3 >> 5 | uVar3 * 0x8000000);
  uVar3 = uVar5 ^ (uVar1 >> 0xd | uVar1 << 0x13);
  uVar5 = uVar3 + (uVar5 >> 0xc | uVar5 * 0x100000);
  uVar3 = uVar5 ^ (uVar3 >> 0x17 | uVar3 << 9);
  return uVar3 + (uVar5 >> 5 | uVar5 * 0x8000000) ^ (uVar3 >> 0xd | uVar3 << 0x13);
}

