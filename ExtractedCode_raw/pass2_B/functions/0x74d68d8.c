// rea decompile_all
// name: System.Resources.ManifestBasedResourceGroveler$$CreateResourceSet
// address: 0x74d68d8
// body: available
// range: 0x74d68d8-0x74d6fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d6dd8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6eec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6ef4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6f00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6f08 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6f0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d6fcc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Resources_ManifestBasedResourceGroveler__CreateResourceSet
                 (long param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_0952155f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ca0);
    FUN_03f5c2a4(&DAT_091864b8);
    FUN_03f5c2a4(&DAT_091d2898);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918a138);
    FUN_03f5c2a4(&DAT_0918a160);
    FUN_03f5c2a4(&DAT_0918a3e8);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_091dc138);
    DAT_0952155f = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_074d6ef0;
  uVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
  if (((uVar2 & 1) != 0) &&
     (lVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200)), 4 < lVar3)
     ) {
    uVar4 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    plVar5 = (long *)thunk_FUN_03f9944c(DAT_09181ca0);
    System_IO_BinaryReader___ctor(plVar5,param_2,0);
    if (plVar5 == (long *)0x0) goto LAB_074d6ef0;
    iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
    if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a138);
    }
    if (iVar1 == **(int **)(DAT_0918a138 + 0xb8)) {
      iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
      if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918a138);
      }
      iVar10 = *(int *)(*(long *)(DAT_0918a138 + 0xb8) + 4);
      if (iVar1 == iVar10) {
        (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        uVar7 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      }
      else {
        if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918a138);
          iVar10 = *(int *)(*(long *)(DAT_0918a138 + 0xb8) + 4);
        }
        if (iVar1 <= iVar10) {
          uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar4 = FUN_03f5c394(uVar4,1);
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          FUN_039b1d98(uVar6);
          uVar6 = System_Resources_ResourceManager_ResourceManagerMediator__get_MainAssembly(uVar6);
          FUN_039b1d98();
          uVar6 = System_Reflection_Assembly__GetSimpleName(uVar6,0);
          FUN_039b1d98(uVar4);
          FUN_039b0da0(uVar4,uVar6);
          FUN_039af17c(uVar4,0,uVar6);
          uVar6 = thunk_FUN_03fc39d4(&DAT_09202e28);
          uVar4 = System_Environment__GetResourceString(uVar6,uVar4,0);
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar6 = thunk_FUN_03f9944c();
          System_NotSupportedException___ctor(uVar6,uVar4,0);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091d2898);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar4);
        }
        iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        plVar8 = (long *)(**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        if (plVar8 == (long *)0x0) goto LAB_074d6ef0;
        lVar3 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        uVar7 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        plVar5 = (long *)(**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        if (plVar5 == (long *)0x0) goto LAB_074d6ef0;
        (**(code **)(*plVar5 + 0x348))(plVar5,lVar3 + iVar1,0,*(undefined8 *)(*plVar5 + 0x350));
      }
      (**(code **)(*param_2 + 0x218))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x220));
      uVar2 = System_Resources_ManifestBasedResourceGroveler__CanUseDefaultResourceClasses
                        (param_1,uVar6,uVar7);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = FUN_03f5c7b8(uVar6,1,DAT_091dc130,DAT_091d2898);
        plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar5 == (long *)0x0) goto LAB_074d6ef0;
        lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar3 == 0) goto LAB_074d6ef8;
        if ((int)plVar5[3] == 0) goto LAB_074d6ef4;
        plVar5[4] = (long)param_2;
        thunk_FUN_03f5d7b8(plVar5 + 4,param_2);
        lVar3 = System_Activator__CreateInstance(uVar4,plVar5,0);
        uVar4 = DAT_091864b8;
        if (lVar3 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = thunk_FUN_03f99350(lVar3,DAT_091864b8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(lVar3,uVar4);
          }
        }
        plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar5 == (long *)0x0) goto LAB_074d6ef0;
        if ((lVar9 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
        goto LAB_074d6ef8;
        if ((int)plVar5[3] == 0) goto LAB_074d6ef4;
        plVar5[4] = lVar9;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar9);
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
          uVar2 = System_Type__op_Equality(*(undefined8 *)(lVar3 + 0x40),0,0);
          if ((uVar2 & 1) == 0) {
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 == 0)) goto LAB_074d6ef0;
            uVar4 = *(undefined8 *)(lVar3 + 0x40);
          }
          else {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = FUN_03f5c840(uVar7,1,0,DAT_091dc138,DAT_091d2898);
          }
          plVar5 = (long *)System_Activator__CreateInstance(uVar4,0x234,0,plVar5,0,0,0);
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
          if ((*(byte *)(DAT_0918a160 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a160 + 0x130) * 8 + -8)
              == DAT_0918a160)) {
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        goto LAB_074d6ef0;
      }
      goto LAB_074d6b10;
    }
    (**(code **)(*param_2 + 0x218))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x220));
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
LAB_074d6b10:
      plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918a3e8);
      System_Resources_RuntimeResourceSet___ctor(plVar5,param_2);
      return plVar5;
    }
    plVar5 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar5 != (long *)0x0) {
      lVar3 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar3 != 0) {
        if ((int)plVar5[3] != 0) {
          plVar5[4] = (long)param_2;
          thunk_FUN_03f5d7b8(plVar5 + 4,param_2);
          if ((param_3 != 0) &&
             (lVar3 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
          goto LAB_074d6ef8;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
            plVar5[5] = param_3;
            thunk_FUN_03f5d7b8(plVar5 + 5,param_3);
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar5 = (long *)System_Activator__CreateInstance
                                       (*(undefined8 *)(lVar3 + 0x40),plVar5,0);
            if (plVar5 == (long *)0x0) {
              return (long *)0x0;
            }
            if ((*(byte *)(DAT_0918a160 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a160 + 0x130) * 8 + -8
                         ) == DAT_0918a160)) {
              return plVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar5);
          }
        }
LAB_074d6ef4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_074d6ef8:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
  }
LAB_074d6ef0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

