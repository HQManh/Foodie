// rea decompile_all
// name: MessagePack.Internal.AutomataDictionary.AutomataNode$$EmitSearchNextCore
// address: 0x73b2850
// body: available
// range: 0x73b2850-0x73b33bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b33a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b33a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b33b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_AutomataDictionary_AutomataNode__EmitSearchNextCore
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               long param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 local_70;
  undefined8 uStack_68;
  
  while( true ) {
    if ((DAT_09520bec & 1) == 0) {
      FUN_03f5c2a4(&DAT_091e5cc0);
      FUN_03f5c2a4(&DAT_091ca580);
      FUN_03f5c2a4(&DAT_091caaf0);
      FUN_03f5c2a4(&DAT_091cabe8);
      FUN_03f5c2a4(&DAT_091caf18);
      FUN_03f5c2a4(&DAT_091cae50);
      FUN_03f5c2a4(&DAT_091cb5e8);
      FUN_03f5c2a4(&DAT_09178be0);
      FUN_03f5c2a4(&DAT_091792e0);
      FUN_03f5c2a4(&DAT_091a9808);
      FUN_03f5c2a4(&DAT_09187e80);
      FUN_03f5c2a4(&DAT_09188c40);
      FUN_03f5c2a4(&DAT_09170ac8);
      FUN_03f5c2a4(&DAT_091f2890);
      FUN_03f5c2a4(&DAT_091f2898);
      FUN_03f5c2a4(&DAT_091f28a0);
      FUN_03f5c2a4(&DAT_091f28a8);
      FUN_03f5c2a4(&DAT_09196390);
      FUN_03f5c2a4(&DAT_09196388);
      FUN_03f5c2a4(&DAT_09206b78);
      DAT_09520bec = 1;
    }
    lVar4 = thunk_FUN_03f9944c(DAT_09196390);
    System_Object___ctor(lVar4,0);
    if (lVar4 == 0) goto LAB_073b33a0;
    plVar14 = (long *)(lVar4 + 0x10);
    *plVar14 = param_1;
    thunk_FUN_03f5d7b8(plVar14,param_1);
    if ((int)param_7 < 4) break;
    if (param_6 == 0) goto LAB_073b33a0;
    uVar16 = param_7 >> 1;
    if (*(uint *)(param_6 + 0x18) <= uVar16) goto LAB_073b33a4;
    lVar4 = *(long *)(param_6 + (ulong)uVar16 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_073b33a0;
    uVar15 = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = FUN_04b02940(param_6,param_7,DAT_091cabe8);
    uVar5 = FUN_04b02940(uVar5,uVar16,DAT_091cabe8);
    lVar4 = FUN_04b049e4(uVar5,DAT_091caf18);
    uVar5 = FUN_04b02940(param_6,param_7,DAT_091cabe8);
    uVar5 = FUN_04b020a8(uVar5,uVar16,DAT_091caaf0);
    param_6 = FUN_04b049e4(uVar5,DAT_091caf18);
    plVar8 = (long *)*plVar14;
    if (plVar8 == (long *)0x0) goto LAB_073b33a0;
    uVar1 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(*plVar14,param_3,0);
    MessagePack_Internal_ILGeneratorExtensions__EmitULong(*plVar14,uVar15,0);
    plVar8 = (long *)*plVar14;
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((plVar8 == (long *)0x0) ||
       ((**(code **)(*plVar8 + 0x1f8))
                  (plVar8,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x200),uVar1,
                   *(undefined8 *)(*plVar8 + 0x200)), lVar4 == 0)) goto LAB_073b33a0;
    MessagePack_Internal_AutomataDictionary_AutomataNode__EmitSearchNextCore
              (*plVar14,param_2,param_3,param_4,param_5,lVar4,*(undefined4 *)(lVar4 + 0x18));
    plVar8 = (long *)*plVar14;
    if ((plVar8 == (long *)0x0) ||
       ((**(code **)(*plVar8 + 0x268))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x270)), param_6 == 0)
       ) goto LAB_073b33a0;
    param_1 = *plVar14;
    param_7 = *(uint *)(param_6 + 0x18);
  }
  uVar5 = FUN_04b02940(param_6,param_7,DAT_091cabe8);
  if (*(int *)(DAT_09196388 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09196388);
  }
  puVar10 = *(undefined8 **)(DAT_09196388 + 0xb8);
  lVar17 = puVar10[1];
  if (lVar17 == 0) {
    if (*(int *)(DAT_09196388 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09196388);
      puVar10 = *(undefined8 **)(DAT_09196388 + 0xb8);
    }
    uVar15 = *puVar10;
    lVar17 = thunk_FUN_03f9944c(DAT_091792e0);
    FUN_05322d94(lVar17,uVar15,DAT_091f2890,0);
    plVar8 = (long *)(*(long *)(DAT_09196388 + 0xb8) + 8);
    *plVar8 = lVar17;
    thunk_FUN_03f5d7b8(plVar8,lVar17);
  }
  uVar5 = FUN_04b0cafc(uVar5,lVar17,DAT_091cb5e8);
  lVar17 = FUN_04b049e4(uVar5,DAT_091caf18);
  uVar5 = FUN_04b02940(param_6,param_7,DAT_091cabe8);
  if (*(int *)(DAT_09196388 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09196388);
  }
  puVar10 = *(undefined8 **)(DAT_09196388 + 0xb8);
  lVar13 = puVar10[2];
  if (lVar13 == 0) {
    if (*(int *)(DAT_09196388 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09196388);
      puVar10 = *(undefined8 **)(DAT_09196388 + 0xb8);
    }
    uVar15 = *puVar10;
    lVar13 = thunk_FUN_03f9944c(DAT_091792e0);
    FUN_05322d94(lVar13,uVar15,DAT_091f2898,0);
    plVar8 = (long *)(*(long *)(DAT_09196388 + 0xb8) + 0x10);
    *plVar8 = lVar13;
    thunk_FUN_03f5d7b8(plVar8,lVar13);
  }
  uVar5 = FUN_04b0cafc(uVar5,lVar13,DAT_091cb5e8);
  lVar13 = FUN_04b049e4(uVar5,DAT_091caf18);
  plVar8 = (long *)*plVar14;
  if (plVar8 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    plVar8 = (long *)*plVar14;
    if (plVar8 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(*plVar14,param_2,0);
      uVar5 = DAT_09170ac8;
      lVar12 = *plVar14;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      plVar8 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                 (uVar5,DAT_09206b78,0);
      if (plVar8 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
        MessagePack_Internal_ILGeneratorExtensions__EmitCall(lVar12,uVar5,0);
        if (lVar13 != 0) {
          if (*(long *)(lVar13 + 0x18) == 0) {
LAB_073b2da0:
            plVar8 = (long *)*plVar14;
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((plVar8 != (long *)0x0) &&
               ((**(code **)(*plVar8 + 0x1f8))
                          (plVar8,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1c8),uVar1,
                           *(undefined8 *)(*plVar8 + 0x200)), lVar17 != 0)) {
LAB_073b2e18:
              iVar7 = *(int *)(lVar17 + 0x18);
              if (iVar7 == -0x80000000) goto LAB_073b33a8;
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
                iVar7 = (int)*(undefined8 *)(lVar17 + 0x18);
              }
              uVar3 = System_Math__Max(iVar7 + -1,0,0);
              uVar5 = System_Linq_Enumerable__Range(0,uVar3,0);
              uVar15 = thunk_FUN_03f9944c(DAT_09178be0);
              FUN_05315fc4(uVar15,lVar4,DAT_091f28a8,0);
              uVar5 = FUN_04af3394(uVar5,uVar15,DAT_091ca580);
              lVar12 = FUN_04b0484c(uVar5,DAT_091cae50);
              if (*(int *)(lVar17 + 0x18) < 1) goto LAB_073b30b8;
              uVar16 = 0;
              plVar8 = (long *)(lVar17 + 0x20);
              puVar11 = (undefined4 *)(lVar12 + 0x20);
              goto LAB_073b2ee4;
            }
          }
          else if (lVar17 != 0) {
            if (*(long *)(lVar17 + 0x18) != 0) goto LAB_073b2da0;
            plVar8 = (long *)*plVar14;
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x1f8))
                        (plVar8,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1c0),uVar2,
                         *(undefined8 *)(*plVar8 + 0x200));
              goto LAB_073b2e18;
            }
          }
        }
      }
    }
  }
  goto LAB_073b33a0;
  while( true ) {
    uVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if (uVar16 != 0) {
      if (lVar12 == 0) goto LAB_073b33a0;
      if (*(uint *)(lVar12 + 0x18) <= uVar16 - 1) goto LAB_073b33a4;
      plVar6 = (long *)*plVar14;
      if (plVar6 == (long *)0x0) goto LAB_073b33a0;
      (**(code **)(*plVar6 + 0x268))(plVar6,puVar11[-1],*(undefined8 *)(*plVar6 + 0x270));
    }
    MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(*plVar14,param_3,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_073b33a4;
    if (*plVar8 == 0) goto LAB_073b33a0;
    MessagePack_Internal_ILGeneratorExtensions__EmitULong
              (*plVar14,*(undefined8 *)(*plVar8 + 0x10),0);
    plVar6 = (long *)*plVar14;
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar6 == (long *)0x0) goto LAB_073b33a0;
    (**(code **)(*plVar6 + 0x1f8))
              (plVar6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1f8),uVar3,
               *(undefined8 *)(*plVar6 + 0x200));
    if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_073b33a4;
    lVar9 = *plVar8;
    if (lVar9 == 0) goto LAB_073b33a0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_05614570(&local_70,*(undefined8 *)(lVar9 + 0x20),*(undefined4 *)(lVar9 + 0x18),DAT_091a9808)
    ;
    if (param_4 == 0) goto LAB_073b33a0;
    (**(code **)(param_4 + 0x18))
              (*(undefined8 *)(param_4 + 0x40),local_70,uStack_68,*(undefined8 *)(param_4 + 0x28));
    plVar6 = (long *)*plVar14;
    if (plVar6 == (long *)0x0) goto LAB_073b33a0;
    (**(code **)(*plVar6 + 0x268))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x270));
    if (*(int *)(lVar17 + 0x18) == -0x80000000) goto LAB_073b33a8;
    if (uVar16 == *(int *)(lVar17 + 0x18) - 1U) {
      if (param_5 == 0) goto LAB_073b33a0;
      (**(code **)(param_5 + 0x18))(*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28))
      ;
    }
    else {
      plVar6 = (long *)*plVar14;
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar12 == 0) goto LAB_073b33a0;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_073b33a4;
      if (plVar6 == (long *)0x0) goto LAB_073b33a0;
      (**(code **)(*plVar6 + 0x1f8))
                (plVar6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),*puVar11,
                 *(undefined8 *)(*plVar6 + 0x200));
    }
    uVar16 = uVar16 + 1;
    plVar8 = plVar8 + 1;
    puVar11 = puVar11 + 1;
    if (*(int *)(lVar17 + 0x18) <= (int)uVar16) break;
