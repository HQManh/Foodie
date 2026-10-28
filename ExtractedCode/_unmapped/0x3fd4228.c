// rea decompile_all
// name: FUN_03fd4228
// address: 0x3fd4228
// body: available
// range: 0x3fd4228-0x3fd4437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd43e4 to 0x3fcb724 FUN_03fcb724 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fd441c to 0x3fcb678 FUN_03fcb678 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd4228(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar8 = DAT_09535c90;
  Hint_Prefetch(param_1,0,0,1);
  plVar7 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar5 = *plVar7;
    plVar7 = (long *)(lVar5 + 0x2018);
  } while (*(ulong *)(lVar5 + 0x2010) != param_1 >> 0x16 && lVar5 != DAT_09535c90);
  uVar11 = *(ulong *)(lVar5 + (param_1 >> 0xc & 0x3ff) * 8);
  uVar9 = param_1;
  if (uVar11 < 0x1000) {
    if ((uVar11 == 0) || (uVar9 = FUN_03fcaf44(param_1), uVar9 == 0)) goto LAB_03fd43d4;
    plVar7 = (long *)(&DAT_097440c8 + (uVar9 >> 0x16 & 0x7ff) * 8);
    do {
      lVar5 = *plVar7;
      plVar7 = (long *)(lVar5 + 0x2018);
    } while (*(ulong *)(lVar5 + 0x2010) != uVar9 >> 0x16 && lVar5 != lVar8);
    uVar11 = *(ulong *)(lVar5 + (uVar9 >> 0xc & 0x3ff) * 8);
    if (uVar11 == 0) goto LAB_03fd43d4;
  }
  if ((*(byte *)(uVar11 + 0x19) >> 2 & 1) == 0) {
    if (DAT_097480f0 != 0) {
      FUN_0404c050(1L << (param_1 >> 0xc & 0x3f),&DAT_0957c0c8 + (param_1 >> 0x12 & 0x7fff) * 8);
    }
    uVar2 = uVar9 >> 4 & 0xff;
    uVar4 = (ulong)*(ushort *)(*(long *)(uVar11 + 0x30) + uVar2 * 2);
    if ((uVar9 & 0xf) != 0 || uVar4 != 0) {
      if ((*(byte *)(uVar11 + 0x19) >> 5 & 1) == 0) {
        uVar2 = uVar2 - uVar4;
        uVar9 = uVar9 - (uVar9 & 0xf | uVar4 << 4);
      }
      else {
        uVar9 = *(ulong *)(uVar11 + 0x10);
        uVar2 = 0;
      }
    }
    uVar4 = 1L << (uVar2 & 0x3f);
    uVar6 = *(ulong *)(uVar11 + 0x40 + (uVar2 >> 6) * 8);
    if ((uVar4 & uVar6) == 0) {
      lVar8 = *(long *)(uVar11 + 0x38);
      uVar10 = *(ulong *)(uVar11 + 0x28);
      *(ulong *)(uVar11 + 0x40 + (uVar2 >> 6) * 8) = uVar4 | uVar6;
      *(long *)(uVar11 + 0x38) = lVar8 + 1;
      puVar1 = DAT_09535c70;
      if (uVar10 != 0) {
        puVar3 = DAT_09535c70 + 2;
        if (DAT_09535c68 <= puVar3) {
          DAT_09748728 = 5;
          DAT_09748758 = 1;
          if (DAT_09535be0 != 0) {
            DAT_09535c70 = puVar3;
            FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
          }
          puVar3 = puVar1 + -0x3fe;
        }
        DAT_09535c70 = puVar3;
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
      }
    }
    return;
  }
  if (DAT_09515628 == 0) {
    FUN_03fcb678(param_1);
    return;
  }
LAB_03fd43d4:
  FUN_03fcb724(param_1);
  return;
}

