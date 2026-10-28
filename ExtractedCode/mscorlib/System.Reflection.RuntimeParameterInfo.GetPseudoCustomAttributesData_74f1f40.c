// rea decompile_all
// name: System.Reflection.RuntimeParameterInfo$$GetPseudoCustomAttributesData
// address: 0x74f1f40
// body: available
// range: 0x74f1f40-0x74f246b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f2458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f245c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f2468 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_RuntimeParameterInfo__GetPseudoCustomAttributesData(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  
  if ((DAT_09521632 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_0917fdc0);
    FUN_03f5c2a4(&DAT_09177310);
    FUN_03f5c2a4(&DAT_09171e68);
    FUN_03f5c2a4(&DAT_09172330);
    FUN_03f5c2a4(&DAT_09172668);
    FUN_03f5c2a4(&DAT_091726a0);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091733c0);
    FUN_03f5c2a4(&DAT_0918c880);
    DAT_09521632 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  iVar1 = (uVar3 >> 1 & 1) + (uVar2 & 1) + (uVar4 >> 4 & 1);
  if (param_1[8] == 0) {
    if (iVar1 == 0) {
      return (long *)0x0;
    }
  }
  else {
    iVar1 = iVar1 + 1;
  }
  plVar5 = (long *)FUN_03f5c394(DAT_0917fdb0,iVar1);
  uVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar8 = DAT_09171e68;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Type__GetTypeFromHandle(uVar8,0);
    if (lVar7 == 0) goto LAB_074f2458;
    uVar8 = System_Type__GetConstructor
                      (lVar7,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar7 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar7,uVar8);
    if (plVar5 == (long *)0x0) goto LAB_074f2458;
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    goto LAB_074f2460;
    if ((int)plVar5[3] == 0) goto LAB_074f245c;
    plVar5[4] = lVar7;
    thunk_FUN_03f5d7b8(plVar5 + 4,lVar7);
    uVar2 = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar8 = DAT_091726a0;
  if ((uVar3 >> 1 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Type__GetTypeFromHandle(uVar8,0);
    if (lVar7 == 0) goto LAB_074f2458;
    uVar8 = System_Type__GetConstructor
                      (lVar7,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar7 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar7,uVar8);
    if (plVar5 == (long *)0x0) goto LAB_074f2458;
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    goto LAB_074f2460;
    if (*(uint *)(plVar5 + 3) <= uVar2) goto LAB_074f245c;
    uVar6 = (ulong)uVar2;
    uVar2 = uVar2 + 1;
    plVar5[uVar6 + 4] = lVar7;
    thunk_FUN_03f5d7b8(plVar5 + uVar6 + 4,lVar7);
  }
  uVar3 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar8 = DAT_09172668;
  if ((uVar3 >> 4 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = System_Type__GetTypeFromHandle(uVar8,0);
    if (lVar7 == 0) goto LAB_074f2458;
    uVar8 = System_Type__GetConstructor
                      (lVar7,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar7 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar7,uVar8);
    if (plVar5 == (long *)0x0) goto LAB_074f2458;
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    goto LAB_074f2460;
    if (*(uint *)(plVar5 + 3) <= uVar2) goto LAB_074f245c;
    uVar6 = (ulong)uVar2;
    uVar2 = uVar2 + 1;
    plVar5[uVar6 + 4] = lVar7;
    thunk_FUN_03f5d7b8(plVar5 + uVar6 + 4,lVar7);
  }
  if (param_1[8] == 0) {
    return plVar5;
  }
  lVar7 = FUN_03f5c394(DAT_0917fdc0,1);
  uVar8 = DAT_091733c0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
  if (param_1[8] != 0) {
    local_44 = *(undefined4 *)(param_1[8] + 0x30);
    uVar10 = FUN_03f5c42c(DAT_0918c880,&local_44);
    local_60 = 0;
    uStack_58 = 0;
    System_Reflection_CustomAttributeTypedArgument___ctor(&local_60,uVar8,uVar10);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_074f245c;
      *(undefined8 *)(lVar7 + 0x28) = uStack_58;
      *(undefined8 *)(lVar7 + 0x20) = local_60;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20),0);
      lVar9 = System_Type__GetTypeFromHandle(DAT_09172330,0);
      plVar11 = (long *)FUN_03f5c394(DAT_09180748,1);
      lVar12 = System_Type__GetTypeFromHandle(DAT_091733c0,0);
      if (plVar11 != (long *)0x0) {
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_074f2460:
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if ((int)plVar11[3] == 0) {
LAB_074f245c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar11[4] = lVar12;
        thunk_FUN_03f5d7b8(plVar11 + 4,lVar12);
        if (lVar9 != 0) {
          uVar8 = System_Type__GetConstructor(lVar9,plVar11,0);
          if (*(int *)(DAT_09177310 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09177310);
          }
          uVar10 = **(undefined8 **)(DAT_09177310 + 0xb8);
          lVar9 = thunk_FUN_03f9944c(DAT_09183040);
          System_Reflection_CustomAttributeData___ctor(lVar9,uVar8,lVar7,uVar10);
          if (plVar5 != (long *)0x0) {
            if ((lVar9 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_074f2460;
            if (uVar2 < *(uint *)(plVar5 + 3)) {
              plVar5[(ulong)uVar2 + 4] = lVar9;
              thunk_FUN_03f5d7b8(plVar5 + (ulong)uVar2 + 4,lVar9);
              return plVar5;
            }
            goto LAB_074f245c;
          }
        }
      }
    }
  }
LAB_074f2458:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

