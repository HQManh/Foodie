// rea decompile_all
// name: FUN_03fd1e4c
// address: 0x3fd1e4c
// body: available
// range: 0x3fd1e4c-0x3fd204b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fd1e4c(ulong param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = DAT_09535c90;
  Hint_Prefetch(param_1,0,0,1);
  plVar6 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar4 = *plVar6;
    plVar6 = (long *)(lVar4 + 0x2018);
  } while (*(ulong *)(lVar4 + 0x2010) != param_1 >> 0x16 && lVar4 != DAT_09535c90);
  uVar1 = *(ulong *)(lVar4 + (param_1 >> 0xc & 0x3ff) * 8);
  if (uVar1 < 0x1000) {
    if (DAT_09515628 == 0) goto LAB_03fd2020;
    uVar1 = FUN_03fcaf44(param_1);
    plVar6 = (long *)(&DAT_097440c8 + (uVar1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar4 = *plVar6;
      plVar6 = (long *)(lVar4 + 0x2018);
    } while (*(ulong *)(lVar4 + 0x2010) != uVar1 >> 0x16 && lVar4 != lVar8);
    uVar1 = *(ulong *)(lVar4 + (uVar1 >> 0xc & 0x3ff) * 8);
    if (uVar1 != 0) goto LAB_03fd1eb4;
LAB_03fd2014:
    FUN_03fcb724(param_1);
  }
  else {
LAB_03fd1eb4:
    if ((*(byte *)(uVar1 + 0x19) >> 2 & 1) != 0) goto LAB_03fd2008;
    uVar5 = param_1 >> 4 & 0xff;
    uVar3 = (ulong)*(ushort *)(*(long *)(uVar1 + 0x30) + uVar5 * 2);
    if ((param_1 & 0xf) != 0 || uVar3 != 0) {
      if ((*(byte *)(uVar1 + 0x19) >> 5 & 1) == 0) {
        uVar7 = param_1 & 0xf | uVar3 << 4;
        if ((&DAT_0953b0c8)[uVar7] == '\0') {
LAB_03fd2008:
          if (DAT_09515628 == 0) {
LAB_03fd2020:
            FUN_03fcb678(param_1);
            return param_2;
          }
          goto LAB_03fd2014;
        }
        uVar5 = uVar5 - uVar3;
        param_1 = param_1 - uVar7;
      }
      else {
        if ((param_1 - *(ulong *)(uVar1 + 0x10) == (param_1 & 0xfff)) &&
           ((&DAT_0953b0c8)[param_1 & 0xfff] == '\0')) goto LAB_03fd2008;
        uVar5 = 0;
        param_1 = *(ulong *)(uVar1 + 0x10);
      }
    }
    uVar3 = 1L << (uVar5 & 0x3f);
    uVar7 = *(ulong *)(uVar1 + 0x40 + (uVar5 >> 6) * 8);
    if ((uVar3 & uVar7) == 0) {
      lVar8 = *(long *)(uVar1 + 0x38);
      uVar9 = *(ulong *)(uVar1 + 0x28);
      *(ulong *)(uVar1 + 0x40 + (uVar5 >> 6) * 8) = uVar3 | uVar7;
      *(long *)(uVar1 + 0x38) = lVar8 + 1;
      if (uVar9 != 0) {
        puVar2 = param_2 + 2;
        if (param_3 <= puVar2) {
          DAT_09748728 = 5;
          DAT_09748758 = 1;
          if (DAT_09535be0 != 0) {
            FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
          }
          puVar2 = param_2 + -0x3fe;
        }
        *puVar2 = param_1;
        puVar2[1] = uVar9;
        param_2 = puVar2;
      }
    }
  }
  return param_2;
}

