// rea decompile_all
// name: FUN_03fce454
// address: 0x3fce454
// body: available
// range: 0x3fce454-0x3fce6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fce64c to 0x3fcd688 FUN_03fcd688 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fce6b0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fce6d4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fce454(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar6 = *plVar8;
    plVar8 = (long *)(lVar6 + 0x2018);
  } while (*(ulong *)(lVar6 + 0x2010) != param_1 >> 0x16 && lVar6 != DAT_09535c90);
  lVar6 = *(long *)(lVar6 + (param_1 >> 0xc & 0x3ff) * 8);
  uVar1 = *(long *)(lVar6 + 0x20) + 0xfffU & 0xfffffffffffff000;
  if ((long)uVar1 < 1) {
    (*(code *)PTR_FUN_09515620)("Deallocating excessively large block.  Too large an allocation?");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_03fcc9c0(param_1,uVar1);
  *(ulong *)(lVar6 + 0x20) = uVar1;
  *(short *)(lVar6 + 0x1a) = (short)DAT_09748118;
  if ((*(byte *)(lVar6 + 0x19) >> 2 & 1) != 0) {
    if (DAT_09535be0 != 0) {
      FUN_03fcb51c("Duplicate large block deallocation of %p\n",param_1);
    }
    (*(code *)PTR_FUN_09515620)("Duplicate large block deallocation");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = param_1 + uVar1;
  *(byte *)(lVar6 + 0x19) = *(byte *)(lVar6 + 0x19) | 4;
  plVar8 = (long *)(&DAT_097440c8 + (uVar5 >> 0x16 & 0x7ff) * 8);
  do {
    lVar7 = *plVar8;
    plVar8 = (long *)(lVar7 + 0x2018);
  } while (*(ulong *)(lVar7 + 0x2010) != uVar5 >> 0x16 && lVar7 != DAT_09535c90);
  lVar7 = *(long *)(lVar7 + (uVar5 >> 0xc & 0x3ff) * 8);
  uVar3 = FUN_03fcd544(param_1);
  if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x19) & 6) == 4)) &&
     (uVar4 = *(ulong *)(lVar7 + 0x20), 0 < (long)(uVar4 + uVar1))) {
    if (uVar4 < 0x21000) {
      uVar4 = uVar4 >> 0xc;
    }
    else if (uVar4 >> 0x14 == 0) {
      uVar4 = (ulong)(((int)(uVar4 >> 0xc) - 0x20U >> 3) + 0x20);
    }
    else {
      uVar4 = 0x3c;
    }
    FUN_03fcd470(lVar7,uVar4);
    *(long *)(lVar6 + 0x20) = *(long *)(lVar6 + 0x20) + *(long *)(lVar7 + 0x20);
    FUN_03fcc964(uVar5);
  }
  if (uVar3 != 0) {
    plVar8 = (long *)(&DAT_097440c8 + (uVar3 >> 0x16 & 0x7ff) * 8);
    do {
      lVar7 = *plVar8;
      plVar8 = (long *)(lVar7 + 0x2018);
    } while (*(ulong *)(lVar7 + 0x2010) != uVar3 >> 0x16 && lVar7 != DAT_09535c90);
    lVar7 = *(long *)(lVar7 + (uVar3 >> 0xc & 0x3ff) * 8);
    if (((*(byte *)(lVar7 + 0x19) >> 1 & 1) == 0) &&
       (uVar5 = *(ulong *)(lVar7 + 0x20), 0 < (long)(uVar5 + *(long *)(lVar6 + 0x20)))) {
      if (uVar5 < 0x21000) {
        uVar5 = uVar5 >> 0xc;
      }
      else if (uVar5 >> 0x14 == 0) {
        uVar5 = (ulong)(((int)(uVar5 >> 0xc) - 0x20U >> 3) + 0x20);
      }
      else {
        uVar5 = 0x3c;
      }
      FUN_03fcd470(lVar7,uVar5);
      uVar2 = DAT_09748118;
      *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + *(long *)(lVar6 + 0x20);
      *(short *)(lVar7 + 0x1a) = (short)uVar2;
      FUN_03fcc964(param_1);
      param_1 = uVar3;
      lVar6 = lVar7;
    }
  }
  DAT_09535c08 = DAT_09535c08 + uVar1;
  FUN_03fcd688(param_1,lVar6);
  return;
}

