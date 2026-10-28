// rea decompile_all
// name: Datpt.Cook_Order.ActionMove$$Setup
// address: 0x41a0c34
// body: available
// range: 0x41a0c34-0x41a0d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ActionMove__Setup(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    uVar5 = 0;
    uVar4 = 1;
LAB_041a0c58:
    *(undefined1 *)(param_1 + 0x30) = uVar5;
    *(undefined1 *)(param_1 + 0x31) = uVar4;
  }
  else if (iVar1 == 1) {
    uVar4 = 0;
    uVar5 = 1;
    goto LAB_041a0c58;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x4c) = 0x3e4ccccd;
        *(undefined8 *)(param_1 + 0x58) = 0x4080000000000000;
        *(undefined8 *)(param_1 + 0x50) = 0xbe4ccccd00000000;
        return;
      }
      if (iVar1 != 0) {
        return;
      }
      uVar7 = 0x4080000000000000;
      uVar6 = 0x4086666600000000;
    }
    else {
      if (iVar2 != 1) {
        return;
      }
      if (iVar1 == 1) {
        uVar7 = 0xc080000000000000;
        uVar6 = 0x3e4ccccd00000000;
        goto LAB_041a0d2c;
      }
      if (iVar1 != 0) {
        return;
      }
      uVar7 = 0xc080000000000000;
      uVar6 = 0xc086666600000000;
    }
  }
  else if (iVar2 == 2) {
    if (iVar1 == 1) {
      uVar7 = 0xc0800000;
      uVar6 = 0x3e4ccccd;
LAB_041a0d2c:
      uVar3 = 0x3e4ccccd;
      goto LAB_041a0d34;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar7 = 0xc0800000;
    uVar6 = 0xc0866666;
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    if (iVar1 == 1) {
      uVar7 = 0x40800000;
      uVar6 = 0xbe4ccccd;
      goto LAB_041a0d2c;
    }
    if (iVar1 != 0) {
      return;
    }
    uVar7 = 0x40800000;
    uVar6 = 0x40866666;
  }
  uVar3 = 0x3f4ccccd;
LAB_041a0d34:
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  return;
}

