// rea decompile_all
// name: System.Reflection.FieldInfo$$GetPseudoCustomAttributesData
// address: 0x74df658
// body: available
// range: 0x74df658-0x74dfbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dfbdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dfbe0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dfbec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_FieldInfo__GetPseudoCustomAttributesData(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  
  if ((DAT_0952158f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_0917fdc0);
    FUN_03f5c2a4(&DAT_09177310);
    FUN_03f5c2a4(&DAT_09171768);
    FUN_03f5c2a4(&DAT_09172330);
    FUN_03f5c2a4(&DAT_09172558);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091733c0);
    FUN_03f5c2a4(&DAT_0918c880);
    DAT_0952158f = 1;
  }
  uVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  lVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar3 == 0) goto LAB_074dfbdc;
  uVar2 = System_Type__get_IsExplicitLayout(lVar3,0);
  iVar13 = (uVar1 >> 7 & 1) + (uVar2 & 1);
  lVar3 = FUN_03f5da68(param_1);
  if (lVar3 == 0) {
    if (iVar13 == 0) {
      return (long *)0x0;
    }
  }
  else {
    iVar13 = iVar13 + 1;
  }
  plVar4 = (long *)FUN_03f5c394(DAT_0917fdb0,iVar13);
  uVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  uVar8 = DAT_09172558;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_Type__GetTypeFromHandle(uVar8,0);
    if (lVar5 == 0) goto LAB_074dfbdc;
    uVar8 = System_Type__GetConstructor
                      (lVar5,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar5 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar5,uVar8);
    if (plVar4 == (long *)0x0) goto LAB_074dfbdc;
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_074dfbe4;
    if ((int)plVar4[3] == 0) goto LAB_074dfbe0;
    plVar4[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
    uVar1 = 1;
  }
  lVar5 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (lVar5 == 0) goto LAB_074dfbdc;
  uVar6 = System_Type__get_IsExplicitLayout(lVar5,0);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_03f5c394(DAT_0917fdc0,1);
    lVar5 = DAT_09535420;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar8 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
    local_64 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
    uVar9 = FUN_03f5c42c(DAT_09535420,&local_64);
    local_80 = 0;
    uStack_78 = 0;
    System_Reflection_CustomAttributeTypedArgument___ctor(&local_80,uVar8,uVar9);
    if (lVar7 == 0) goto LAB_074dfbdc;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_074dfbe0;
    *(undefined8 *)(lVar7 + 0x28) = uStack_78;
    *(undefined8 *)(lVar7 + 0x20) = local_80;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20),0);
    lVar5 = System_Type__GetTypeFromHandle(DAT_09171768,0);
    plVar10 = (long *)FUN_03f5c394(DAT_09180748,1);
    lVar11 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    if (plVar10 == (long *)0x0) goto LAB_074dfbdc;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
    goto LAB_074dfbe4;
    if ((int)plVar10[3] == 0) goto LAB_074dfbe0;
    plVar10[4] = lVar11;
    thunk_FUN_03f5d7b8(plVar10 + 4,lVar11);
    if (lVar5 == 0) goto LAB_074dfbdc;
    uVar8 = System_Type__GetConstructor(lVar5,plVar10,0);
    if (*(int *)(DAT_09177310 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09177310);
    }
    uVar9 = **(undefined8 **)(DAT_09177310 + 0xb8);
    lVar5 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar5,uVar8,lVar7,uVar9);
    if (plVar4 == (long *)0x0) goto LAB_074dfbdc;
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
    goto LAB_074dfbe4;
    if (*(uint *)(plVar4 + 3) <= uVar1) goto LAB_074dfbe0;
    uVar6 = (ulong)uVar1;
    uVar1 = uVar1 + 1;
    plVar4[uVar6 + 4] = lVar5;
    thunk_FUN_03f5d7b8(plVar4 + uVar6 + 4,lVar5);
  }
  if (lVar3 == 0) {
    return plVar4;
  }
  lVar5 = FUN_03f5c394(DAT_0917fdc0,1);
  uVar8 = DAT_091733c0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
  local_64 = *(undefined4 *)(lVar3 + 0x30);
  uVar9 = FUN_03f5c42c(DAT_0918c880,&local_64);
  local_80 = 0;
  uStack_78 = 0;
  System_Reflection_CustomAttributeTypedArgument___ctor(&local_80,uVar8,uVar9);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_074dfbe0;
    *(undefined8 *)(lVar5 + 0x28) = uStack_78;
    *(undefined8 *)(lVar5 + 0x20) = local_80;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20),0);
    lVar3 = System_Type__GetTypeFromHandle(DAT_09172330,0);
    plVar10 = (long *)FUN_03f5c394(DAT_09180748,1);
    lVar7 = System_Type__GetTypeFromHandle(DAT_091733c0,0);
    if (plVar10 != (long *)0x0) {
      if ((lVar7 != 0) &&
         (lVar11 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_074dfbe4:
        uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_074dfbe0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar10[4] = lVar7;
      thunk_FUN_03f5d7b8(plVar10 + 4,lVar7);
      if (lVar3 != 0) {
        uVar8 = System_Type__GetConstructor(lVar3,plVar10,0);
        if (*(int *)(DAT_09177310 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09177310);
        }
        uVar9 = **(undefined8 **)(DAT_09177310 + 0xb8);
        lVar3 = thunk_FUN_03f9944c(DAT_09183040);
        System_Reflection_CustomAttributeData___ctor(lVar3,uVar8,lVar5,uVar9);
        if (plVar4 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_074dfbe4;
          if (uVar1 < *(uint *)(plVar4 + 3)) {
            plVar4[(ulong)uVar1 + 4] = lVar3;
            thunk_FUN_03f5d7b8(plVar4 + (ulong)uVar1 + 4,lVar3);
            return plVar4;
          }
          goto LAB_074dfbe0;
        }
      }
    }
  }
LAB_074dfbdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

