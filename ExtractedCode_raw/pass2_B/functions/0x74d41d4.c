// rea decompile_all
// name: System.Resources.RuntimeResourceSet$$GetObject
// address: 0x74d41d4
// body: available
// range: 0x74d41d4-0x74d491f inclusive
// range: 0x74d4a2c-0x74d4a7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d4800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4808 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d480c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4850 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d489c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d48e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d48ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d48f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d48f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d48f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d4900 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d4420) */
/* WARNING: Removing unreachable block (ram,0x074d48fc) */

long System_Resources_RuntimeResourceSet__GetObject
               (long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long local_e0;
  char *pcStack_d8;
  undefined8 *local_d0;
  long local_c8;
  char *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char local_8c [4];
  undefined8 local_88;
  int local_80;
  char local_7c [4];
  long local_78;
  long local_70;
  ulong uStack_68;
  
  if ((DAT_09521554 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fd80);
    FUN_03f5c2a4(&DAT_0919fd88);
    FUN_03f5c2a4(&DAT_0919fd78);
    FUN_03f5c2a4(&DAT_0919fd90);
    FUN_03f5c2a4(&DAT_09176bf0);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091864b8);
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09521554 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_7c[0] = '\0';
  local_80 = 0;
  local_88 = 0;
  local_8c[0] = '\0';
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921df98);
    System_ArgumentNullException___ctor(uVar9,uVar6,0);
LAB_074d4888:
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8200);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar6);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fd878);
    System_ObjectDisposedException___ctor(uVar9,0,uVar6,0);
    goto LAB_074d4888;
  }
  local_c0 = local_7c;
  local_c8 = 0;
  local_b8 = &local_78;
  local_7c[0] = '\0';
  local_78 = lVar2;
  System_Threading_Monitor__Enter(lVar2,local_7c,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fd878);
    System_ObjectDisposedException___ctor(uVar9,0,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d8200);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar6);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06fe0d78(*(long *)(param_1 + 0x28),param_2,&local_70,DAT_0919fd88);
    uVar1 = (uint)uStack_68;
    lVar2 = local_70;
    if ((uVar3 & 1) == 0) {
      lVar2 = 0;
      uVar1 = 0xffffffff;
    }
    if ((lVar2 == 0) && (uVar1 == 0xffffffff)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_Resources_ResourceReader__FindPosForResource(*(long *)(param_1 + 0x30),param_2)
      ;
    }
    if ((lVar2 == 0) && (uVar1 != 0xffffffff)) {
      lVar2 = *(long *)(param_1 + 0x30);
      if ((param_4 & 1) == 0) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = System_Resources_ResourceReader__LoadObject(lVar2,uVar1,&local_80);
        local_e0 = lVar2;
        if (0x10 < local_80) {
          local_e0 = 0;
        }
      }
      else {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = System_Resources_ResourceReader__LoadString(lVar2,uVar1);
        local_80 = 1;
        local_e0 = lVar2;
      }
      pcStack_d8 = (char *)(ulong)uVar1;
      thunk_FUN_03f5d7b8(&local_e0);
      local_70 = local_e0;
      local_88 = *(undefined8 *)(param_1 + 0x28);
      local_e0 = 0;
      local_d0 = &local_88;
      local_8c[0] = '\0';
      uStack_68 = (ulong)pcStack_d8;
      pcStack_d8 = local_8c;
      System_Threading_Monitor__Enter(local_88,local_8c,0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fdf2cc(*(long *)(param_1 + 0x28),param_2,local_70,uStack_68,DAT_0919fd90);
      if (local_8c[0] != '\0') {
        System_Threading_Monitor__Exit(*local_d0,0);
      }
    }
    if ((lVar2 != 0) || ((param_3 & 1) == 0)) goto LAB_074d4a30;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (((param_3 & 1) != 0) && (plVar8 = (long *)(param_1 + 0x38), *plVar8 == 0)) {
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09517140 == '\0') {
        FUN_03f5c2a4(&DAT_0918b378);
        DAT_09517140 = '\x01';
      }
      if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18);
      lVar2 = thunk_FUN_03f9944c(DAT_09176bf0);
      FUN_06fde574(lVar2,uVar9,DAT_0919fd78);
      *plVar8 = lVar2;
      thunk_FUN_03f5d7b8(plVar8,lVar2);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091864b8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_074d45bc;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091864b8,1);
LAB_074d45bc:
      plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      do {
        lVar2 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_074d4640;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_074d4640:
        uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          if ((param_3 & 1) != 0) goto LAB_074d4778;
          plVar8 = *(long **)(param_1 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_074d4750;
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_074d4738;
        }
        lVar2 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185a30) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_074d46a0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a30,2);
LAB_074d46a0:
        auVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        plVar5 = auVar10._0_8_;
        if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5,DAT_09535468);
        }
        local_98 = CONCAT44(local_98._4_4_,0xffffffff);
        local_a0 = auVar10._8_8_;
        thunk_FUN_03f5d7b8(&local_a0);
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fdf2e0(*(long *)(param_1 + 0x28),plVar5,local_a0,local_98,DAT_0919fd80);
        if ((param_3 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fdf2e0(*(long *)(param_1 + 0x38),plVar5,local_a0,local_98,DAT_0919fd80);
        }
      } while( true );
    }
    lVar2 = System_Resources_ResourceReader__GetEnumeratorInternal();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    while (uVar3 = System_Resources_ResourceReader_ResourceEnumerator__MoveNext(lVar2,0),
          (uVar3 & 1) != 0) {
      plVar8 = (long *)System_Resources_ResourceReader_ResourceEnumerator__get_Key(lVar2,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
      local_b0 = 0;
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar2 + 0x20));
      thunk_FUN_03f5d7b8(&local_b0,0);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fdf2e0(*(long *)(param_1 + 0x38),plVar8,local_b0,local_a8,DAT_0919fd80);
    }
    goto LAB_074d4778;
  }
  goto LAB_074d4780;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_074d4738:
    if (*(long *)(piVar7 + -2) == DAT_091864b8) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_074d476c;
    }
  }
LAB_074d4750:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091864b8,0);
LAB_074d476c:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_074d4778:
  *(undefined1 *)(param_1 + 0x40) = 1;
LAB_074d4780:
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06fe0d78(*(long *)(param_1 + 0x28),param_2,&local_70,DAT_0919fd88);
    if ((uVar3 & 1) != 0) {
      lVar2 = System_Resources_RuntimeResourceSet__ResolveResourceLocator
                        (param_1,local_70,uStack_68,param_2,*(undefined8 *)(param_1 + 0x28),0);
      goto LAB_074d4a30;
    }
  }
  if ((param_3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_06fe0d78(*(long *)(param_1 + 0x38),param_2,&local_70,DAT_0919fd88);
    if ((uVar3 & 1) != 0) {
      lVar2 = System_Resources_RuntimeResourceSet__ResolveResourceLocator
                        (param_1,local_70,uStack_68,param_2,*(undefined8 *)(param_1 + 0x28),1);
      goto LAB_074d4a30;
    }
  }
  lVar2 = 0;
LAB_074d4a30:
  if (*local_c0 != '\0') {
    System_Threading_Monitor__Exit(*local_b8,0);
  }
  if (local_c8 == 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

