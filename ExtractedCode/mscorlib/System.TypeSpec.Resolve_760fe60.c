// rea decompile_all
// name: System.TypeSpec$$Resolve
// address: 0x760fe60
// body: available
// range: 0x760fe60-0x7610713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760ffd0 to 0x75eff0c System.RuntimeType$$GetType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76105d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76105d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76105dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76105e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76105e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76105f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610678 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610680 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610688 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610708 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra dis
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07610570) */
/* WARNING: Removing unreachable block (ram,0x07610574) */

long * System_TypeSpec__Resolve
                 (long param_1,long param_2,long param_3,uint param_4,uint param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long local_b0;
  long *plStack_a8;
  long *local_a0;
  long local_98 [2];
  long *local_88;
  long local_80;
  long *plStack_78;
  long *local_70;
  
  if ((DAT_09522044 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_091a4a30);
    FUN_03f5c2a4(&DAT_091a39b0);
    FUN_03f5c2a4(&DAT_091a4a38);
    FUN_03f5c2a4(&DAT_091a39b8);
    FUN_03f5c2a4(&DAT_091a39c0);
    FUN_03f5c2a4(&DAT_091a4a40);
    FUN_03f5c2a4(&DAT_091b1230);
    FUN_03f5c2a4(&DAT_091ae8b8);
    FUN_03f5c2a4(&DAT_091b1268);
    FUN_03f5c2a4(&DAT_091b1270);
    FUN_03f5c2a4(&DAT_09188328);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_0918c2a0);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09522044 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (long *)0x0;
  if (param_2 == 0 && param_3 == 0) {
    uVar1 = System_TypeSpec__get_DisplayFullName(param_1);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    plVar2 = (long *)System_RuntimeType__GetType(uVar1,param_4 & 1,param_5 & 1,0,param_6,0);
    return plVar2;
  }
  lVar12 = *(long *)(param_1 + 0x18);
  plVar2 = (long *)0x0;
  if (lVar12 != 0) {
    if (param_2 == 0) {
      plVar2 = (long *)System_Reflection_Assembly__Load(lVar12,0);
    }
    else {
      uVar1 = thunk_FUN_03f9944c(DAT_09181610);
      System_Reflection_AssemblyName___ctor(uVar1,lVar12,0);
      plVar2 = (long *)(**(code **)(param_2 + 0x18))
                                 (*(undefined8 *)(param_2 + 0x40),uVar1,
                                  *(undefined8 *)(param_2 + 0x28));
    }
    uVar3 = System_Reflection_Assembly__op_Equality(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = thunk_FUN_03fc39d4(&DAT_091ff6c0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091f7320);
      uVar1 = System_String__Concat(uVar1,uVar9,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09184570);
      uVar4 = thunk_FUN_03f9944c();
      System_IO_FileNotFoundException___ctor(uVar4,uVar1,0);
      goto LAB_07610664;
    }
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (param_3 == 0) {
    if (plVar13 == (long *)0x0) goto LAB_076105d4;
    lVar12 = *plVar13;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0918c2a0) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07610180;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0918c2a0,0);
LAB_07610180:
    uVar1 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar2 == (long *)0x0) goto LAB_076105d4;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x2f8))
                               (plVar2,uVar1,0,param_5 & 1,*(undefined8 *)(*plVar2 + 0x300));
  }
  else {
    if (plVar13 == (long *)0x0) goto LAB_076105d4;
    lVar12 = *plVar13;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0918c2a0) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07610144;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0918c2a0,0);
LAB_07610144:
    uVar1 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    plVar2 = (long *)(**(code **)(param_3 + 0x18))
                               (*(undefined8 *)(param_3 + 0x40),plVar2,uVar1,param_5 & 1,
                                *(undefined8 *)(param_3 + 0x28));
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Equality(plVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar2 = *(long **)(param_1 + 0x10);
LAB_076105f8:
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ff6e0);
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar9 = thunk_FUN_03fc39d4(&DAT_091f7320);
    uVar1 = System_String__Concat(uVar4,uVar1,uVar9,0);
    thunk_FUN_03fc39d4(&DAT_0918c288);
    uVar4 = thunk_FUN_03f9944c();
    System_TypeLoadException___ctor(uVar4,uVar1,0);
