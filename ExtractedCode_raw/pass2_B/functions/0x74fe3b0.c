// rea decompile_all
// name: System.Globalization.CompareInfo$$CompareStringOrdinalIgnoreCase
// address: 0x74fe3b0
// body: available
// range: 0x74fe3b0-0x74fe52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fe52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_CompareInfo__CompareStringOrdinalIgnoreCase
              (undefined2 *param_1,int param_2,undefined2 *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  
  if ((DAT_09521677 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    DAT_09521677 = 1;
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar6 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    bVar8 = 0 < param_2;
    bVar7 = 0 < param_4;
    if ((0 < param_2) && (0 < param_4)) {
      if (plVar6 == (long *)0x0) goto LAB_074fe52c;
      bVar7 = true;
      uVar3 = 0xffffffff;
      uVar4 = param_4 - 1U;
      if (param_2 - 1U <= param_4 - 1U) {
        uVar4 = param_2 - 1U;
      }
      bVar8 = true;
      do {
        sVar1 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*param_1,*(undefined8 *)(*plVar6 + 0x1d0));
        sVar2 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*param_3,*(undefined8 *)(*plVar6 + 0x1d0));
        if (sVar1 != sVar2) break;
        iVar5 = uVar3 + 2;
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        bVar8 = iVar5 < param_2;
        bVar7 = iVar5 < param_4;
      } while (uVar4 != uVar3);
    }
    if (bVar8) {
      if (bVar7) {
        if (plVar6 == (long *)0x0) goto LAB_074fe52c;
        uVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*param_1,*(undefined8 *)(*plVar6 + 0x1d0));
        uVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*param_3,*(undefined8 *)(*plVar6 + 0x1d0));
        iVar5 = (uVar3 & 0xffff) - (uVar4 & 0xffff);
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = -(uint)bVar7;
    }
    return iVar5;
  }
LAB_074fe52c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

