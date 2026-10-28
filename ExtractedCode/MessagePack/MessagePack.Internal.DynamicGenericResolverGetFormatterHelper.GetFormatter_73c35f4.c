// rea decompile_all
// name: MessagePack.Internal.DynamicGenericResolverGetFormatterHelper$$GetFormatter
// address: 0x73c35f4
// body: available
// range: 0x73c35f4-0x73c540f inclusive
// range: 0x73c5478-0x73c5b3b inclusive
// range: 0x73c5b40-0x73c5ca3 inclusive
// range: 0x73c5ca8-0x73c5cab inclusive
// range: 0x73c5cb0-0x73c5cb3 inclusive
// range: 0x73c5cb8-0x73c5cbb inclusive
// range: 0x73c5cc0-0x73c5cc3 inclusive
// range: 0x73c5cc8-0x73c5ccb inclusive
// range: 0x73c5d48-0x73c5d8f inclusive
// range: 0x73c5e20-0x73c5e2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c3d8c to 0x73c5e48 MessagePack.Internal.DynamicGenericResolverGetFormatterHelper$$CreateInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73c4160 to 0x75e1cf4 System.Activator$$CreateInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73c51e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5360 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c536c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5408 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c540c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c5ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073c5d78) */

undefined8
MessagePack_Internal_DynamicGenericResolverGetFormatterHelper__GetFormatter(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong local_88;
  long **pplStack_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  
  if ((DAT_09520c96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170e90);
    FUN_03f5c2a4(&DAT_09170ea8);
    FUN_03f5c2a4(&DAT_09170eb0);
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09182120);
    FUN_03f5c2a4(&DAT_09182128);
    FUN_03f5c2a4(&DAT_09182158);
    FUN_03f5c2a4(&DAT_09182160);
    FUN_03f5c2a4(&DAT_09182168);
    FUN_03f5c2a4(&DAT_091a0de8);
    FUN_03f5c2a4(&DAT_09183e60);
    FUN_03f5c2a4(&DAT_091c93f0);
    FUN_03f5c2a4(&DAT_091c9520);
    FUN_03f5c2a4(&DAT_091c9d88);
    FUN_03f5c2a4(&DAT_091cb5c8);
    FUN_03f5c2a4(&DAT_09171820);
    FUN_03f5c2a4(&DAT_09179190);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_09171920);
    FUN_03f5c2a4(&DAT_09171938);
    FUN_03f5c2a4(&DAT_09171940);
    FUN_03f5c2a4(&DAT_09171948);
    FUN_03f5c2a4(&DAT_09171958);
    FUN_03f5c2a4(&DAT_09171b38);
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3d8);
    FUN_03f5c2a4(&DAT_0917a7a8);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09171bb8);
    FUN_03f5c2a4(&DAT_0917ae98);
    FUN_03f5c2a4(&DAT_0917aa80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09171ca0);
    FUN_03f5c2a4(&DAT_09171d30);
    FUN_03f5c2a4(&DAT_091721e0);
    FUN_03f5c2a4(&DAT_091721e8);
    FUN_03f5c2a4(&DAT_091723a8);
    FUN_03f5c2a4(&DAT_091723c0);
    FUN_03f5c2a4(&DAT_09172548);
    FUN_03f5c2a4(&DAT_091888a8);
    FUN_03f5c2a4(&DAT_091888b0);
    FUN_03f5c2a4(&DAT_091888b8);
    FUN_03f5c2a4(&DAT_091888c0);
    FUN_03f5c2a4(&DAT_09172550);
    FUN_03f5c2a4(&DAT_091725b8);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_09172948);
    FUN_03f5c2a4(&DAT_09172950);
    FUN_03f5c2a4(&DAT_09172968);
    FUN_03f5c2a4(&DAT_09172970);
    FUN_03f5c2a4(&DAT_09173178);
    FUN_03f5c2a4(&DAT_09173268);
    FUN_03f5c2a4(&DAT_09173270);
    FUN_03f5c2a4(&DAT_09173278);
    FUN_03f5c2a4(&DAT_09173280);
    FUN_03f5c2a4(&DAT_09173288);
    FUN_03f5c2a4(&DAT_09173290);
    FUN_03f5c2a4(&DAT_09173298);
    FUN_03f5c2a4(&DAT_091732a0);
    FUN_03f5c2a4(&DAT_091732a8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9350);
    FUN_03f5c2a4(&DAT_091e9358);
    FUN_03f5c2a4(&DAT_091e9360);
    FUN_03f5c2a4(&DAT_091e9368);
    FUN_03f5c2a4(&DAT_091e9370);
    FUN_03f5c2a4(&DAT_091e9378);
    FUN_03f5c2a4(&DAT_091e9380);
    FUN_03f5c2a4(&DAT_091e9388);
    FUN_03f5c2a4(&DAT_091e9390);
    FUN_03f5c2a4(&DAT_09190390);
    FUN_03f5c2a4(&DAT_09190388);
    FUN_03f5c2a4(&DAT_09173438);
    FUN_03f5c2a4(&DAT_09173440);
    FUN_03f5c2a4(&DAT_09173448);
    FUN_03f5c2a4(&DAT_09173450);
    FUN_03f5c2a4(&DAT_09173458);
    FUN_03f5c2a4(&DAT_09173460);
    FUN_03f5c2a4(&DAT_09173468);
    FUN_03f5c2a4(&DAT_09173470);
    FUN_03f5c2a4(&DAT_0920e258);
    FUN_03f5c2a4(&DAT_0920e250);
    DAT_09520c96 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = 0;
  local_78 = (long *)0x0;
  plVar3 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
  if (param_1 == (long *)0x0) goto LAB_073c5d54;
  uVar4 = System_Type__get_IsArray(param_1,0);
  if ((uVar4 & 1) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        uVar16 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
        lVar9 = DAT_095353f0;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar7 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
        uVar4 = System_Type__op_Equality(uVar16,uVar7,0);
        if ((uVar4 & 1) != 0) {
          plVar3 = &DAT_09182120;
          goto LAB_073c458c;
        }
        puVar13 = &DAT_09170e90;
      }
      else {
        if (iVar1 != 2) {
          return 0;
        }
        puVar13 = &DAT_091732a8;
      }
    }
    else if (iVar1 == 3) {
      puVar13 = &DAT_09173178;
    }
    else {
      if (iVar1 != 4) {
        return 0;
      }
      puVar13 = &DAT_09171820;
    }
    uVar16 = *puVar13;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)System_Type__GetTypeFromHandle(uVar16,0);
    plVar8 = (long *)FUN_03f5c394(DAT_09180748,1);
    lVar9 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    if (plVar8 != (long *)0x0) {
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_073c5358:
        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar16,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar9;
        thunk_FUN_03f5d7b8(plVar8 + 4,lVar9);
        if (plVar3 == (long *)0x0) goto LAB_073c5d54;
        goto LAB_073c4128;
      }
      goto LAB_073c5d58;
    }
    goto LAB_073c5d54;
  }
  if (plVar3 == (long *)0x0) goto LAB_073c5d54;
  uVar4 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
  lVar9 = *plVar3;
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(lVar9 + 0x5d8))(plVar3,*(undefined8 *)(lVar9 + 0x5e0));
    uVar7 = DAT_09171bb8;
    uVar16 = DAT_09171940;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
      plVar3 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar3 == (long *)0x0) goto LAB_073c5d54;
      lVar9 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar9 == 0) goto LAB_073c5358;
      if ((int)plVar3[3] == 0) goto LAB_073c5d58;
      plVar3[4] = (long)param_1;
      thunk_FUN_03f5d7b8(plVar3 + 4,param_1);
      lVar9 = DAT_091c0270;
      lVar10 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar10 = *(long *)(lVar9 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      uVar7 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183e60);
      }
      goto LAB_073c3d70;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = System_Type__GetTypeFromHandle(uVar7,0);
    uVar4 = System_Type__op_Equality(param_1,uVar16,0);
    uVar16 = DAT_09171b38;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
      uVar4 = System_Type__op_Equality(param_1,uVar16,0);
      uVar16 = DAT_09171ca0;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
        uVar4 = System_Type__op_Equality(param_1,uVar16,0);
        uVar16 = DAT_09171b90;
        if ((uVar4 & 1) != 0) {
          plVar3 = &DAT_091888c0;
          goto LAB_073c458c;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
        uVar4 = System_Type__op_Equality(param_1,uVar16,0);
        uVar16 = DAT_09171ca0;
        if ((uVar4 & 1) != 0) {
          plVar3 = &DAT_091888b0;
          goto LAB_073c458c;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
        plVar8 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar16,0);
        if (plVar8 == (long *)0x0) goto LAB_073c5d54;
        uVar4 = (**(code **)(*plVar8 + 0xa18))(plVar8,plVar3,*(undefined8 *)(*plVar8 + 0xa20));
        if ((uVar4 & 1) != 0) {
          uVar16 = (**(code **)(*plVar3 + 0x9e8))(plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
          }
          puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          lVar9 = puVar13[1];
          if (lVar9 == 0) {
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
              puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            }
            uVar7 = *puVar13;
            lVar9 = thunk_FUN_03f9944c(DAT_091785f8);
            FUN_05322d94(lVar9,uVar7,DAT_091e9350,0);
            plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 8);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          uVar4 = FUN_04ab6f28(uVar16,lVar9,DAT_091c93f0);
          if ((uVar4 & 1) == 0) goto LAB_073c45fc;
          puVar13 = &DAT_09172550;
LAB_073c4708:
          uVar16 = *puVar13;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar3 = (long *)System_Type__GetTypeFromHandle(uVar16,0);
          plVar8 = (long *)FUN_03f5c394(DAT_09180748,1);
          if (plVar8 != (long *)0x0) {
            FUN_039b0da0(plVar8,param_1);
            FUN_039af17c(plVar8,0,param_1);
            if (plVar3 != (long *)0x0) {
LAB_073c4128:
              uVar16 = (**(code **)(*plVar3 + 0x948))
                                 (plVar3,plVar8,*(undefined8 *)(*plVar3 + 0x950));
              uVar16 = System_Activator__CreateInstance(uVar16,0);
              return uVar16;
            }
          }
          goto LAB_073c5d54;
        }
