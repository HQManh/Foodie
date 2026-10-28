// rea decompile_all
// name: MessagePack.Formatters.TypelessFormatter$$DeserializeByTypeName
// address: 0x73ea99c
// body: available
// range: 0x73ea99c-0x73eb41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73eb360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb368 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb370 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb374 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73eb3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073eb318) */
/* WARNING: Removing unreachable block (ram,0x073eb364) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MessagePack_Formatters_TypelessFormatter__DeserializeByTypeName
               (undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  char local_7c [4];
  undefined8 local_78;
  long local_70;
  long local_68;
  
  if ((DAT_09520ddd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_09197368);
    FUN_03f5c2a4(&DAT_09197370);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091a7780);
    FUN_03f5c2a4(&DAT_091cbbf8);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_09172418);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_0918b398);
    FUN_03f5c2a4(&DAT_091bd4c8);
    FUN_03f5c2a4(&DAT_091bd4d8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_091dc638);
    FUN_03f5c2a4(&DAT_0918c300);
    FUN_03f5c2a4(&DAT_0920e108);
    FUN_03f5c2a4(&DAT_0921f960);
    FUN_03f5c2a4(&DAT_09224568);
    FUN_03f5c2a4(&DAT_0921ba88);
    FUN_03f5c2a4(&DAT_091fbec0);
    FUN_03f5c2a4(&DAT_092206f0);
    FUN_03f5c2a4(&DAT_09200768);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_09520ddd = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_7c[0] = '\0';
  if (*(int *)(DAT_09175040 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Nerdbank_Streams_Requires__Argument(param_2 != 0,DAT_09224568,DAT_091fbec0,0);
  if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x28);
  if (lVar2 == 0) goto LAB_073eb360;
  uVar3 = FUN_063f5234(lVar2,param_2,param_3,&local_68,DAT_09197370);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09175040 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_03f5c394(DAT_0917fc88,param_3 >> 0x20);
    if (lVar2 == 0) goto LAB_073eb360;
    System_Buffer__BlockCopy(param_2,param_3 & 0xffffffff,lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
    if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)**(long **)(DAT_0918b398 + 0xb8);
    if ((plVar5 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar5 + 0x368))(plVar5,lVar2,*(undefined8 *)(*plVar5 + 0x370)),
       param_5 == (long *)0x0)) goto LAB_073eb360;
    lVar7 = (**(code **)(*param_5 + 0x178))(param_5,lVar14,*(undefined8 *)(*param_5 + 0x180));
    local_68 = lVar7;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar3 = System_Type__op_Equality(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(char *)(*(long *)(DAT_0918c300 + 0xb8) + 0x38) == '\0') {
LAB_073ead0c:
        if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(char *)(*(long *)(DAT_0918c300 + 0xb8) + 0x38) == '\0') {
          if (lVar14 == 0) goto LAB_073eb360;
          puVar15 = &DAT_0921f960;
          uVar3 = System_String__Contains(lVar14,DAT_0921f960,0);
          if ((uVar3 & 1) != 0) {
            puVar13 = &DAT_0920e108;
            goto LAB_073ead50;
          }
        }
        iVar1 = *(int *)(DAT_095354b8 + 0xe4);
      }
      else {
        if (lVar14 == 0) goto LAB_073eb360;
        puVar15 = &DAT_0920e108;
        uVar3 = System_String__Contains(lVar14,DAT_0920e108,0);
        if ((uVar3 & 1) == 0) goto LAB_073ead0c;
        puVar13 = &DAT_0921f960;
LAB_073ead50:
        lVar14 = System_String__Replace(lVar14,*puVar15,*puVar13,0);
        iVar1 = *(int *)(DAT_095354b8 + 0xe4);
      }
      if (iVar1 == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      local_68 = FUN_03f5c7b8(lVar14,1,DAT_091dc130,DAT_091dc638);
      if (local_68 == 0) {
        thunk_FUN_03fc39d4(&DAT_091d35c0);
        uVar4 = thunk_FUN_04c10778();
        uVar8 = thunk_FUN_03fc39d4(&DAT_091dc638);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar8);
      }
    }
    if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar14 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x28);
    if (lVar14 == 0) goto LAB_073eb360;
    FUN_063f4a4c(lVar14,lVar2,local_68,DAT_09197368);
  }
  else if (param_5 == (long *)0x0) goto LAB_073eb360;
  (**(code **)(*param_5 + 0x188))(param_5,local_68,*(undefined8 *)(*param_5 + 400));
  lVar2 = local_68;
  lVar14 = param_5[2];
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = MessagePack_FormatterResolverExtensions__GetFormatterDynamicWithVerify(lVar14,lVar2,0);
  if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c300);
  }
  lVar2 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = FUN_04a6dd34(lVar2,local_68,&local_70,DAT_091bd4d8);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_7c[0] = '\0';
      local_78 = *(undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
      System_Threading_Monitor__Enter(local_78,local_7c,0);
      if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_04a6dd34(lVar2,local_68,&local_70,DAT_091bd4d8);
      if ((uVar3 & 1) == 0) {
        lVar2 = System_Reflection_IntrospectionExtensions__GetTypeInfo(local_68,0);
        uVar8 = DAT_09171cc8;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar5 = (long *)System_Type__GetTypeFromHandle(uVar8,0);
        plVar6 = (long *)FUN_03f5c394(DAT_09180748,1);
        lVar14 = local_68;
        if (plVar6 == (long *)0x0) {
LAB_073eb374:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((local_68 != 0) &&
           (lVar7 = thunk_FUN_03f99350(local_68,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[4] = lVar14;
        thunk_FUN_03f5d7b8(plVar6 + 4,lVar14);
        if (plVar5 == (long *)0x0) goto LAB_073eb374;
        uVar8 = (**(code **)(*plVar5 + 0x948))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x950));
        uVar9 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar14 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_0921ba88,0);
        plVar5 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = (**(code **)(*plVar5 + 0x938))(plVar5,*(undefined8 *)(*plVar5 + 0x940));
        lVar7 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_092215e0,0);
        uVar9 = System_Type__GetTypeFromHandle(DAT_09172438,0);
        lVar10 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_092206f0,0);
        plVar5 = (long *)FUN_03f5c394(DAT_09180748,2);
        plVar6 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = (**(code **)(*plVar6 + 0x938))(plVar6,*(undefined8 *)(*plVar6 + 0x940));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[4] = lVar11;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar11);
        lVar11 = System_Type__GetTypeFromHandle(DAT_09172438,0);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[5] = lVar11;
        thunk_FUN_03f5d7b8(plVar5 + 5,lVar11);
        uVar9 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                          (uVar8,DAT_09200768,plVar5,0);
        uVar8 = System_Linq_Expressions_Expression__Convert(lVar14,uVar8,0);
        uVar8 = System_Linq_Expressions_Expression__Call(uVar8,uVar9,lVar7,lVar10,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = System_Type__get_IsValueType(lVar2,0);
        lVar2 = DAT_095353e8;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
          if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = System_Linq_Expressions_Expression__Convert(uVar8,uVar9,0);
        }
        plVar5 = (long *)FUN_03f5c394(DAT_09180368,3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar14 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[4] = lVar14;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar14);
        if ((lVar7 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[5] = lVar7;
        thunk_FUN_03f5d7b8(plVar5 + 5,lVar7);
        if ((lVar10 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[6] = lVar10;
        thunk_FUN_03f5d7b8(plVar5 + 6,lVar10);
        if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = FUN_04b212ac(uVar8,plVar5,DAT_091cbbf8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_70 = FUN_05237a6c(lVar2,DAT_091a7780);
        if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_0636137c(lVar2,local_68,local_70,DAT_091bd4c8);
      }
      if (local_7c[0] != '\0') {
        System_Threading_Monitor__Exit(local_78,0);
      }
    }
    if (local_70 != 0) {
      (**(code **)(local_70 + 0x18))
                (*(undefined8 *)(local_70 + 0x40),uVar4,param_4,param_5,
                 *(undefined8 *)(local_70 + 0x28));
      return;
    }
  }
LAB_073eb360:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

