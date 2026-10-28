// rea decompile_all
// name: System.UnitySerializationHolder$$GetRealObject
// address: 0x75fb414
// body: available
// range: 0x75fb414-0x75fb93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fb51c to 0x74e9318 System.Reflection.Assembly$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fb83c to 0x3f5c840 FUN_03f5c840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fb8c4 to 0x75fa74c System.UnitySerializationHolder$$MakeElementTypes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75fb8d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fb8e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fb930 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_UnitySerializationHolder__GetRealObject(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  plVar2 = param_1;
  if ((DAT_09521f80 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09183f58);
    FUN_03f5c2a4(&DAT_091882a0);
    FUN_03f5c2a4(&DAT_09188330);
    FUN_03f5c2a4(&DAT_091dc138);
    FUN_03f5c2a4(&DAT_091ddd50);
    FUN_03f5c2a4(&DAT_09200490);
    FUN_03f5c2a4(&DAT_091fc060);
    plVar2 = (long *)FUN_03f5c2a4(&DAT_091fff08);
    DAT_09521f80 = 1;
  }
  iVar1 = (int)param_1[9];
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        plVar2 = &DAT_09183f58;
LAB_075fb6fc:
        lVar5 = *plVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *plVar2;
        }
        return **(undefined8 **)(lVar5 + 0xb8);
      }
      if (iVar1 == 2) {
        plVar2 = &DAT_09183158;
        goto LAB_075fb6fc;
      }
    }
    else {
      if (iVar1 == 3) {
        plVar2 = &DAT_091882a0;
        goto LAB_075fb6fc;
      }
      if (iVar1 == 4) {
        lVar5 = param_1[7];
        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) goto LAB_075fb8c8;
        lVar3 = param_1[8];
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x10) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = FUN_03f5c840(lVar5,1,0,DAT_091dc138,DAT_091ddd50);
            return uVar6;
          }
          plVar2 = (long *)System_Reflection_Assembly__Load(lVar3,0);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x075fb580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(*plVar2 + 0x2f8))
                              (plVar2,param_1[7],1,0,*(undefined8 *)(*plVar2 + 0x300));
            return uVar6;
          }
          goto LAB_075fb8d4;
        }
        goto LAB_075fb8d8;
      }
    }
LAB_075fb8ec:
    uVar6 = thunk_FUN_03fc39d4(&DAT_09205420);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar7,uVar6,0);
LAB_075fb91c:
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ddd50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  if (6 < iVar1) {
    if (iVar1 == 7) {
      uVar4 = System_Reflection_MethodBase__op_Equality(param_1[6],0,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = param_1[5];
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar2 = (long *)System_Type__op_Equality(lVar5,0,0);
        if (((ulong)plVar2 & 1) != 0) {
          puVar8 = &DAT_09200490;
          goto LAB_075fb8e0;
        }
      }
      uVar4 = System_Reflection_MethodBase__op_Inequality(param_1[6],0,0);
      if ((uVar4 & 1) == 0) {
        plVar2 = (long *)param_1[5];
        if ((plVar2 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar2 + 0x488))(plVar2,*(undefined8 *)(*plVar2 + 0x490)),
           lVar5 == 0)) goto LAB_075fb8d4;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 4)) goto LAB_075fb8e8;
        uVar6 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
        goto LAB_075fb8b4;
      }
      plVar2 = (long *)param_1[6];
      if ((plVar2 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340)),
         lVar5 == 0)) goto LAB_075fb8d4;
      if (*(uint *)(param_1 + 4) < *(uint *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      }
      goto LAB_075fb8e8;
    }
    if (iVar1 != 8) goto LAB_075fb8ec;
    *(undefined4 *)(param_1 + 9) = 4;
    plVar2 = (long *)(**(code **)(*param_1 + 0x1a8))
                               (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1b0));
    lVar5 = DAT_095354b8;
    if (plVar2 == (long *)0x0) {
LAB_075fb5dc:
      plVar2 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_095354b8 + 0x130)) goto LAB_075fb5dc;
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) !=
          DAT_095354b8) {
        plVar2 = (long *)0x0;
      }
    }
    lVar3 = param_1[2];
    *(undefined4 *)(param_1 + 9) = 8;
    if (lVar3 == 0) {
LAB_075fb8d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Type__op_Equality(uVar6,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (plVar2 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar2 + 0x948))(plVar2,param_1[2],*(undefined8 *)(*plVar2 + 0x950));
LAB_075fb8b4:
        uVar6 = System_UnitySerializationHolder__MakeElementTypes(param_1,uVar6);
        return uVar6;
      }
      goto LAB_075fb8d4;
    }
    goto LAB_075fb8e8;
  }
  if (iVar1 == 5) {
    if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0x10) != 0)) {
      if (param_1[8] != 0) {
        plVar2 = (long *)System_Reflection_Assembly__Load(param_1[8],0);
        if (plVar2 == (long *)0x0) goto LAB_075fb8d4;
        uVar6 = (**(code **)(*plVar2 + 0x308))(plVar2,param_1[7],*(undefined8 *)(*plVar2 + 0x310));
        if (*(int *)(DAT_09188330 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188330);
        }
        uVar4 = System_Reflection_Module__op_Equality(uVar6,0,0);
        if ((uVar4 & 1) == 0) {
          return uVar6;
        }
        uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar6 = FUN_03f5c394(uVar6,2);
        lVar5 = param_1[7];
        FUN_039b1d98();
        FUN_039b0da0(uVar6,lVar5);
        FUN_039af17c(uVar6,0,lVar5);
        lVar5 = param_1[8];
        FUN_039b0da0(uVar6,lVar5);
        FUN_039af17c(uVar6,1,lVar5);
        uVar7 = thunk_FUN_03fc39d4(&DAT_0920f620);
        uVar6 = System_Environment__GetResourceString(uVar7,uVar6);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar7 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar6,0);
        goto LAB_075fb91c;
      }
      goto LAB_075fb8d8;
    }
LAB_075fb8c8:
    puVar8 = &DAT_091fff08;
  }
  else {
    if (iVar1 != 6) goto LAB_075fb8ec;
    if ((param_1[7] == 0) || (*(int *)(param_1[7] + 0x10) == 0)) goto LAB_075fb8c8;
    if (param_1[8] != 0) {
      uVar6 = System_Reflection_Assembly__Load(param_1[8],0);
      return uVar6;
    }
LAB_075fb8d8:
    plVar2 = (long *)0x0;
    puVar8 = &DAT_091fc060;
  }
LAB_075fb8e0:
  System_UnitySerializationHolder__ThrowInsufficientInformation(plVar2,*puVar8);
LAB_075fb8e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

