// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$MarshalProperties
// address: 0x749f06c
// body: available
// range: 0x749f06c-0x749f69f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749f324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f5d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f674 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f680 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f684 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f68c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f69c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0749f688) */
/* WARNING: Removing unreachable block (ram,0x0749f660) */
/* WARNING: Removing unreachable block (ram,0x0749f698) */

int System_Runtime_Remoting_Messaging_CADMessageBase__MarshalProperties
              (long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  long **pplStack_a0;
  long **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  
  if ((DAT_09521371 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188128);
    DAT_09521371 = 1;
  }
  local_58 = (long *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09188128 + 0x130)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09188128 + 0x130) * 8 + -8) !=
        DAT_09188128)) {
      iVar7 = 0;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a20) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_0749f190;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185a20,9);
LAB_0749f190:
      plVar2 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
      pplStack_a0 = &local_58;
      local_a8 = 0;
      local_98 = &local_78;
      do {
        local_58 = plVar2;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0749f21c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0749f21c:
        uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
        plVar2 = local_58;
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
          if (plVar2 == (long *)0x0) {
            return iVar7;
          }
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          local_78 = plVar2;
          if (uVar5 == 0) goto LAB_0749f37c;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0749f364;
        }
        if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_58;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0749f284;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_0749f284:
        plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(*plVar2 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0();
        }
        puVar1 = (undefined8 *)thunk_FUN_03f99594();
        uStack_88 = puVar1[1];
        local_90 = *puVar1;
        plVar2 = (long *)*param_2;
        if (plVar2 == (long *)0x0) {
          uVar3 = thunk_FUN_03f9944c(DAT_09181588);
          System_Collections_ArrayList___ctor(uVar3,0);
          *param_2 = uVar3;
          thunk_FUN_03f5d7b8(param_2,uVar3);
          plVar2 = (long *)*param_2;
        }
        uStack_b8 = uStack_88;
        local_c0 = local_90;
        uVar3 = FUN_03f5c42c(DAT_09183b38,&local_c0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar3,uVar3);
        }
        (**(code **)(*plVar2 + 0x308))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x310));
        iVar7 = iVar7 + 1;
        plVar2 = local_58;
      } while( true );
    }
    uVar5 = System_Runtime_Remoting_Messaging_MessageDictionary__HasUserData(param_1);
    if (((uVar5 & 1) != 0) &&
       (plVar2 = (long *)System_Runtime_Remoting_Messaging_MessageDictionary__get_InternalDictionary
                                   (param_1), plVar2 != (long *)0x0)) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a20) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
            goto LAB_0749f43c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a20,9);
LAB_0749f43c:
      local_58 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
      pplStack_a0 = &local_58;
      local_a8 = 0;
      local_98 = &local_78;
      if (local_58 != (long *)0x0) {
        iVar7 = 0;
        do {
          plVar2 = local_58;
          lVar4 = *local_58;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0749f4cc;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,0);
LAB_0749f4cc:
          uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
          plVar2 = local_58;
          if ((uVar5 & 1) == 0) {
            plVar2 = (long *)thunk_FUN_03f99350(local_58,DAT_09185a58);
            if (plVar2 == (long *)0x0) {
              return iVar7;
            }
            lVar4 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            local_78 = plVar2;
            if (uVar5 == 0) goto LAB_0749f630;
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_0749f618;
          }
          if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *local_58;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0749f534;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185b10,1);
LAB_0749f534:
          plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(*plVar2 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          puVar1 = (undefined8 *)thunk_FUN_03f99594();
          uStack_68 = puVar1[1];
          local_70 = *puVar1;
          plVar2 = (long *)*param_2;
          if (plVar2 == (long *)0x0) {
            uVar3 = thunk_FUN_03f9944c(DAT_09181588);
            System_Collections_ArrayList___ctor(uVar3,0);
            *param_2 = uVar3;
            thunk_FUN_03f5d7b8(param_2,uVar3);
            plVar2 = (long *)*param_2;
          }
          uStack_b8 = uStack_68;
          local_c0 = local_70;
          uVar3 = FUN_03f5c42c(DAT_09183b38,&local_c0);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar3,uVar3);
          }
          (**(code **)(*plVar2 + 0x308))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x310));
          iVar7 = iVar7 + 1;
        } while (local_58 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0749f364:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0749f3fc;
    }
  }
LAB_0749f37c:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0749f3fc:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return iVar7;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0749f618:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0749f64c;
    }
  }
LAB_0749f630:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0749f64c:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return iVar7;
}

