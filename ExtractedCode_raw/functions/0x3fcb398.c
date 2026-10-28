// rea decompile_all
// name: FUN_03fcb398
// address: 0x3fcb398
// body: available
// range: 0x3fcb398-0x3fcb51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcb398(void)

{
  ulong uVar1;
  ulong uVar2;
  void *__s;
  void *__s_00;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = (long)DAT_09535bd0;
  __s_00 = DAT_09535bc8;
  __s = DAT_09535bb8;
  DAT_09535bb8 = DAT_09535bc0;
  DAT_09535bc8 = DAT_09535bd0;
  if (DAT_09515628 == 0) {
    memset(__s,0,0x40000);
  }
  memset(__s_00,0,0x40000);
  DAT_09535bc0 = __s;
  DAT_09535bd0 = __s_00;
  if (DAT_097484f8 == 0) {
    DAT_09535bd8 = 0;
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
    do {
      uVar8 = (&DAT_095bc0c8)[uVar6 * 2];
      uVar1 = uVar8 + ((&DAT_095bc0d0)[uVar6 * 2] & 0xfffffffffffff000);
      if (uVar8 < uVar1) {
        lVar7 = 0;
        uVar9 = uVar8;
        do {
          uVar2 = uVar8 >> 0x12;
          uVar4 = uVar8 >> 0xc;
          uVar9 = uVar9 + 0x1000;
          uVar8 = uVar8 + 0x1000;
          lVar7 = (*(ulong *)(lVar3 + (uVar2 & 0x7fff) * 8) >> (uVar4 & 0x3f) & 1) + lVar7;
        } while (uVar9 < uVar1);
      }
      else {
        lVar7 = 0;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar7 + lVar5;
    } while ((uVar6 & 0xffffffff) < DAT_097484f8);
    DAT_09535bd8 = lVar5 * 0x1000;
  }
  if (DAT_09535be0 == 2) {
    FUN_03fcb51c("%lu bytes in heap blacklisted for interior pointers\n");
  }
  if (DAT_09535bd8 != 0) {
    uVar6 = 0;
    if (DAT_09535bd8 != 0) {
      uVar6 = DAT_09535be8 / DAT_09535bd8;
    }
    DAT_09515610 = uVar6 << 0xc;
  }
  if (DAT_09515610 < 0x3000) {
    DAT_09515610 = 0x3000;
  }
  else if (0x1000000 < DAT_09515610) {
    DAT_09515610 = 0x1000000;
  }
  return;
}

