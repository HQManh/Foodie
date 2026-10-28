// rea decompile_all
// name: FUN_03fc2e74
// address: 0x3fc2e74
// body: available
// range: 0x3fc2e74-0x3fc2f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fc2e74(undefined8 param_1)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar2 = FUN_03faca90();
  if ((uVar2 >> 2 & 1) == 0) {
    if (((uVar2 & 0xffff) >> 3 & 1) == 0) {
      sVar1 = FUN_03fac9d8(param_1);
      if (sVar1 != 0) {
        iVar6 = 0;
        do {
          lVar3 = FUN_03fac828(param_1,iVar6);
          if ((*(char *)(lVar3 + 10) != '\x13') && (*(char *)(lVar3 + 10) != '\x1e')) {
            uVar4 = FUN_03f7b924(lVar3,DAT_09535470 + 0x20);
            if ((uVar4 & 1) != 0) goto LAB_03fc2f3c;
            uVar4 = FUN_03f7b924(lVar3,DAT_09535628 + 0x20);
            if ((((uVar4 & 1) == 0) &&
                (lVar3 = FUN_03fbe574(lVar3,1), (*(byte *)(lVar3 + 0x118) >> 5 & 1) == 0)) &&
               (*(char *)(lVar3 + 0x2a) != '\x1e' && *(char *)(lVar3 + 0x2a) != '\x13'))
            goto LAB_03fc2f34;
          }
          iVar6 = iVar6 + 1;
        } while (sVar1 != iVar6);
      }
      uVar5 = 0;
    }
    else {
LAB_03fc2f3c:
      uVar5 = 1;
    }
  }
  else {
LAB_03fc2f34:
    uVar5 = 2;
  }
  return uVar5;
}

