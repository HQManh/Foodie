// rea decompile_all
// name: FUN_03fc0bfc
// address: 0x3fc0bfc
// body: available
// range: 0x3fc0bfc-0x3fc0d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc0bfc(long param_1)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    if (*(char *)(param_1 + 0x132) == '\0') {
      if ((*(short *)(param_1 + 300) != 0) && (*(long *)(param_1 + 0xa8) == 0)) {
        uVar4 = FUN_03fa7f34(*(short *)(param_1 + 300),8);
        *(undefined8 *)(param_1 + 0xa8) = uVar4;
        if (*(short *)(param_1 + 300) != 0) {
          uVar5 = 0;
          do {
            uVar4 = FUN_03faba4c(param_1,uVar5 & 0xffffffff);
            uVar4 = FUN_03fbe574(uVar4,1);
            uVar2 = *(ushort *)(param_1 + 300);
            *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar5 * 8) = uVar4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
      }
    }
    else if (*(long *)(param_1 + 0xa8) == 0) {
      FUN_03f7950c(param_1);
    }
  }
  else {
    lVar3 = FUN_03fb4784();
    if ((*(short *)(lVar3 + 300) != 0) && (*(long *)(param_1 + 0xa8) == 0)) {
      lVar6 = *(long *)(param_1 + 0x60);
      uVar4 = FUN_03fa7f34(*(short *)(lVar3 + 300),8);
      sVar1 = *(short *)(lVar3 + 300);
      *(undefined8 *)(param_1 + 0xa8) = uVar4;
      if (sVar1 != 0) {
        uVar5 = 0;
        do {
          uVar4 = FUN_03faba4c(lVar3,uVar5 & 0xffffffff);
          uVar4 = FUN_03f76ed4(uVar4,lVar6 + 8,0);
          uVar4 = FUN_03fbe574(uVar4,1);
          uVar2 = *(ushort *)(lVar3 + 300);
          *(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar5 * 8) = uVar4;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
    }
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    *(undefined **)(param_1 + 0xa8) = &DAT_09535bb0;
  }
  return;
}

