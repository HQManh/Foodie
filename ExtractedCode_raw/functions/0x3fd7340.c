// rea decompile_all
// name: FUN_03fd7340
// address: 0x3fd7340
// body: available
// range: 0x3fd7340-0x3fd74d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd7340(undefined8 param_1,code *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if ((param_2 != (code *)0x0) && (DAT_097484f8 != 0)) {
    uVar10 = 0;
    uVar4 = DAT_097484f8;
    do {
      uVar9 = (uint)uVar10;
      uVar8 = (&DAT_095bc0c8)[uVar10 * 2];
      uVar1 = uVar8 + (&DAT_095bc0d0)[uVar10 * 2];
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar10 = (ulong)uVar9;
        if ((uVar4 <= uVar10) || ((&DAT_095bc0c8)[uVar10 * 2] != uVar1)) break;
        uVar1 = uVar1 + (&DAT_095bc0d0)[uVar10 * 2];
      }
joined_r0x03fd73e0:
      while (uVar2 = uVar8, uVar2 < uVar1) {
        plVar7 = (long *)(&DAT_097440c8 + (uVar2 >> 0x16 & 0x7ff) * 8);
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(lVar6 + 0x2018);
        } while (*(ulong *)(lVar6 + 0x2010) != uVar2 >> 0x16 && lVar6 != DAT_09535c90);
        uVar5 = *(ulong *)(lVar6 + (uVar2 >> 0xc & 0x3ff) * 8);
        uVar4 = DAT_097484f8;
        if (uVar5 < 0x1000) {
          uVar8 = uVar2 + 0x1000;
        }
        else {
          lVar6 = *(long *)(uVar5 + 0x20);
          if ((*(byte *)(uVar5 + 0x19) >> 2 & 1) != 0) goto LAB_03fd747c;
          uVar5 = uVar2 + lVar6;
          if (uVar2 < uVar5) {
            (*param_2)(param_1,uVar2,uVar5,2);
          }
          uVar8 = uVar2 + (lVar6 + 0xfffU & 0xfffffffffffff000);
          uVar4 = DAT_097484f8;
          if (uVar5 < uVar8) {
            uVar3 = 1;
            uVar2 = uVar5;
            goto LAB_03fd7494;
          }
        }
      }
    } while (uVar10 < uVar4);
  }
  return;
LAB_03fd747c:
  uVar8 = uVar2 + lVar6;
  if ((*(byte *)(uVar5 + 0x19) >> 1 & 1) == 0) {
    uVar3 = 0;
LAB_03fd7494:
    (*param_2)(param_1,uVar2,uVar8,uVar3);
    uVar4 = DAT_097484f8;
  }
  goto joined_r0x03fd73e0;
}