LAB_073c45fc:
        uVar16 = DAT_09171b90;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
        plVar8 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar16,0);
        if (plVar8 == (long *)0x0) goto LAB_073c5d54;
        uVar4 = (**(code **)(*plVar8 + 0xa18))(plVar8,plVar3,*(undefined8 *)(*plVar8 + 0xa20));
        if ((uVar4 & 1) != 0) {
          uVar16 = (**(code **)(*plVar3 + 0x9e8))(plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
          }
          puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          lVar9 = puVar13[2];
          if (lVar9 == 0) {
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
              puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            }
            uVar7 = *puVar13;
            lVar9 = thunk_FUN_03f9944c(DAT_091785f8);
            FUN_05322d94(lVar9,uVar7,DAT_091e9358,0);
            plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x10);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          uVar4 = FUN_04ab6f28(uVar16,lVar9,DAT_091c93f0);
          if ((uVar4 & 1) != 0) {
            puVar13 = &DAT_09172548;
            goto LAB_073c4708;
          }
        }
LAB_073c49d4:
        uVar16 = (**(code **)(*plVar3 + 0xa08))(plVar3,*(undefined8 *)(*plVar3 + 0xa10));
        if (*(int *)(DAT_09190388 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190388);
        }
        puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
        lVar9 = puVar13[3];
        if (lVar9 == 0) {
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
            puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          }
          uVar7 = *puVar13;
          lVar9 = thunk_FUN_03f9944c(DAT_09179190);
          FUN_05322d94(lVar9,uVar7,DAT_091e9360,0);
          plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x18);
          *plVar8 = lVar9;
          thunk_FUN_03f5d7b8(plVar8,lVar9);
        }
        plVar8 = (long *)FUN_04ae5fd0(uVar16,lVar9,DAT_091c9d88);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar4 = System_Type__op_Inequality(plVar8,0,0);
        if ((uVar4 & 1) == 0) {
LAB_073c4c68:
          uVar16 = (**(code **)(*plVar3 + 0xa08))(plVar3,*(undefined8 *)(*plVar3 + 0xa10));
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
          }
          puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          lVar9 = puVar13[5];
          if (lVar9 == 0) {
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
              puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            }
            uVar7 = *puVar13;
            lVar9 = thunk_FUN_03f9944c(DAT_09179190);
            FUN_05322d94(lVar9,uVar7,DAT_091e9370,0);
            plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x28);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          plVar8 = (long *)FUN_04ae5fd0(uVar16,lVar9,DAT_091c9d88);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar4 = System_Type__op_Inequality(plVar8,0,0);
          if ((uVar4 & 1) != 0) {
            if ((plVar8 != (long *)0x0) &&
               (lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480)),
               lVar9 != 0)) {
              if (*(int *)(lVar9 + 0x18) == 0) {
LAB_073c5d58:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar16 = *(undefined8 *)(lVar9 + 0x20);
              lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
              if (lVar9 != 0) {
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_073c5d58;
                uVar5 = *(undefined8 *)(lVar9 + 0x28);
                lVar9 = FUN_03f5c394(DAT_09180748,3);
                uVar7 = DAT_09171ba8;
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_095354b8);
                }
                plVar8 = (long *)System_Type__GetTypeFromHandle(uVar7,0);
                lVar10 = FUN_03f5c394(DAT_09180748,2);
                if (lVar10 != 0) {
                  FUN_039b0da0(lVar10,uVar16);
                  FUN_039af17c(lVar10,0,uVar16);
                  FUN_039b0da0(lVar10,uVar5);
                  FUN_039af17c(lVar10,1,uVar5);
                  if ((plVar8 != (long *)0x0) &&
                     (uVar7 = (**(code **)(*plVar8 + 0x948))
                                        (plVar8,lVar10,*(undefined8 *)(*plVar8 + 0x950)), lVar9 != 0
                     )) {
                    FUN_039b0da0(lVar9,uVar7);
                    FUN_039af17c(lVar9,0,uVar7);
                    plVar8 = (long *)System_Type__GetTypeFromHandle(DAT_09171d30,0);
                    lVar10 = FUN_03f5c394(DAT_09180748,2);
                    if (lVar10 != 0) {
                      FUN_039b0da0(lVar10,uVar16);
                      FUN_039af17c(lVar10,0,uVar16);
                      FUN_039b0da0(lVar10,uVar5);
                      FUN_039af17c(lVar10,1,uVar5);
                      if (plVar8 != (long *)0x0) {
                        uVar7 = (**(code **)(*plVar8 + 0x948))
                                          (plVar8,lVar10,*(undefined8 *)(*plVar8 + 0x950));
                        FUN_039b0da0(lVar9,uVar7);
                        FUN_039af17c(lVar9,1,uVar7);
                        plVar8 = (long *)System_Type__GetTypeFromHandle(DAT_09171bc0,0);
                        lVar10 = FUN_03f5c394(DAT_09180748,1);
                        plVar11 = (long *)System_Type__GetTypeFromHandle(DAT_091721e8,0);
                        lVar14 = FUN_03f5c394(DAT_09180748,2);
                        if (lVar14 != 0) {
                          FUN_039b0da0(lVar14,uVar16);
                          FUN_039af17c(lVar14,0,uVar16);
                          FUN_039b0da0(lVar14,uVar5);
                          FUN_039af17c(lVar14,1,uVar5);
                          if ((plVar11 != (long *)0x0) &&
                             (uVar7 = (**(code **)(*plVar11 + 0x948))
                                                (plVar11,lVar14,*(undefined8 *)(*plVar11 + 0x950)),
                             lVar10 != 0)) {
                            FUN_039b0da0(lVar10,uVar7);
                            FUN_039af17c(lVar10,0,uVar7);
                            if (plVar8 != (long *)0x0) {
                              uVar7 = (**(code **)(*plVar8 + 0x948))
                                                (plVar8,lVar10,*(undefined8 *)(*plVar8 + 0x950));
                              FUN_039b0da0(lVar9,uVar7);
                              FUN_039af17c(lVar9,2,uVar7);
                              lVar10 = (**(code **)(*plVar3 + 0x9e8))
                                                 (plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
                              if (lVar10 != 0) {
                                plVar8 = (long *)FUN_039afee4(0,DAT_0917a3d8,lVar10);
                                pplStack_80 = &local_70;
                                local_88 = 0;
                                do {
                                  local_70 = plVar8;
                                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  lVar10 = *plVar8;
                                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                  if (uVar4 != 0) {
                                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                                        puVar13 = (undefined8 *)
                                                  (lVar10 + (long)*piVar15 * 0x10 + 0x138);
                                        goto LAB_073c50e4;
                                      }
                                      uVar4 = uVar4 - 1;
                                      piVar15 = piVar15 + 4;
                                    } while (uVar4 != 0);
                                  }
                                  puVar13 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_073c50e4:
                                  uVar4 = (*(code *)*puVar13)(plVar8,puVar13[1]);
                                  plVar8 = local_70;
                                  if ((uVar4 & 1) == 0) {
                                    FUN_039aeef4(&local_88);
                                    goto LAB_073c5490;
                                  }
                                  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  lVar10 = *local_70;
                                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                  if (uVar4 != 0) {
                                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar15 + -2) == DAT_0917aa80) {
                                        puVar13 = (undefined8 *)
                                                  (lVar10 + (long)*piVar15 * 0x10 + 0x138);
                                        goto LAB_073c5148;
                                      }
                                      uVar4 = uVar4 - 1;
                                      piVar15 = piVar15 + 4;
                                    } while (uVar4 != 0);
                                  }
                                  puVar13 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917aa80,0);
LAB_073c5148:
                                  plVar8 = (long *)(*(code *)*puVar13)(plVar8,puVar13[1]);
                                  lVar10 = thunk_FUN_03f9944c(DAT_09190390);
                                  System_Object___ctor(lVar10,0);
                                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  lVar14 = (**(code **)(*plVar8 + 600))
                                                     (plVar8,*(undefined8 *)(*plVar8 + 0x260));
                                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  plVar11 = (long *)(lVar10 + 0x10);
                                  *plVar11 = lVar14;
                                  thunk_FUN_03f5d7b8(plVar11);
                                  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_03f5c550();
                                  }
                                  plVar8 = local_70;
                                  if (*(int *)(*plVar11 + 0x18) == 1) {
                                    uVar7 = thunk_FUN_03f9944c(DAT_09179190);
                                    FUN_05322d94(uVar7,lVar10,DAT_091e9390,0);
                                    uVar4 = FUN_04ab6f28(lVar9,uVar7,DAT_091c9520);
                                    uVar7 = DAT_09171958;
                                    plVar8 = local_70;
                                    if ((uVar4 & 1) != 0) {
                                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
                                      lVar9 = FUN_03f5c394(DAT_09180748,3);
                                      if (lVar9 != 0) {
                                        FUN_039b0da0(lVar9,uVar16);
                                        FUN_039af17c(lVar9,0,uVar16);
                                        FUN_039b0da0(lVar9,uVar5);
                                        FUN_039af17c(lVar9,1,uVar5);
                                        FUN_039b0da0(lVar9,param_1);
                                        FUN_039af17c(lVar9,2,param_1);
                                        uVar16 = FUN_03eabcb4(DAT_091c0270);
                                        if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar16 = MessagePack_Internal_DynamicGenericResolverGetFormatterHelper__CreateInstance
                                                           (uVar7,lVar9,uVar16);
                                        FUN_039aeef4(&local_88);
                                        return uVar16;
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c550();
                                    }
                                  }
                                } while( true );
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_073c5d54;
          }
LAB_073c5490:
          uVar16 = (**(code **)(*plVar3 + 0xa08))(plVar3,*(undefined8 *)(*plVar3 + 0xa10));
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
          }
          puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          lVar9 = puVar13[6];
          if (lVar9 == 0) {
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
              puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            }
            uVar7 = *puVar13;
            lVar9 = thunk_FUN_03f9944c(DAT_09179190);
            FUN_05322d94(lVar9,uVar7,DAT_091e9378,0);
            plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x30);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          plVar8 = (long *)FUN_04ae5fd0(uVar16,lVar9,DAT_091c9d88);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar4 = System_Type__op_Inequality(plVar8,0,0);
          if ((uVar4 & 1) != 0) {
            uVar16 = (**(code **)(*plVar3 + 0x9e8))(plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
            }
            puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            lVar9 = puVar13[7];
            if (lVar9 == 0) {
              if (*(int *)(DAT_09190388 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09190388);
                puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
              }
              uVar7 = *puVar13;
              lVar9 = thunk_FUN_03f9944c(DAT_091785f8);
              FUN_05322d94(lVar9,uVar7,DAT_091e9380,0);
              plVar11 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x38);
              *plVar11 = lVar9;
              thunk_FUN_03f5d7b8(plVar11,lVar9);
            }
            uVar4 = FUN_04ab6f28(uVar16,lVar9,DAT_091c93f0);
            if ((uVar4 & 1) != 0) {
              if ((plVar8 == (long *)0x0) ||
                 (lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480)),
                 uVar16 = DAT_09171920, lVar9 == 0)) goto LAB_073c5d54;
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_073c5d58;
              uVar7 = *(undefined8 *)(lVar9 + 0x20);
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_095354b8);
              }
              uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
              lVar9 = FUN_03f5c394(DAT_09180748,2);
              if (lVar9 == 0) goto LAB_073c5d54;
              FUN_039b0da0(lVar9,uVar7);
              FUN_039af17c(lVar9,0,uVar7);
              FUN_039b0da0(lVar9,param_1);
              uVar7 = 1;
              goto LAB_073c56cc;
            }
          }
          uVar16 = (**(code **)(*plVar3 + 0xa08))(plVar3,*(undefined8 *)(*plVar3 + 0xa10));
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
          }
          puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          lVar9 = puVar13[8];
          if (lVar9 == 0) {
            if (*(int *)(DAT_09190388 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190388);
              puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
            }
            uVar7 = *puVar13;
            lVar9 = thunk_FUN_03f9944c(DAT_09179190);
            FUN_05322d94(lVar9,uVar7,DAT_091e9388,0);
            plVar8 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x40);
            *plVar8 = lVar9;
            thunk_FUN_03f5d7b8(plVar8,lVar9);
          }
          lVar9 = FUN_04b0cafc(uVar16,lVar9,DAT_091cb5c8);
          if (lVar9 != 0) {
            plVar8 = (long *)FUN_039afee4(0,DAT_0917a7a8,lVar9);
            pplStack_80 = &local_78;
            local_88 = 0;
            do {
              local_78 = plVar8;
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                    puVar13 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_073c5864;
                  }
                  uVar4 = uVar4 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar4 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_073c5864:
              uVar4 = (*(code *)*puVar13)(plVar8,puVar13[1]);
              plVar8 = local_78;
              if ((uVar4 & 1) == 0) {
                FUN_039aeef4(&local_88);
                return 0;
              }
              if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = *local_78;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917ae98) {
                    puVar13 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_073c58d0;
                  }
                  uVar4 = uVar4 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar4 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(local_78,DAT_0917ae98,0);