LAB_073b2ee4:
    plVar6 = (long *)*plVar14;
    if (plVar6 == (long *)0x0) goto LAB_073b33a0;
  }
LAB_073b30b8:
  plVar8 = (long *)*plVar14;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x268))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x270));
    iVar7 = *(int *)(lVar13 + 0x18);
    if (iVar7 == -0x80000000) {
LAB_073b33a8:
      uVar5 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,DAT_091e5cc0);
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar7 = (int)*(undefined8 *)(lVar13 + 0x18);
    }
    uVar1 = System_Math__Max(iVar7 + -1,0,0);
    uVar5 = System_Linq_Enumerable__Range(0,uVar1,0);
    uVar15 = thunk_FUN_03f9944c(DAT_09178be0);
    FUN_05315fc4(uVar15,lVar4,DAT_091f28a0,0);
    uVar5 = FUN_04af3394(uVar5,uVar15,DAT_091ca580);
    lVar4 = FUN_04b0484c(uVar5,DAT_091cae50);
    if (0 < *(int *)(lVar13 + 0x18)) {
      uVar16 = 0;
      plVar8 = (long *)(lVar13 + 0x20);
      puVar11 = (undefined4 *)(lVar4 + 0x20);
      do {
        plVar6 = (long *)*plVar14;
        if (plVar6 == (long *)0x0) goto LAB_073b33a0;
        uVar1 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (uVar16 != 0) {
          if (lVar4 == 0) goto LAB_073b33a0;
          if (*(uint *)(lVar4 + 0x18) <= uVar16 - 1) {
LAB_073b33a4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar6 = (long *)*plVar14;
          if (plVar6 == (long *)0x0) goto LAB_073b33a0;
          (**(code **)(*plVar6 + 0x268))(plVar6,puVar11[-1],*(undefined8 *)(*plVar6 + 0x270));
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(*plVar14,param_3,0);
        if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_073b33a4;
        if (*plVar8 == 0) goto LAB_073b33a0;
        MessagePack_Internal_ILGeneratorExtensions__EmitULong
                  (*plVar14,*(undefined8 *)(*plVar8 + 0x10),0);
        plVar6 = (long *)*plVar14;
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar6 == (long *)0x0) goto LAB_073b33a0;
        (**(code **)(*plVar6 + 0x1f8))
                  (plVar6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1f8),uVar1,
                   *(undefined8 *)(*plVar6 + 0x200));
        if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_073b33a4;
        if (*plVar8 == 0) goto LAB_073b33a0;
        MessagePack_Internal_AutomataDictionary_AutomataNode__EmitSearchNext
                  (*plVar8,*plVar14,param_2,param_3,param_4,param_5);
        plVar6 = (long *)*plVar14;
        if (plVar6 == (long *)0x0) goto LAB_073b33a0;
        (**(code **)(*plVar6 + 0x268))(plVar6,uVar1,*(undefined8 *)(*plVar6 + 0x270));
        if (*(int *)(lVar13 + 0x18) == -0x80000000) goto LAB_073b33a8;
        if (uVar16 == *(int *)(lVar13 + 0x18) - 1U) {
          if (param_5 == 0) goto LAB_073b33a0;
          (**(code **)(param_5 + 0x18))
                    (*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28));
        }
        else {
          plVar6 = (long *)*plVar14;
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar4 == 0) goto LAB_073b33a0;
          if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_073b33a4;
          if (plVar6 == (long *)0x0) goto LAB_073b33a0;
          (**(code **)(*plVar6 + 0x1f8))
                    (plVar6,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),*puVar11,
                     *(undefined8 *)(*plVar6 + 0x200));
        }
        uVar16 = uVar16 + 1;
        plVar8 = plVar8 + 1;
        puVar11 = puVar11 + 1;
      } while ((int)uVar16 < *(int *)(lVar13 + 0x18));
    }
    plVar14 = (long *)*plVar14;
    if ((plVar14 != (long *)0x0) &&
       ((**(code **)(*plVar14 + 0x268))(plVar14,uVar2,*(undefined8 *)(*plVar14 + 0x270)),
       param_5 != 0)) {
      (**(code **)(param_5 + 0x18))(*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x28))
      ;
      return;
    }
  }
LAB_073b33a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

