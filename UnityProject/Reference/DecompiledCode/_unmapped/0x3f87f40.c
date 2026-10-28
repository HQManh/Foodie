// rea decompile_all
// name: FUN_03f87f40
// address: 0x3f87f40
// body: available
// range: 0x3f87f40-0x3f87ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f87f40(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x70) + -1;
  *(int *)(lVar3 + 0x70) = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0;
    do {
      iVar2 = (int)uVar4;
      uVar4 = FUN_0404bd00(uVar4,iVar2 + 1,lVar3 + 8);
      iVar1 = (int)uVar4;
      if (iVar1 == iVar2) break;
    } while (iVar1 != 2);
    while (iVar1 != 0) {
      FUN_03fe02a8(lVar3 + 8,2,0xffffffff);
      iVar1 = FUN_0404be70(2,lVar3 + 8);
    }
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined4 *)(lVar3 + 0x60) = 1;
    if (*(int *)(lVar3 + 100) != 0) {
      FUN_03f89104(lVar3,1);
    }
    iVar2 = FUN_0404bea0(0,lVar3 + 8);
    if (iVar2 == 2) {
      FUN_03fe0300(lVar3 + 8,1,0);
    }
  }
  return;
}