LAB_073c58d0:
              plVar8 = (long *)(*(code *)*puVar13)(plVar8,puVar13[1]);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
              uVar16 = DAT_09171bc0;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar9 = *(long *)(lVar9 + 0x20);
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_095354b8);
              }
              plVar8 = (long *)System_Type__GetTypeFromHandle(uVar16,0);
              plVar11 = (long *)FUN_03f5c394(DAT_09180748,1);
              if (plVar11 == (long *)0x0) {
LAB_073c5d5c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0))
              {
                uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar16,0);
              }
              if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar11[4] = lVar9;
              thunk_FUN_03f5d7b8(plVar11 + 4,lVar9);
              if (plVar8 == (long *)0x0) goto LAB_073c5d5c;
              uVar16 = (**(code **)(*plVar8 + 0x948))
                                 (plVar8,plVar11,*(undefined8 *)(*plVar8 + 0x950));
              plVar8 = (long *)(**(code **)(*plVar3 + 0x9e8))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar10 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar4 != 0) {
                piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == DAT_0917a3d8) {
                    puVar13 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_073c5a04;
                  }
                  uVar4 = uVar4 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar4 != 0);
              }
              puVar13 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3d8,0);
LAB_073c5a04:
              plVar8 = (long *)(*(code *)*puVar13)(plVar8,puVar13[1]);
              do {
                do {
                  local_70 = plVar8;
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *plVar8;
                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar4 != 0) {
                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                        puVar13 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_073c5a6c;
                      }
                      uVar4 = uVar4 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_073c5a6c:
                  uVar4 = (*(code *)*puVar13)(plVar8,puVar13[1]);
                  plVar8 = local_70;
                  if ((uVar4 & 1) == 0) {
                    uVar16 = 0;
                    iVar1 = 0x4a;
                    goto LAB_073c5c18;
                  }
                  if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *local_70;
                  uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar4 != 0) {
                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == DAT_0917aa80) {
                        puVar13 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_073c5ad0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_03f95da8(local_70,DAT_0917aa80,0);
LAB_073c5ad0:
                  plVar8 = (long *)(*(code *)*puVar13)(plVar8,puVar13[1]);
                  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  plVar8 = local_70;
                } while (*(int *)(lVar10 + 0x18) != 1);
                plVar8 = *(long **)(lVar10 + 0x20);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar4 = (**(code **)(*plVar8 + 0x2b8))
                                  (plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x2c0));
                uVar7 = DAT_09171948;
                plVar8 = local_70;
              } while ((uVar4 & 1) == 0);
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar16 = System_Type__GetTypeFromHandle(uVar7,0);
              lVar10 = FUN_03f5c394(DAT_09180748,2);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_039b0da0(lVar10,lVar9);
              FUN_039af17c(lVar10,0,lVar9);
              FUN_039b0da0(lVar10,param_1);
              FUN_039af17c(lVar10,1,param_1);
              uVar7 = FUN_03eabcb4(DAT_091c0270);
              if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar16 = MessagePack_Internal_DynamicGenericResolverGetFormatterHelper__CreateInstance
                                 (uVar16,lVar10,uVar7);
              iVar1 = 0x45;
