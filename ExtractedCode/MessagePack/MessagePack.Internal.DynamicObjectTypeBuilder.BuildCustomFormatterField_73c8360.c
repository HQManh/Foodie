// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildCustomFormatterField
// address: 0x73c8360
// body: available
// range: 0x73c8360-0x73c8d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c8a88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c8b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073c8b94) */

long MessagePack_Internal_DynamicObjectTypeBuilder__BuildCustomFormatterField
               (long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_09520c9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1768);
    FUN_03f5c2a4(&DAT_091a1760);
    FUN_03f5c2a4(&DAT_09177178);
    FUN_03f5c2a4(&DAT_09190408);
    FUN_03f5c2a4(&DAT_091c9520);
    FUN_03f5c2a4(&DAT_091cb640);
    FUN_03f5c2a4(&DAT_091794c0);
    FUN_03f5c2a4(&DAT_09179190);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a860);
    FUN_03f5c2a4(&DAT_0917af78);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09196748);
    FUN_03f5c2a4(&DAT_09172410);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_091e93d0);
    FUN_03f5c2a4(&DAT_091e94c0);
    FUN_03f5c2a4(&DAT_091903f0);
    FUN_03f5c2a4(&DAT_09190398);
    FUN_03f5c2a4(&DAT_09216e68);
    DAT_09520c9f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09177178);
  FUN_06fd76bc(lVar1,DAT_091a1760);
  if (param_2 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(DAT_09190398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09190398 + 0xb8);
    lVar11 = puVar5[3];
    if (lVar11 == 0) {
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_09190398 + 0xb8);
      }
      uVar12 = *puVar5;
      lVar11 = thunk_FUN_03f9944c(DAT_091794c0);
      FUN_05322d94(lVar11,uVar12,DAT_091e93d0,0);
      plVar2 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x18);
      *plVar2 = lVar11;
      thunk_FUN_03f5d7b8(plVar2,lVar11);
    }
    plVar2 = (long *)FUN_04b0cafc(uVar9,lVar11,DAT_091cb640);
    if (plVar2 != (long *)0x0) {
      lVar11 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917a860) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_073c85b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a860,0);
LAB_073c85b8:
      plVar2 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
      do {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_073c8644;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_073c8644:
        uVar7 = (*(code *)*puVar5)(plVar2,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar2 == (long *)0x0) {
            return lVar1;
          }
          lVar11 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 == 0) goto LAB_073c8ad4;
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_073c8abc;
        }
        lVar11 = thunk_FUN_03f9944c(DAT_091903f0);
        MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass5_0___ctor(lVar11,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917af78) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_073c86c4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917af78,0);
