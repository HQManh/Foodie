// rea decompile_all
// name: System.Enum$$InternalFlagsFormat
// address: 0x75ea7b8
// body: available
// range: 0x75ea7b8-0x75ea9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ea9a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ea9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Enum__InternalFlagsFormat(undefined8 param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((DAT_09521ef8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09521ef8 = 1;
  }
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Enum__ToUInt64(param_2);
  lVar5 = System_Enum__GetCachedValuesAndNames(param_1,1);
  if ((lVar5 != 0) && (lVar9 = *(long *)(lVar5 + 0x10), lVar9 != 0)) {
    lVar5 = *(long *)(lVar5 + 0x18);
    iVar2 = *(int *)(lVar9 + 0x18);
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar6,0);
    uVar3 = iVar2 - 1;
    uVar11 = uVar4;
    if (-1 < (int)uVar3) {
      bVar8 = true;
      uVar10 = (ulong)uVar3;
      do {
        if (uVar10 == 0) {
          if ((ulong)*(uint *)(lVar9 + 0x18) == 0) goto LAB_075ea9a8;
          if (*(long *)(lVar9 + 0x20) == 0) break;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_075ea9a8;
        uVar12 = *(ulong *)(lVar9 + 0x20 + uVar10 * 8);
        if ((uVar12 & (uVar11 ^ 0xffffffffffffffff)) == 0) {
          if (!bVar8) {
            if (plVar6 == (long *)0x0) goto LAB_075ea9ac;
            System_Text_StringBuilder__Insert(plVar6,0,DAT_091f86e8,0);
          }
          if (lVar5 == 0) goto LAB_075ea9ac;
          if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_075ea9a8;
          if (plVar6 == (long *)0x0) goto LAB_075ea9ac;
          uVar11 = uVar11 - uVar12;
          System_Text_StringBuilder__Insert(plVar6,0,*(undefined8 *)(lVar5 + 0x20 + uVar10 * 8),0);
          bVar8 = false;
        }
        bVar1 = 0 < (long)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
    if (uVar11 == 0) {
      if (uVar4 == 0) {
        uVar7 = DAT_091f95f0;
        if (*(long *)(lVar9 + 0x18) != 0) {
          if ((int)*(long *)(lVar9 + 0x18) == 0) {
LAB_075ea9a8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(lVar9 + 0x20) == 0) {
            if (lVar5 == 0) goto LAB_075ea9ac;
            if (*(int *)(lVar5 + 0x18) == 0) goto LAB_075ea9a8;
            uVar7 = *(undefined8 *)(lVar5 + 0x20);
          }
        }
        return uVar7;
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        goto LAB_075ea938;
      }
    }
    else if (param_2 != (long *)0x0) {
      lVar5 = *param_2;
      plVar6 = param_2;
LAB_075ea938:
                    /* WARNING: Could not recover jumptable at 0x075ea954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(lVar5 + 0x168))(plVar6,*(undefined8 *)(lVar5 + 0x170));
      return uVar7;
    }
  }
LAB_075ea9ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