LAB_073c5c18:
              plVar8 = local_70;
              if (local_70 != (long *)0x0) {
                lVar9 = *local_70;
                uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar4 != 0) {
                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
                      puVar13 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_073c5c78;
                    }
                    uVar4 = uVar4 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar4 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(local_70,DAT_09185a58,0);
LAB_073c5c78:
                (*(code *)*puVar13)(plVar8,puVar13[1]);
              }
              plVar8 = local_78;
              if ((iVar1 != 0x4a) && (iVar1 != 0)) {
                FUN_039aeef4(&local_88);
                return uVar16;
              }
            } while( true );
          }
LAB_073c5d54:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar16 = (**(code **)(*plVar3 + 0x9e8))(plVar3,*(undefined8 *)(*plVar3 + 0x9f0));
        if (*(int *)(DAT_09190388 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190388);
        }
        puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
        lVar9 = puVar13[4];
        if (lVar9 == 0) {
          if (*(int *)(DAT_09190388 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190388);
            puVar13 = *(undefined8 **)(DAT_09190388 + 0xb8);
          }
          uVar7 = *puVar13;
          lVar9 = thunk_FUN_03f9944c(DAT_091785f8);
          FUN_05322d94(lVar9,uVar7,DAT_091e9368,0);
          plVar11 = (long *)(*(long *)(DAT_09190388 + 0xb8) + 0x20);
          *plVar11 = lVar9;
          thunk_FUN_03f5d7b8(plVar11,lVar9);
        }
        uVar4 = FUN_04ab6f28(uVar16,lVar9,DAT_091c93f0);
        if ((uVar4 & 1) == 0) goto LAB_073c4c68;
        if ((plVar8 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480)),
           lVar9 == 0)) goto LAB_073c5d54;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_073c5d58;
        uVar7 = *(undefined8 *)(lVar9 + 0x20);
        lVar9 = (**(code **)(*plVar8 + 0x478))(plVar8,*(undefined8 *)(*plVar8 + 0x480));
        uVar16 = DAT_09171938;
        if (lVar9 == 0) goto LAB_073c5d54;
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_073c5d58;
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
        lVar9 = FUN_03f5c394(DAT_09180748,3);
        if (lVar9 == 0) goto LAB_073c5d54;
        FUN_039b0da0(lVar9,uVar7);
        FUN_039af17c(lVar9,0,uVar7);
        FUN_039b0da0(lVar9,uVar5);
        FUN_039af17c(lVar9,1,uVar5);
        FUN_039b0da0(lVar9,param_1);
        uVar7 = 2;
