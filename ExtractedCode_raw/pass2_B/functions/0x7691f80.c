// rea decompile_all
// name: Newtonsoft.Json.Utilities.EnumUtils$$InternalFlagsFormat
// address: 0x7691f80
// body: available
// range: 0x7691f80-0x7692123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769211c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7692120 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((DAT_095225a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    DAT_095225a3 = 1;
  }
  if ((param_1 != 0) && (lVar8 = *(long *)(param_1 + 0x18), lVar8 != 0)) {
    lVar7 = *(long *)(param_1 + 0x28);
    iVar2 = *(int *)(lVar8 + 0x18);
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar4,0);
    uVar3 = iVar2 - 1;
    uVar10 = param_2;
    if (-1 < (int)uVar3) {
      bVar6 = true;
      uVar9 = (ulong)uVar3;
      do {
        if (uVar9 == 0) {
          if ((ulong)*(uint *)(lVar8 + 0x18) == 0) goto LAB_0769211c;
          if (*(long *)(lVar8 + 0x20) == 0) break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0769211c;
        uVar11 = *(ulong *)(lVar8 + 0x20 + uVar9 * 8);
        if ((uVar11 & (uVar10 ^ 0xffffffffffffffff)) == 0) {
          if (!bVar6) {
            if (plVar4 == (long *)0x0) goto LAB_07692120;
            System_Text_StringBuilder__Insert(plVar4,0,DAT_091f86e8,0);
          }
          if (lVar7 == 0) goto LAB_07692120;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0769211c;
          if (plVar4 == (long *)0x0) goto LAB_07692120;
          uVar10 = uVar10 - uVar11;
          System_Text_StringBuilder__Insert(plVar4,0,*(undefined8 *)(lVar7 + 0x20 + uVar9 * 8),0);
          bVar6 = false;
        }
        bVar1 = 0 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    if (uVar10 == 0) {
      if (param_2 != 0) {
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x076920f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          return uVar5;
        }
        goto LAB_07692120;
      }
      if (*(long *)(lVar8 + 0x18) != 0) {
        if ((int)*(long *)(lVar8 + 0x18) != 0) {
          if (*(long *)(lVar8 + 0x20) != 0) {
            return 0;
          }
          if (lVar7 == 0) goto LAB_07692120;
          if (*(int *)(lVar7 + 0x18) != 0) {
            return *(undefined8 *)(lVar7 + 0x20);
          }
        }
LAB_0769211c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
    return 0;
  }
LAB_07692120:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

