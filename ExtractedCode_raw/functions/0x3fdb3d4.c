// rea decompile_all
// name: FUN_03fdb3d4
// address: 0x3fdb3d4
// body: available
// range: 0x3fdb3d4-0x3fdb46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fdb3d4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = FUN_03fdb114();
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x58) = 2;
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    iVar1 = *(int *)(lVar4 + 0x30);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      *(int *)(lVar4 + 0x30) = iVar1;
    }
    uVar3 = 0x39;
    if (iVar1 != 2) {
      uVar3 = 0x2a;
    }
    *(undefined4 *)(lVar4 + 8) = uVar3;
    if (iVar1 != 2) {
      uVar2 = FUN_03fdad2c(0,0,0);
    }
    else {
      uVar2 = FUN_03fda9f8();
    }
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(lVar4 + 0x4c) = 0xfffffffe;
    FUN_03fdd618(lVar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