LAB_073c56cc:
        FUN_039af17c(lVar9,uVar7,param_1);
        uVar7 = FUN_03eabcb4(DAT_091c0270);
        if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183e60);
        }
        goto LAB_073c492c;
      }
      plVar3 = &DAT_091888a8;
    }
    else {
      plVar3 = &DAT_091888b8;
    }
LAB_073c458c:
    lVar9 = *plVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = *plVar3;
    }
    uVar16 = **(undefined8 **)(lVar9 + 0xb8);
  }
  else {
    uVar16 = (**(code **)(lVar9 + 0x468))(plVar3,*(undefined8 *)(lVar9 + 0x470));
    System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar16,0);
    uVar4 = MessagePack_Internal_ReflectionExtensions__IsNullable();
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      if (lVar9 == 0) goto LAB_073c5d54;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_073c5d58;
      uVar7 = *(undefined8 *)(lVar9 + 0x20);
    }
    uVar5 = DAT_091721e8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    uVar6 = System_Type__op_Equality(uVar16,uVar5,0);
    uVar5 = DAT_091721e0;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar16 = System_Type__GetTypeFromHandle(uVar5,0);
      plVar3 = (long *)(**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      lVar9 = DAT_091c0270;
      lVar10 = *(long *)(DAT_091c0270 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c0270);
        lVar10 = *(long *)(lVar9 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      uVar7 = **(undefined8 **)(lVar9 + 0xb8);
      if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183e60);
      }
