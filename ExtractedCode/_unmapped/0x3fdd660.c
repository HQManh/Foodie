// rea decompile_all
// name: FUN_03fdd660
// address: 0x3fdd660
// body: available
// range: 0x3fdd660-0x3fdd9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fdd660(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = 7;
  uVar3 = 6;
  uVar6 = 5;
  uVar5 = 4;
  uVar8 = 3;
  uVar7 = 2;
  uVar10 = 1;
  uVar9 = 0;
  lVar2 = 0;
  lVar1 = param_1 + 0xd4;
  do {
    if (uVar9 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2) = 0;
    }
    if (uVar10 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 4) = 0;
    }
    if (uVar7 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 8) = 0;
    }
    if (uVar8 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 0xc) = 0;
    }
    if (uVar5 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x10) = 0;
    }
    if (uVar6 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x14) = 0;
    }
    if (uVar3 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x18) = 0;
    }
    if (uVar4 < 0x11e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x1c) = 0;
    }
    uVar5 = uVar5 + 8;
    uVar6 = uVar6 + 8;
    uVar7 = uVar7 + 8;
    uVar8 = uVar8 + 8;
    lVar2 = lVar2 + 0x20;
    uVar9 = uVar9 + 8;
    uVar10 = uVar10 + 8;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 + 8;
  } while (lVar2 != 0x480);
  uVar4 = 7;
  uVar3 = 6;
  uVar6 = 5;
  uVar5 = 4;
  uVar8 = 3;
  uVar7 = 2;
  uVar10 = 1;
  uVar9 = 0;
  lVar2 = 0;
  lVar1 = param_1 + 0x9c8;
  do {
    if (uVar9 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2) = 0;
    }
    if (uVar10 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 4) = 0;
    }
    if (uVar7 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 8) = 0;
    }
    if (uVar8 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 0xc) = 0;
    }
    if (uVar5 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x10) = 0;
    }
    if (uVar6 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x14) = 0;
    }
    if (uVar3 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x18) = 0;
    }
    if (uVar4 < 0x1e) {
      *(undefined2 *)(lVar1 + lVar2 + 0x1c) = 0;
    }
    uVar5 = uVar5 + 8;
    uVar6 = uVar6 + 8;
    uVar7 = uVar7 + 8;
    uVar8 = uVar8 + 8;
    lVar2 = lVar2 + 0x20;
    uVar9 = uVar9 + 8;
    uVar10 = uVar10 + 8;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 + 8;
  } while (lVar2 != 0x80);
  uVar4 = 3;
  uVar3 = 2;
  uVar6 = 1;
  uVar5 = 0;
  lVar1 = 0;
  do {
    if (uVar5 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xabc) = 0;
    }
    if (uVar6 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xac0) = 0;
    }
    if (uVar3 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xac4) = 0;
    }
    if (uVar4 < 0x13) {
      *(undefined2 *)(param_1 + lVar1 + 0xac8) = 0;
    }
    uVar3 = uVar3 + 4;
    uVar4 = uVar4 + 4;
    uVar5 = uVar5 + 4;
    uVar6 = uVar6 + 4;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x50);
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined2 *)(param_1 + 0x4d4) = 1;
  *(undefined8 *)(param_1 + 0x1720) = 0;
  *(undefined8 *)(param_1 + 0x1718) = 0;
  *(undefined4 *)(param_1 + 0x1728) = 0;
  return;
}

