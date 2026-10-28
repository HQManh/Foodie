// rea decompile_all
// name: System.DefaultBinder$$ExactBinding
// address: 0x75e8c30
// body: available
// range: 0x75e8c30-0x75e8ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e8e48 to 0x75e8ea8 System.DefaultBinder$$FindMostDerivedNewSlotMeth (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75e8e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8e50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8e5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e8ea4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DefaultBinder__ExactBinding(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  if ((DAT_09521ee4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_091802d0);
    DAT_09521ee4 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921f240);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c8260);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  plVar2 = (long *)FUN_03f5c394(DAT_091802d0,*(undefined4 *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar1) {
    uVar9 = 0;
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) goto LAB_075e8e50;
      plVar11 = (long *)(param_1 + uVar10 * 8 + 0x20);
      plVar3 = (long *)*plVar11;
      if ((plVar3 == (long *)0x0) ||
         (lVar4 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0)),
         lVar4 == 0)) goto LAB_075e8e4c;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (param_2 == 0) goto LAB_075e8e4c;
        iVar8 = *(int *)(param_2 + 0x18);
        if (iVar8 < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          do {
            if (*(uint *)(lVar4 + 0x18) <= (uint)lVar12) goto LAB_075e8e50;
            plVar3 = *(long **)(lVar4 + 0x20 + lVar12 * 8);
            if (plVar3 == (long *)0x0) goto LAB_075e8e4c;
            plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0))
            ;
            if (*(uint *)(param_2 + 0x18) <= (uint)lVar12) goto LAB_075e8e50;
            if (plVar3 == (long *)0x0) goto LAB_075e8e4c;
            uVar5 = (**(code **)(*plVar3 + 0x968))
                              (plVar3,*(undefined8 *)(param_2 + 0x20 + lVar12 * 8),
                               *(undefined8 *)(*plVar3 + 0x970));
            if ((uVar5 & 1) == 0) {
              iVar8 = *(int *)(param_2 + 0x18);
              break;
            }
            iVar8 = *(int *)(param_2 + 0x18);
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < iVar8);
        }
        if (iVar8 <= (int)lVar12) {
          if (*(uint *)(param_1 + 0x18) <= uVar10) goto LAB_075e8e50;
          if (plVar2 == (long *)0x0) goto LAB_075e8e4c;
          lVar4 = *plVar11;
          if ((lVar4 != 0) &&
             (lVar12 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar12 == 0)) {
            uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,0);
          }
          if (*(uint *)(plVar2 + 3) <= uVar9) goto LAB_075e8e50;
          plVar2[(long)(int)uVar9 + 4] = lVar4;
          thunk_FUN_03f5d7b8(plVar2 + (long)(int)uVar9 + 4,lVar4);
          uVar9 = uVar9 + 1;
        }
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
    if (uVar9 != 0) {
      if (uVar9 != 1) {
        if (*(int *)(DAT_09183868 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = System_DefaultBinder__FindMostDerivedNewSlotMeth(plVar2,uVar9);
        return lVar4;
      }
      if (plVar2 == (long *)0x0) {
LAB_075e8e4c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((int)plVar2[3] != 0) {
        return plVar2[4];
      }
LAB_075e8e50:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  return 0;
}