LAB_073c3d70:
      uVar16 = MessagePack_Internal_DynamicGenericResolverGetFormatterHelper__CreateInstance
                         (uVar16,plVar3,uVar7);
      return uVar16;
    }
    lVar9 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    if (lVar9 != 0) {
      uVar2 = System_String__StartsWith(lVar9,DAT_0920e250,0);
      local_88 = local_88 & 0xffffffffffff0000;
      FUN_05c290f8(&local_88,uVar2 & 1,DAT_091b6a48);
      if (((ushort)local_88 < 0x100) || ((local_88 & 0xff) == 0)) goto LAB_073c3ef8;
      lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
      if (lVar9 == 0) goto LAB_073c5d54;
      iVar1 = *(int *)(lVar9 + 0x18);
      if (iVar1 < 5) {
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            puVar13 = &DAT_09173268;
          }
          else {
            if (iVar1 != 2) {
LAB_073c5374:
              FUN_039b1d98(plVar3);
              uVar16 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
              puVar12 = &DAT_09212660;
              goto LAB_073c53c0;
            }
            puVar13 = &DAT_09173270;
          }
        }
        else if (iVar1 == 3) {
          puVar13 = &DAT_09173278;
        }
        else {
          if (iVar1 != 4) goto LAB_073c5374;
          puVar13 = &DAT_09173280;
        }
      }
      else if (iVar1 < 7) {
        if (iVar1 == 5) {
          puVar13 = &DAT_09173288;
        }
        else {
          if (iVar1 != 6) goto LAB_073c5374;
          puVar13 = &DAT_09173290;
        }
      }
      else if (iVar1 == 7) {
        puVar13 = &DAT_09173298;
      }
      else {
        if (iVar1 != 8) goto LAB_073c5374;
        puVar13 = &DAT_091732a0;
      }
      goto LAB_073c486c;
    }
