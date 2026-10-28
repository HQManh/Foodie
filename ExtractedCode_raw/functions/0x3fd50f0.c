// rea decompile_all
// name: FUN_03fd50f0
// address: 0x3fd50f0
// body: available
// range: 0x3fd50f0-0x3fd52ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd51ac to 0x3fd158c FUN_03fd158c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fd52b4 to 0x3fce454 FUN_03fce454 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd50f0(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  plVar5 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar4 = *plVar5;
    plVar5 = (long *)(lVar4 + 0x2018);
  } while (*(ulong *)(lVar4 + 0x2010) != param_1 >> 0x16 && lVar4 != DAT_09535c90);
  puVar7 = *(undefined8 **)(lVar4 + (param_1 >> 0xc & 0x3ff) * 8);
  uVar6 = puVar7[4];
  if (0x800 < uVar6) {
    if ((*(byte *)(puVar7 + 8) & 1) != 0) {
      if (puVar7[5] != 0) {
        DAT_09535c78 = DAT_09535c78 + uVar6;
        return;
      }
      DAT_09535c80 = DAT_09535c80 + uVar6;
      return;
    }
    if (param_2 != 0) {
      if ((DAT_09748628 != 0) && (iVar2 = FUN_03fd149c(param_1), iVar2 == 0)) {
        return;
      }
      uVar6 = (ulong)DAT_097488d0;
      DAT_097485e8 = 1;
      if (0x27 < DAT_097488d0) {
        DAT_097485e8 = 1;
        return;
      }
      DAT_097488d0 = DAT_097488d0 + 1;
      *(ulong *)(&DAT_09748790 + uVar6 * 8) = param_1;
      FUN_03fd158c(param_1);
      return;
    }
    if (0x1fff < uVar6 + 0xfff) {
      DAT_09535c10 = DAT_09535c10 - (uVar6 + 0xfff & 0xfffffffffffff000);
    }
    DAT_097485b8 = DAT_097485b8 + uVar6;
    FUN_03fce454(param_1);
    return;
  }
  if (param_2 == 0) {
    if (puVar7[7] == 0) {
      DAT_097485b8 = DAT_097485b8 + 0x1000;
      FUN_03fce454(param_1);
    }
    else {
      if (DAT_09748510 == 0) {
        uVar1 = 0;
        if ((uVar6 & 0xffff) != 0) {
          uVar1 = 0x1000 / ((uint)uVar6 & 0xffff);
        }
        if ((ulong)(uVar1 * 7 >> 3) < (ulong)puVar7[7]) goto LAB_03fd51c0;
      }
      lVar4 = (&DAT_095156e8)[(ulong)*(byte *)(puVar7 + 3) * 4];
      if (lVar4 != 0) {
        uVar3 = uVar6 >> 1 & 0x7ffffffffffffff8;
        *puVar7 = *(undefined8 *)(lVar4 + uVar3);
        *(ulong *)(lVar4 + uVar3) = param_1;
      }
    }
  }
  else {
    FUN_03fd5038(param_1,1);
  }
LAB_03fd51c0:
  if (puVar7[5] == 0) {
    DAT_09535c80 = DAT_09535c80 + puVar7[7] * uVar6;
  }
  else {
    DAT_09535c78 = DAT_09535c78 + puVar7[7] * uVar6;
  }
  return;
}

