// rea decompile_all
// name: System.RuntimeType$$GetDefaultConstructor
// address: 0x75f7260
// body: available
// range: 0x75f7260-0x75f7403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f73f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f73f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f7400 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__GetDefaultConstructor(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09521f5d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091883e0);
    FUN_03f5c2a4(&DAT_0918a388);
    DAT_09521f5d = 1;
  }
  plVar8 = param_1 + 3;
  if (*plVar8 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_091883e0);
    System_MonoTypeInfo___ctor(lVar3,0);
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(*plVar8 + 0x18);
  }
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Reflection_ConstructorInfo__op_Equality(plVar7,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*param_1 + 0x6a8))(param_1,0x36,*(undefined8 *)(*param_1 + 0x6b0));
    if (lVar3 == 0) {
LAB_075f73f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar6) {
      lVar9 = 0;
      do {
        if (uVar6 <= (uint)lVar9) {
LAB_075f73f8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4 = *(long **)(lVar3 + 0x20 + lVar9 * 8);
        if (plVar4 == (long *)0x0) goto LAB_075f73f4;
        iVar1 = (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (iVar1 == 0) {
          if (uVar6 <= (uint)lVar9) goto LAB_075f73f8;
          plVar7 = *(long **)(lVar3 + 0x20 + lVar9 * 8);
          if (plVar7 != (long *)0x0) {
            if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918a388 + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_0918a388 + 0x130) * 8 + -8
                         ) != DAT_0918a388)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar7);
            }
          }
          if (*plVar8 != 0) {
            puVar5 = (undefined8 *)(*plVar8 + 0x18);
            *puVar5 = plVar7;
            thunk_FUN_03f5d7b8(puVar5,plVar7);
            return plVar7;
          }
          goto LAB_075f73f4;
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar6);
    }
  }
  return plVar7;
}