LAB_073c3ef8:
    lVar9 = (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    if (lVar9 == 0) {
LAB_073c3fec:
      uVar5 = DAT_09170eb0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      uVar6 = System_Type__op_Equality(uVar16,uVar5,0);
      uVar5 = DAT_091723c0;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
        uVar6 = System_Type__op_Equality(uVar16,uVar5,0);
        uVar5 = DAT_09172950;
        if ((uVar6 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
          uVar6 = System_Type__op_Equality(uVar16,uVar5,0);
          uVar5 = DAT_09172970;
          if ((uVar6 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
            uVar6 = System_Type__op_Equality(uVar16,uVar5,0);
            uVar5 = DAT_091725b8;
            if ((uVar6 & 1) == 0) {
              if ((uVar4 & 1) != 0) {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar16 = System_Type__GetTypeFromHandle(uVar5,0);
                lVar9 = FUN_03f5c394(DAT_09180748,1);
                if (lVar9 == 0) goto LAB_073c5d54;
                FUN_039b0da0(lVar9,uVar7);
                FUN_039af17c(lVar9,0,uVar7);
                goto LAB_073c5240;
              }
              if (*(int *)(DAT_09183e60 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (**(long **)(DAT_09183e60 + 0xb8) == 0) goto LAB_073c5d54;
              uVar4 = FUN_06fd9fbc(**(long **)(DAT_09183e60 + 0xb8),uVar16,&local_68,DAT_091a0de8);
              uVar16 = local_68;
              if ((uVar4 & 1) == 0) goto LAB_073c49d4;
              lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
              uVar7 = FUN_03eabcb4(DAT_091c0270);
              goto LAB_073c5250;
            }
            lVar10 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
            lVar9 = DAT_095353f0;
            if (lVar10 == 0) goto LAB_073c5d54;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_073c5d58;
            uVar16 = *(undefined8 *)(lVar10 + 0x20);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar7 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
            uVar4 = System_Type__op_Equality(uVar16,uVar7,0);
            if ((uVar4 & 1) == 0) {
              puVar13 = &DAT_09172968;
              goto LAB_073c51f8;
            }
            plVar3 = &DAT_09182168;
          }
          else {
            lVar10 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
            lVar9 = DAT_095353f0;
            if (lVar10 == 0) goto LAB_073c5d54;
            if (*(int *)(lVar10 + 0x18) == 0) goto LAB_073c5d58;
            uVar16 = *(undefined8 *)(lVar10 + 0x20);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar7 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
            uVar4 = System_Type__op_Equality(uVar16,uVar7,0);
            if ((uVar4 & 1) == 0) {
              puVar13 = &DAT_09172948;
              goto LAB_073c51f8;
            }
            plVar3 = &DAT_09182160;
          }
        }
        else {
          lVar10 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
          lVar9 = DAT_095353f0;
          if (lVar10 == 0) goto LAB_073c5d54;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_073c5d58;
          uVar16 = *(undefined8 *)(lVar10 + 0x20);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar7 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
          uVar4 = System_Type__op_Equality(uVar16,uVar7,0);
          if ((uVar4 & 1) == 0) {
            puVar13 = &DAT_091723a8;
            goto LAB_073c51f8;
          }
          plVar3 = &DAT_09182158;
        }
      }
      else {
        lVar10 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
        lVar9 = DAT_095353f0;
        if (lVar10 == 0) goto LAB_073c5d54;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_073c5d58;
        uVar16 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar7 = System_Type__GetTypeFromHandle(lVar9 + 0x20,0);
        uVar4 = System_Type__op_Equality(uVar16,uVar7,0);
        if ((uVar4 & 1) == 0) {
          puVar13 = &DAT_09170ea8;
LAB_073c51f8:
          uVar16 = *puVar13;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
          lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
LAB_073c5240:
          uVar7 = FUN_03eabcb4(DAT_091c0270);
LAB_073c5250:
          iVar1 = *(int *)(DAT_09183e60 + 0xe4);
          goto joined_r0x073c5258;
        }
        plVar3 = &DAT_09182128;
      }
      goto LAB_073c458c;
    }
    uVar2 = System_String__StartsWith(lVar9,DAT_0920e258,0);
    local_88 = local_88 & 0xffffffffffff0000;
    FUN_05c290f8(&local_88,uVar2 & 1,DAT_091b6a48);
    if (((ushort)local_88 < 0x100) || ((local_88 & 0xff) == 0)) goto LAB_073c3fec;
    lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
    if (lVar9 == 0) goto LAB_073c5d54;
    iVar1 = *(int *)(lVar9 + 0x18);
    if (iVar1 < 5) {
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          puVar13 = &DAT_09173438;
        }
        else {
          if (iVar1 != 2) {
LAB_073c539c:
            FUN_039b1d98(plVar3);
            uVar16 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            puVar12 = &DAT_09212668;
LAB_073c53c0:
            uVar7 = thunk_FUN_03fc39d4(puVar12);
            uVar16 = System_String__Concat(uVar7,uVar16,0);
            thunk_FUN_03fc39d4(&DAT_09188180);
            uVar7 = thunk_FUN_03f9944c();
            MessagePack_MessagePackSerializationException___ctor(uVar7,uVar16,0);
            uVar16 = thunk_FUN_03fc39d4(&DAT_091c89b8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,uVar16);
          }
          puVar13 = &DAT_09173440;
        }
      }
      else if (iVar1 == 3) {
        puVar13 = &DAT_09173448;
      }
      else {
        if (iVar1 != 4) goto LAB_073c539c;
        puVar13 = &DAT_09173450;
      }
    }
    else if (iVar1 < 7) {
      if (iVar1 == 5) {
        puVar13 = &DAT_09173458;
      }
      else {
        if (iVar1 != 6) goto LAB_073c539c;
        puVar13 = &DAT_09173460;
      }
    }
    else if (iVar1 == 7) {
      puVar13 = &DAT_09173468;
    }
    else {
      if (iVar1 != 8) goto LAB_073c539c;
      puVar13 = &DAT_09173470;
    }
LAB_073c486c:
    uVar16 = *puVar13;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = System_Type__GetTypeFromHandle(uVar16,0);
    lVar9 = (**(code **)(*plVar3 + 0x478))(plVar3,*(undefined8 *)(*plVar3 + 0x480));
    lVar10 = DAT_091c0270;
    lVar14 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar14 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar14 = *(long *)(lVar10 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_03f95a6c();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    uVar7 = **(undefined8 **)(lVar10 + 0xb8);
    iVar1 = *(int *)(DAT_09183e60 + 0xe4);
joined_r0x073c5258:
    if (iVar1 == 0) {
      FUN_03f5c424(DAT_09183e60);
    }
LAB_073c492c:
    uVar16 = MessagePack_Internal_DynamicGenericResolverGetFormatterHelper__CreateInstance
                       (uVar16,lVar9,uVar7);
  }
  return uVar16;
}

