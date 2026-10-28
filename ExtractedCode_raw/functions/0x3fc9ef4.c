// rea decompile_all
// name: FUN_03fc9ef4
// address: 0x3fc9ef4
// body: available
// range: 0x3fc9ef4-0x3fca03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fc9ef4(long param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  uVar3 = *(ulong *)(param_2 + 2);
  lVar8 = 0;
  uVar5 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  lVar6 = *(long *)(param_1 + 0x58);
  uVar3 = (uVar3 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 & lVar6 - 1U;
    uVar7 = uVar3 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10 + (uVar7 >> 3) + 10) >>
         (uVar7 & 7) & 1) == 0) {
      uVar7 = uVar3;
      if (uVar5 != 0xffffffffffffffff) {
        uVar7 = uVar5;
      }
      uVar3 = 0xffffffffffffffff;
LAB_03fca020:
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar3;
      return auVar11;
    }
    uVar2 = FUN_03f604a8(param_1,uVar3);
    uVar9 = uVar5;
    if ((uVar2 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + (uVar3 / 0x30) * 0x10);
      lVar10 = *plVar1;
      uVar5 = FUN_03f5fe4c((long)plVar1 + 10,uVar7);
      piVar4 = (int *)(lVar10 + (uVar5 & 0xffff) * 0x18);
      if ((*param_2 == *piVar4) &&
         ((*param_2 != 0 || (*(long *)(param_2 + 2) == *(long *)(piVar4 + 2))))) {
        uVar7 = 0xffffffffffffffff;
        goto LAB_03fca020;
      }
    }
    else {
      uVar9 = uVar3;
      if (uVar5 != 0xffffffffffffffff) {
        uVar9 = uVar5;
      }
    }
    lVar8 = lVar8 + 1;
    uVar3 = lVar8 + uVar3;
    uVar5 = uVar9;
  } while( true );
}

