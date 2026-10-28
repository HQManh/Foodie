// rea decompile_all
// name: FUN_03fd33f0
// address: 0x3fd33f0
// body: available
// range: 0x3fd33f0-0x3fd35ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd3594 to 0x3fd10ec FUN_03fd10ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fd33f0(ulong param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  param_2 = param_2 & 0xffffffff;
  if ((param_1 < 0x800) || (param_1 <= 0x800U - (long)DAT_09515628)) {
    lVar6 = param_1 - (param_1 != 0 && DAT_09515628 != 0);
    if ((DAT_097480e0 != 0) && (iVar1 = FUN_0404be40(1,&DAT_097480e8), iVar1 != 0)) {
      FUN_03fcbfa4();
    }
    lVar3 = *(long *)((long)&PTR_DAT_095156e0 +
                     (-(param_2 >> 0x1f) & 0xffffffe000000000 | param_2 << 5));
    lVar2 = (&DAT_09536cb8)[lVar6];
    puVar5 = *(undefined8 **)(lVar3 + lVar2 * 8);
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_097480e0 != 0) {
        DAT_097480e8 = 0;
      }
      puVar5 = (undefined8 *)FUN_03fd10ec(lVar6,param_2);
      return puVar5;
    }
    *(undefined8 *)(lVar3 + lVar2 * 8) = *puVar5;
    *puVar5 = 0;
    DAT_09535c28 = DAT_09535c28 + lVar2 * 0x10;
    DAT_09748520 = DAT_09748520 + lVar2 * 0x10;
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_03fd10ec(param_1,param_2);
    if (puVar5 != (undefined8 *)0x0) {
      plVar4 = (long *)(&DAT_097440c8 + ((ulong)puVar5 >> 0x16 & 0x7ff) * 8);
      do {
        lVar6 = *plVar4;
        plVar4 = (long *)(lVar6 + 0x2018);
      } while (*(ulong *)(lVar6 + 0x2010) != (ulong)puVar5 >> 0x16 && lVar6 != DAT_09535c90);
      lVar6 = *(long *)(lVar6 + ((ulong)puVar5 >> 0xc & 0x3ff) * 8);
      if (DAT_097480e0 == 0) {
        *(undefined8 *)(lVar6 + 0x38) = 1;
        *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1;
      }
      else {
        iVar1 = FUN_0404be40(1,&DAT_097480e8);
        if (iVar1 != 0) {
          FUN_03fcbfa4();
        }
        iVar1 = DAT_097480e0;
        *(undefined8 *)(lVar6 + 0x38) = 1;
        *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1;
        if (iVar1 != 0) {
          DAT_097480e8 = 0;
        }
      }
    }
  }
  return puVar5;
}

