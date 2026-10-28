// rea decompile_all
// name: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils$$TryBuildImmutableForDictionaryContract
// address: 0x7693fe8
// body: available
// range: 0x7693fe8-0x76944cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76944bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76944c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76944cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Newtonsoft_Json_Utilities_ImmutableCollectionsUtils__TryBuildImmutableForDictionaryContract
          (long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if ((DAT_095225b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9dd8);
    FUN_03f5c2a4(&DAT_091c9d00);
    FUN_03f5c2a4(&DAT_09179488);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_09186af8);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091eb458);
    FUN_03f5c2a4(&DAT_091eb468);
    FUN_03f5c2a4(&DAT_091915c0);
    FUN_03f5c2a4(&DAT_091915b0);
    DAT_095225b4 = 1;
  }
  uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericType(param_1,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_091915c0);
    System_Object___ctor(lVar2,0);
    if (param_1 == (long *)0x0) {
LAB_076944bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    if (plVar3 == (long *)0x0) goto LAB_076944bc;
    uVar4 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    if (lVar2 == 0) goto LAB_076944bc;
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09186af8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = *(undefined8 *)(*(long *)(DAT_09186af8 + 0xb8) + 8);
    uVar4 = thunk_FUN_03f9944c(DAT_09179488);
    FUN_05322d94(uVar4,lVar2,DAT_091eb468,0);
    lVar2 = FUN_04ae5fd0(uVar9,uVar4,DAT_091c9dd8);
    if (lVar2 != 0) {
      plVar5 = (long *)Newtonsoft_Json_Utilities_TypeExtensions__Assembly(plVar3,0);
      if (plVar5 == (long *)0x0) goto LAB_076944bc;
      plVar5 = (long *)(**(code **)(*plVar5 + 0x288))
                                 (plVar5,*(undefined8 *)(lVar2 + 0x18),
                                  *(undefined8 *)(*plVar5 + 0x290));
      plVar3 = (long *)Newtonsoft_Json_Utilities_TypeExtensions__Assembly(plVar3,0);
      if (plVar3 == (long *)0x0) goto LAB_076944bc;
      lVar2 = (**(code **)(*plVar3 + 0x288))
                        (plVar3,*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(*plVar3 + 0x290));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar1 = System_Type__op_Inequality(plVar5,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Type__op_Inequality(lVar2,0,0);
        if ((uVar1 & 1) != 0) {
          if (lVar2 == 0) goto LAB_076944bc;
          uVar4 = System_Type__GetMethods(lVar2,0);
          if (*(int *)(DAT_091915b0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091915b0);
          }
          puVar7 = *(undefined8 **)(DAT_091915b0 + 0xb8);
          lVar2 = puVar7[2];
          if (lVar2 == 0) {
            if (*(int *)(DAT_091915b0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091915b0);
              puVar7 = *(undefined8 **)(DAT_091915b0 + 0xb8);
            }
            uVar9 = *puVar7;
            lVar2 = thunk_FUN_03f9944c(DAT_09178d40);
            FUN_05322d94(lVar2,uVar9,DAT_091eb458,0);
            plVar3 = (long *)(*(long *)(DAT_091915b0 + 0xb8) + 0x10);
            *plVar3 = lVar2;
            thunk_FUN_03f5d7b8(plVar3,lVar2);
          }
          plVar3 = (long *)FUN_04ae5fd0(uVar4,lVar2,DAT_091c9d00);
          uVar1 = System_Reflection_MethodInfo__op_Inequality(plVar3,0,0);
          if ((uVar1 & 1) != 0) {
            plVar6 = (long *)FUN_03f5c394(DAT_09180748,2);
            if (plVar6 == (long *)0x0) goto LAB_076944bc;
            if ((param_2 != 0) &&
               (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
LAB_076944c4:
              uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar4,0);
            }
            if ((int)plVar6[3] == 0) {
LAB_076944c0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[4] = param_2;
            thunk_FUN_03f5d7b8(plVar6 + 4,param_2);
            if ((param_3 != 0) &&
               (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0))
            goto LAB_076944c4;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_076944c0;
            plVar6[5] = param_3;
            thunk_FUN_03f5d7b8(plVar6 + 5,param_3);
            if (plVar5 == (long *)0x0) goto LAB_076944bc;
            uVar4 = (**(code **)(*plVar5 + 0x948))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x950));
            *param_4 = uVar4;
            thunk_FUN_03f5d7b8(param_4,uVar4);
            plVar5 = (long *)FUN_03f5c394(DAT_09180748,2);
            if (plVar5 == (long *)0x0) goto LAB_076944bc;
            if ((param_2 != 0) &&
               (lVar2 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
            goto LAB_076944c4;
            if ((int)plVar5[3] == 0) goto LAB_076944c0;
            plVar5[4] = param_2;
            thunk_FUN_03f5d7b8(plVar5 + 4,param_2);
            if ((param_3 != 0) &&
               (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
            goto LAB_076944c4;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_076944c0;
            plVar5[5] = param_3;
            thunk_FUN_03f5d7b8(plVar5 + 5,param_3);
            if (plVar3 == (long *)0x0) goto LAB_076944bc;
            uVar4 = (**(code **)(*plVar3 + 0x418))(plVar3,plVar5,*(undefined8 *)(*plVar3 + 0x420));
            if (*(int *)(DAT_09187480 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187480);
            }
            plVar3 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                       (0);
            if (plVar3 == (long *)0x0) goto LAB_076944bc;
            uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 400));
            uVar8 = 1;
            goto LAB_07694494;
          }
        }
      }
    }
  }
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  uVar4 = 0;
  uVar8 = 0;
LAB_07694494:
  *param_5 = uVar4;
  thunk_FUN_03f5d7b8(param_5);
  return uVar8;
}

