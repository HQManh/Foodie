// rea decompile_all
// name: FUN_03fccdc0
// address: 0x3fccdc0
// body: available
// range: 0x3fccdc0-0x3fccedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fccdc0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t __n;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  iVar4 = (int)param_2;
  uVar1 = *(undefined4 *)(&DAT_095156fc + (long)iVar4 * 0x20);
  if (DAT_097480f4 != 0) {
    uVar1 = 1;
  }
  uVar5 = FUN_03fccedc(param_1 << 4,param_2,0);
  if (uVar5 != 0) {
    if (iVar4 == 2) {
      plVar8 = (long *)(&DAT_097440c8 + (uVar5 >> 0x16 & 0x7ff) * 8);
      do {
        lVar7 = *plVar8;
        plVar8 = (long *)(lVar7 + 0x2018);
      } while (*(ulong *)(lVar7 + 0x2010) != uVar5 >> 0x16 && lVar7 != DAT_09535c90);
      lVar7 = *(long *)(lVar7 + (uVar5 >> 0xc & 0x3ff) * 8);
      uVar9 = *(ulong *)(lVar7 + 0x20);
      if (uVar9 < 0x801) {
        uVar2 = 0;
        if ((uVar9 & 0xffff) != 0) {
          uVar2 = 0x1000 / ((uint)uVar9 & 0xffff);
        }
        __n = (size_t)((uVar2 * (uint)uVar9 >> 4 & 0xfff) + 0x40 >> 3 & 0x3f8);
      }
      else {
        __n = 0x28;
      }
      memset((void *)(lVar7 + 0x40),0xff,__n);
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = 0x1000 / uVar9;
      }
      *(ulong *)(lVar7 + 0x38) = uVar3;
    }
    uVar6 = FUN_03fccc20(uVar5,param_1 << 1,uVar1,
                         *(undefined8 *)((&PTR_DAT_095156e0)[(long)iVar4 * 4] + param_1 * 8));
    *(undefined8 *)((&PTR_DAT_095156e0)[(long)iVar4 * 4] + param_1 * 8) = uVar6;
  }
  return;
}

