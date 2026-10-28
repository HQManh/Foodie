// rea decompile_all
// name: System.MulticastDelegate$$RemoveImpl
// address: 0x7606a1c
// body: available
// range: 0x7606a1c-0x7606d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7606cd4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7606cdc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7606ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7606d14 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MulticastDelegate__RemoveImpl(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if ((DAT_09521ffc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05b0);
    FUN_03f5c2a4(&DAT_0917fe58);
    FUN_03f5c2a4(&DAT_09188528);
    DAT_09521ffc = 1;
  }
  plVar6 = param_1;
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09188528 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09188528 + 0x130) * 8 + -8) !=
        DAT_09188528)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_2);
    }
    plVar4 = (long *)param_1[0xf];
    lVar11 = param_2[0xf];
    if (plVar4 == (long *)0x0) {
      if (lVar11 == 0) {
        uVar5 = (**(code **)(*param_1 + 0x138))(param_1,param_2,*(undefined8 *)(*param_1 + 0x140));
        plVar6 = (long *)0x0;
        if ((uVar5 & 1) == 0) {
          plVar6 = param_1;
        }
      }
      else if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar5 = 0;
        uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar10 = (**(code **)(*param_1 + 0x138))
                             (param_1,*(undefined8 *)(lVar11 + 0x20 + uVar5 * 8),
                              *(undefined8 *)(*param_1 + 0x140));
          if ((uVar10 & 1) != 0) {
            return (long *)0x0;
          }
          uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
    }
    else {
      if (lVar11 == 0) {
        uVar3 = FUN_0492302c(plVar4,param_2,DAT_091c05b0);
        if (uVar3 == 0xffffffff) {
          return param_1;
        }
        lVar11 = param_1[0xf];
        if (lVar11 == 0) goto LAB_07606ce0;
        if ((int)*(ulong *)(lVar11 + 0x18) < 2) {
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar7 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar7,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091d3e58);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar8);
        }
        if ((*(ulong *)(lVar11 + 0x18) & 0xffffffff) == 2) {
          return *(long **)(lVar11 + (ulong)(uVar3 == 0) * 8 + 0x20);
        }
        plVar6 = (long *)FUN_03f728f4(param_1);
        if ((param_1[0xf] == 0) ||
           (lVar11 = FUN_03f5c394(DAT_0917fe58,*(int *)(param_1[0xf] + 0x18) + -1),
           plVar6 == (long *)0x0)) goto LAB_07606ce0;
        plVar4 = plVar6 + 0xf;
        *plVar4 = lVar11;
        thunk_FUN_03f5d7b8(plVar4,lVar11);
        System_Array__Copy(param_1[0xf],*plVar4,uVar3,0);
        lVar11 = param_1[0xf];
        if (lVar11 == 0) goto LAB_07606ce0;
        lVar9 = *plVar4;
        iVar1 = uVar3 + 1;
        iVar2 = *(int *)(lVar11 + 0x18) + ~uVar3;
      }
      else {
        uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,lVar11,*(undefined8 *)(*plVar4 + 0x140));
        if ((uVar5 & 1) != 0) {
          return (long *)0x0;
        }
        uVar3 = System_MulticastDelegate__LastIndexOf(uVar5,param_1[0xf],param_2[0xf]);
        if (uVar3 == 0xffffffff) {
          return param_1;
        }
        plVar6 = (long *)FUN_03f728f4(param_1);
        if (((param_1[0xf] == 0) || (param_2[0xf] == 0)) ||
           (lVar11 = FUN_03f5c394(DAT_0917fe58,
                                  *(int *)(param_1[0xf] + 0x18) - *(int *)(param_2[0xf] + 0x18)),
           plVar6 == (long *)0x0)) {
LAB_07606ce0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar4 = plVar6 + 0xf;
        *plVar4 = lVar11;
        thunk_FUN_03f5d7b8(plVar4,lVar11);
        System_Array__Copy(param_1[0xf],*plVar4,uVar3,0);
        if ((param_2[0xf] == 0) || (lVar11 = param_1[0xf], lVar11 == 0)) goto LAB_07606ce0;
        lVar9 = *plVar4;
        iVar1 = uVar3 + *(int *)(param_2[0xf] + 0x18);
        iVar2 = *(int *)(lVar11 + 0x18) - iVar1;
      }
      System_Array__Copy(lVar11,iVar1,lVar9,uVar3,iVar2,0);
    }
  }
  return plVar6;
}

