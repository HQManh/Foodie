// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMethodRef$$Resolve
// address: 0x749e658
// body: available
// range: 0x749e658-0x749eab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749e9d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749e9d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749eaac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749eab4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Messaging_CADMethodRef__Resolve(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  if ((DAT_0952136c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4518);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_091dc130);
    DAT_0952136c = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_03f5c7b8(uVar8,1,DAT_091dc130,DAT_091c4518);
  uVar8 = System_Runtime_Remoting_Messaging_CADMethodRef__GetTypes
                    (lVar2,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (lVar2 == 0) goto LAB_0749e9d0;
    plVar3 = (long *)System_Type__GetMethod(lVar2,*(undefined8 *)(param_1 + 0x20),0x34,0,uVar8,0,0);
  }
  else {
    if (lVar2 == 0) goto LAB_0749e9d0;
    plVar3 = (long *)System_Type__GetConstructor(lVar2,0x34,0,uVar8,0,0);
  }
  uVar4 = System_Reflection_MethodBase__op_Inequality(plVar3,0,0);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    if (plVar3 == (long *)0x0) goto LAB_0749e9d0;
    uVar4 = (**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
    if ((uVar4 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  uVar4 = System_Reflection_MethodBase__op_Inequality(plVar3,0,0);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar8 = System_Runtime_Remoting_Messaging_CADMethodRef__GetTypes();
    if (plVar3 == (long *)0x0) goto LAB_0749e9d0;
    lVar6 = *plVar3;
    if ((*(byte *)(lVar6 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
        DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    plVar3 = (long *)(**(code **)(lVar6 + 0x418))(plVar3,uVar8,*(undefined8 *)(lVar6 + 0x420));
  }
  uVar4 = System_Reflection_MethodBase__op_Equality(plVar3,0,0);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar2 = System_Type__GetMethods(lVar2,0);
    if (lVar2 == 0) {
LAB_0749e9d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
LAB_0749e9d4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar9 = *(long **)(lVar2 + (long)(int)uVar10 * 8 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_0749e9d0;
        uVar8 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        uVar4 = System_String__op_Inequality(uVar8,*(undefined8 *)(param_1 + 0x20),0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = (**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330)),
           (uVar4 & 1) != 0)) {
          lVar6 = (**(code **)(*plVar9 + 0x338))(plVar9,*(undefined8 *)(*plVar9 + 0x340));
          if ((lVar6 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_0749e9d0;
          if (*(int *)(lVar6 + 0x18) == *(int *)(*(long *)(param_1 + 0x30) + 0x18)) {
            uVar8 = System_Runtime_Remoting_Messaging_CADMethodRef__GetTypes();
            plVar3 = (long *)(**(code **)(*plVar9 + 0x418))
                                       (plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x420));
            if (plVar3 == (long *)0x0) goto LAB_0749e9d0;
            lVar6 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
            if ((*(long *)(param_1 + 0x28) == 0) || (lVar6 == 0)) goto LAB_0749e9d0;
            uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + 0x18);
            if (uVar1 == *(uint *)(lVar6 + 0x18)) {
              if (0 < (int)uVar1) {
                lVar11 = 4;
                do {
                  uVar12 = (int)lVar11 - 4;
                  if (uVar1 <= uVar12) goto LAB_0749e9d4;
                  plVar9 = *(long **)(lVar6 + lVar11 * 8);
                  if ((plVar9 == (long *)0x0) ||
                     (plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))
                                                 (plVar9,*(undefined8 *)(*plVar9 + 0x1f0)),
                     plVar9 == (long *)0x0)) goto LAB_0749e9d0;
                  uVar8 = (**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(*plVar9 + 0x2f0));
                  lVar7 = *(long *)(param_1 + 0x28);
                  if (lVar7 == 0) goto LAB_0749e9d0;
                  if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_0749e9d4;
                  uVar4 = System_String__op_Inequality(uVar8,*(undefined8 *)(lVar7 + lVar11 * 8),0);
                  if ((uVar4 & 1) != 0) {
                    plVar3 = (long *)0x0;
                    break;
                  }
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 + -4 < (int)uVar1);
              }
              uVar4 = System_Reflection_MethodBase__op_Inequality(plVar3,0,0);
              if ((uVar4 & 1) != 0) break;
            }
          }
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
  }
  uVar4 = System_Reflection_MethodBase__op_Equality(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    uVar8 = thunk_FUN_03fc39d4(&DAT_091805f8);
    uVar8 = FUN_03f5c394(uVar8,5);
    FUN_039b1d98();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09207cc0);
    FUN_039af17c(uVar8,0,uVar5);
    FUN_039af17c(uVar8,1,*(undefined8 *)(param_1 + 0x20));
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f7860);
    FUN_039af17c(uVar8,2,uVar5);
    FUN_039af17c(uVar8,3,*(undefined8 *)(param_1 + 0x18));
    uVar5 = thunk_FUN_03fc39d4(&DAT_091f7320);
    FUN_039af17c(uVar8,4,uVar5);
    uVar8 = System_String__Concat(uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09189ec8);
    uVar5 = thunk_FUN_03f9944c();
    System_Runtime_Remoting_RemotingException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c4518);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  return plVar3;
}