LAB_07610664:
    uVar1 = thunk_FUN_03fc39d4(&DAT_091dc568);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_057e185c(&local_b0,*(long *)(param_1 + 0x20),DAT_091b1230);
    plStack_78 = plStack_a8;
    local_80 = local_b0;
    local_70 = local_a0;
    local_b0 = 0;
    plVar13 = plVar2;
    plStack_a8 = &local_80;
    do {
      plVar2 = plVar13;
      uVar3 = FUN_071bd28c(&local_80,DAT_091a4a38);
      plVar11 = local_70;
      if ((uVar3 & 1) == 0) {
        iVar10 = 0x11;
        goto LAB_07610328;
      }
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = *local_70;
      uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0918c2a0) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076102bc;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_70,DAT_0918c2a0,0);
LAB_076102bc:
      uVar1 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar1,uVar1);
      }
      plVar13 = (long *)(**(code **)(*plVar2 + 0x7e8))
                                  (plVar2,uVar1,0x30,*(undefined8 *)(*plVar2 + 0x7f0));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__op_Equality(plVar13,0,0);
    } while ((uVar3 & 1) == 0);
    if ((param_4 & 1) != 0) {
      uVar1 = thunk_FUN_03fc39d4(&DAT_091ff6e0);
      uVar4 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      uVar9 = thunk_FUN_03fc39d4(&DAT_091f7320);
      uVar1 = System_String__Concat(uVar1,uVar4,uVar9,0);
      thunk_FUN_03fc39d4(&DAT_0918c288);
      uVar4 = thunk_FUN_03f9944c();
      System_TypeLoadException___ctor(uVar4,uVar1,0);
      uVar1 = thunk_FUN_03fc39d4(&DAT_091dc568);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar1);
    }
    iVar10 = 0x1a;
LAB_07610328:
    lVar12 = local_b0;
    FUN_071bd288(plStack_a8,DAT_091a4a30);
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar12);
    }
    if ((iVar10 != 0x11) && (iVar10 != 0)) {
      return (long *)0x0;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar13 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    if (plVar13 == (long *)0x0) goto LAB_076105d4;
    if (0 < (int)plVar13[3]) {
      uVar3 = 0;
      plVar11 = plVar13 + 4;
      do {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar12 = FUN_057e0998(*(long *)(param_1 + 0x28),uVar3 & 0xffffffff,DAT_091b1270),
           lVar12 == 0)) goto LAB_076105d4;
        lVar12 = System_TypeSpec__Resolve(lVar12,param_2,param_3,param_4 & 1,param_5 & 1,param_6);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar6 = System_Type__op_Equality(lVar12,0,0);
        if ((uVar6 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            return (long *)0x0;
          }
          lVar12 = *(long *)(param_1 + 0x28);
          if (lVar12 == 0) goto LAB_076105d4;
          uVar1 = thunk_FUN_03fc39d4(&DAT_091b1270);
          lVar12 = FUN_057e0998(lVar12,uVar3 & 0xffffffff,uVar1);
          if (lVar12 == 0) goto LAB_076105d4;
          plVar2 = *(long **)(lVar12 + 0x10);
          goto LAB_076105f8;
        }
        if ((lVar12 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)) {
          uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar1,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *plVar11 = lVar12;
        thunk_FUN_03f5d7b8(plVar11,lVar12);
        uVar3 = uVar3 + 1;
        plVar11 = plVar11 + 1;
      } while ((long)uVar3 < (long)(int)plVar13[3]);
    }
    if (plVar2 == (long *)0x0) goto LAB_076105d4;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x948))(plVar2,plVar13,*(undefined8 *)(*plVar2 + 0x950))
    ;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_057e185c(local_98,*(long *)(param_1 + 0x30),DAT_091ae8b8);
    local_b0 = 0;
    plStack_a8 = local_98;
    while (uVar3 = FUN_071bd28c(local_98,DAT_091a39b8), plVar13 = local_88, lVar12 = local_b0,
          (uVar3 & 1) != 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar12 = *local_88;
      uVar3 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09188328) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07610530;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_88,DAT_09188328,0);
LAB_07610530:
      plVar2 = (long *)(*(code *)*puVar5)(plVar13,plVar2,puVar5[1]);
    }
    FUN_071bd288(plStack_a8,DAT_091a39b0);
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar12);
    }
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return plVar2;
  }
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x938))(plVar2,*(undefined8 *)(*plVar2 + 0x940));
    return plVar2;
  }
LAB_076105d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