LAB_073c86c4:
        lVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar10 = (long *)(lVar11 + 0x10);
        *plVar10 = lVar6;
        thunk_FUN_03f5d7b8(plVar10);
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__GetMessagePackFormatterAttribute
                          (*plVar10,0);
        if (lVar6 != 0) {
          plVar3 = *(long **)(lVar6 + 0x10);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = (**(code **)(*plVar3 + 0x8c8))(plVar3,*(undefined8 *)(*plVar3 + 0x8d0));
          uVar12 = thunk_FUN_03f9944c(DAT_09179190);
          FUN_05322d94(uVar12,lVar11,DAT_091e94c0,0);
          uVar7 = FUN_04ab6f28(uVar9,uVar12,DAT_091c9520);
          if ((uVar7 & 1) == 0) {
            uVar9 = thunk_FUN_03fc39d4(&DAT_091805f8);
            lVar1 = FUN_03f5c394(uVar9,10);
            plVar2 = *(long **)(param_2 + 0x10);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_039af17c(lVar1,0,uVar9);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f8f68);
            FUN_039af17c(lVar1,1,uVar9);
            if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Name
                              (*plVar10,0);
            FUN_039af17c(lVar1,2,uVar9);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f6628);
            FUN_039af17c(lVar1,3,uVar9);
            if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar2 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                       (*plVar10,0);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
            FUN_039af17c(lVar1,4,uVar9);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f8870);
            FUN_039af17c(lVar1,5,uVar9);
            plVar2 = *(long **)(lVar6 + 0x10);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
            FUN_039af17c(lVar1,6,uVar9);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f6360);
            FUN_039af17c(lVar1,7,uVar9);
            if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar2 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                                       (*plVar10,0);
            if (plVar2 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
              FUN_039af17c(lVar1,8,uVar9);
              uVar9 = thunk_FUN_03fc39d4(&DAT_091fad98);
              FUN_039af17c(lVar1,9,uVar9);
              uVar9 = System_String__Concat(lVar1,0);
              thunk_FUN_03fc39d4(&DAT_09188180);
              uVar12 = thunk_FUN_03f9944c();
              MessagePack_MessagePackSerializationException___ctor(uVar12,uVar9,0);
              uVar9 = thunk_FUN_03fc39d4(&DAT_091c8a88);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar12,uVar9);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Name(*plVar10,0)
          ;
          uVar9 = System_String__Concat(uVar9,DAT_09216e68,0);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar9,uVar9);
          }
          uVar9 = System_Reflection_Emit_TypeBuilder__DefineField
                            (param_1,uVar9,*(undefined8 *)(lVar6 + 0x10),0x21,0);
          if (((*(long *)(lVar6 + 0x18) == 0) || (*(long *)(*(long *)(lVar6 + 0x18) + 0x18) == 0))
             && (lVar11 = MessagePack_Internal_ResolverUtilities__FetchSingletonField
                                    (*(undefined8 *)(lVar6 + 0x10),0), lVar11 != 0)) {
            MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_3,0);
            MessagePack_Internal_ILGeneratorExtensions__EmitLdsfld(param_3,lVar11);
          }
          else {
            uVar12 = DAT_09172410;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = System_Type__GetTypeFromHandle(uVar12,0);
            if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar12,uVar12);
            }
            uVar12 = (**(code **)(*param_3 + 0x178))
                               (param_3,uVar12,*(undefined8 *)(*param_3 + 0x180));
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            (**(code **)(*param_3 + 600))
                      (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x570),
                       *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(*param_3 + 0x260));
            if (*(int *)(DAT_09190408 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,**(undefined8 **)(DAT_09190408 + 0xb8));
            if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x388);
            uVar4 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Name
                              (*plVar10,0);
            (**(code **)(*param_3 + 0x248))(param_3,uVar13,uVar4,*(undefined8 *)(*param_3 + 0x250));
            MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,0x34);
            if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_IsProperty
                              (*plVar10,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(DAT_09190408 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              MessagePack_Internal_ILGeneratorExtensions__EmitCall
                        (param_3,*(undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x10));
            }
            else {
              if (*(int *)(DAT_09190408 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              MessagePack_Internal_ILGeneratorExtensions__EmitCall
                        (param_3,*(undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 8));
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,1);
            if (*(int *)(DAT_09190408 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,*(undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x18));
            MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_3,uVar12);
            MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(param_3,0);
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,uVar12);
            if (*(int *)(DAT_09196748 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,**(undefined8 **)(DAT_09196748 + 0xb8));
            MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,uVar12);
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,*(undefined8 *)(*(long *)(DAT_09196748 + 0xb8) + 8));
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,*(undefined8 *)(*(long *)(DAT_09190408 + 0xb8) + 0x20));
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            (**(code **)(*param_3 + 600))
                      (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x398),
                       *(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(*param_3 + 0x260));
          }
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(*param_3 + 0x228))
                    (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d0),uVar9,
                     *(undefined8 *)(*param_3 + 0x230));
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd8454(lVar1,*plVar10,uVar9,DAT_091a1768);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_073c8abc:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_073c8af0;
    }
  }
LAB_073c8ad4:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_073c8af0:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return lVar1;
}

