// rea decompile_all
// name: System.Threading.WaitHandle$$WaitAny
// address: 0x76293f4
// body: available
// range: 0x76293f4-0x76296e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7629568 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7629574 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76295c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76296cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07629ae4) */
/* WARNING: Removing unreachable block (ram,0x07629af4) */

int System_Threading_WaitHandle__WaitAny(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong __n;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *__s;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  long *aplStack_d0 [4];
  uint uStack_ac;
  undefined1 auStack_a8 [4];
  uint uStack_a4;
  long lStack_a0;
  long lStack_98;
  
  if ((DAT_09522198 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184a48);
    FUN_03f5c2a4(&DAT_09180830);
    FUN_03f5c2a4(&DAT_0918cea8);
    DAT_09522198 = 1;
  }
  if (param_1 == 0) {
    puVar6 = &DAT_092103a0;
LAB_07629580:
    uVar5 = thunk_FUN_03fc39d4(puVar6);
    uVar7 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar5,uVar7,0);
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_09213170);
    uVar7 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar5,uVar7,0);
  }
  else if ((int)*(long *)(param_1 + 0x18) < 0x41) {
    if (-2 < param_2) {
      plVar3 = (long *)FUN_03f5c394(DAT_09180830);
      uVar15 = *(uint *)(param_1 + 0x18);
      if (0 < (int)uVar15) {
        uVar11 = 0;
        lVar16 = 0x20;
        do {
          if (uVar15 <= uVar11) goto LAB_076296cc;
          lVar14 = *(long *)(param_1 + lVar16);
          if (lVar14 == 0) {
            puVar6 = &DAT_091fc138;
            goto LAB_07629580;
          }
          if (plVar3 == (long *)0x0) goto LAB_07629568;
          lVar4 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar11) goto LAB_076296cc;
          *(long *)((long)plVar3 + lVar16) = lVar14;
          thunk_FUN_03f5d7b8((long)plVar3 + lVar16,lVar14);
          uVar15 = *(uint *)(param_1 + 0x18);
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 8;
        } while ((int)uVar11 < (int)uVar15);
      }
      if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = 0;
      iVar2 = System_Threading_WaitHandle__WaitMultiple(plVar3,param_2,0,0);
      uVar15 = iVar2 - 0x80;
      if (0x7f < iVar2) {
        if (plVar3 == (long *)0x0) {
LAB_07629568:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = *(uint *)(plVar3 + 3);
        if (iVar2 < (int)(uVar12 + 0x80)) {
          if ((int)uVar15 < (int)uVar12) {
            if (uVar15 < uVar12) {
              lVar16 = plVar3[(ulong)uVar15 + 4];
              if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              System_Threading_WaitHandle__ThrowAbandonedMutexException(uVar15,lVar16);
            }
LAB_076296cc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar18 = System_Threading_WaitHandle__ThrowAbandonedMutexException();
          lVar14 = auVar18._0_8_;
          lVar16 = tpidr_el0;
          lStack_98 = *(long *)(lVar16 + 0x28);
          uVar13 = auVar18._8_8_ & 0xffffffff;
          lStack_a0 = lVar14;
          if ((DAT_0952219d & 1) == 0) {
            FUN_03f5c2a4(&DAT_091801c8);
            FUN_03f5c2a4(&DAT_091def80);
            FUN_03f5c2a4(&DAT_0918cea8);
            DAT_0952219d = 1;
          }
          uStack_a4 = 0;
          auStack_a8[0] = 0;
          uStack_ac = 0;
          if (lVar14 == 0) {
LAB_076299f4:
            if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          else if (*(int *)(lVar14 + 0x18) < 0x41) {
            uStack_a4 = 0xffffffff;
            plVar3 = (long *)System_Threading_SynchronizationContext__get_Current();
            aplStack_d0[1] = (long *)&uStack_a4;
            lVar4 = 0;
            aplStack_d0[0] = (long *)0x0;
            aplStack_d0[2] = (long *)&uStack_ac;
            aplStack_d0[3] = &lStack_a0;
            do {
              uVar10 = *(ulong *)(lVar14 + 0x18);
              uVar15 = (uint)lVar4;
              if ((int)(uint)uVar10 <= (int)uVar15) {
                if ((plVar3 != (long *)0x0) && ((*(byte *)(plVar3 + 2) & 1) != 0)) {
                  lVar14 = FUN_03f5c394(DAT_091801c8);
                  if (lStack_a0 == 0) goto LAB_07629898;
                  lVar4 = 4;
                  goto LAB_0762984c;
                }
                __n = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (uVar10 & 0xffffffff) << 3;
                if ((uVar10 & 0xffffffff) == 0) {
                  __s = (undefined8 *)0x0;
                }
                else {
                  __s = (undefined8 *)((long)aplStack_d0 - (__n + 0xf & 0xfffffffffffffff0));
                }
                memset(__s,0,__n);
                lVar4 = 4;
                puVar17 = __s;
                goto LAB_076298e4;
              }
              auStack_a8[0] = 0;
              if ((uint)uVar10 <= uVar15) {
                if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                goto LAB_07629b88;
              }
              if ((*(long *)(lVar14 + lVar4 * 8 + 0x20) == 0) ||
                 (lVar14 = System_Threading_WaitHandle__get_SafeWaitHandle(), lVar14 == 0)) {
                if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_07629b88;
              }
              System_Runtime_InteropServices_SafeHandle__DangerousAddRef(lVar14,auStack_a8,0);
              lVar4 = lVar4 + 1;
              lVar14 = lStack_a0;
              uStack_a4 = uVar15;
            } while (lStack_a0 != 0);
            if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
          else {
            iVar2 = 0x7fffffff;
            plVar3 = aplStack_d0[3];
LAB_076299c4:
            aplStack_d0[3] = plVar3;
            if (*(long *)(lVar16 + 0x28) == lStack_98) {
              return iVar2;
            }
          }
          goto LAB_07629b88;
        }
      }
      if (*(int *)(DAT_09184a48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_GC__KeepAlive(plVar3,0);
      return iVar2;
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_09209198);
    uVar7 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921f698);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar8,uVar7,0);
  }
  else {
    uVar5 = thunk_FUN_03fc39d4(&DAT_0920f928);
    uVar7 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar5 = thunk_FUN_03f9944c();
    System_NotSupportedException___ctor(uVar5,uVar7,0);
  }
  uVar7 = thunk_FUN_03fc39d4(&DAT_091def70);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar7);
  while( true ) {
    if (*(long *)(lStack_a0 + lVar4 * 8) == 0) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar9 = System_Threading_WaitHandle__get_SafeWaitHandle();
    if (lVar9 == 0) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    if (lVar14 == 0) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar15) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
    *(undefined8 *)(lVar14 + lVar4 * 8) = *(undefined8 *)(lVar9 + 0x10);
    lVar4 = lVar4 + 1;
    if (lStack_a0 == 0) break;
LAB_0762984c:
    uVar15 = (int)lVar4 - 4;
    if ((int)*(uint *)(lStack_a0 + 0x18) <= (int)uVar15) {
      iVar2 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,lVar14,0,uVar13,*(undefined8 *)(*plVar3 + 0x1c0));
      uStack_ac = uStack_a4;
      plVar3 = aplStack_d0[3];
      goto joined_r0x07629978;
    }
    if (*(uint *)(lStack_a0 + 0x18) <= uVar15) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
  }
LAB_07629898:
  if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07629b88;
joined_r0x07629978:
  plVar1 = aplStack_d0[3];
  if ((int)uStack_ac < 0) goto LAB_076299c4;
  lVar14 = *aplStack_d0[3];
  aplStack_d0[3] = plVar3;
  if (lVar14 == 0) goto LAB_076299f4;
  if (*(uint *)(lVar14 + 0x18) <= uStack_ac) {
    if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    goto LAB_07629b88;
  }
  if ((*(long *)(lVar14 + (ulong)uStack_ac * 8 + 0x20) == 0) ||
     (lVar14 = System_Threading_WaitHandle__get_SafeWaitHandle(), lVar14 == 0)) goto LAB_076299f4;
  System_Runtime_InteropServices_SafeHandle__DangerousRelease(lVar14,0);
  uStack_ac = uStack_ac - 1;
  plVar3 = aplStack_d0[3];
  aplStack_d0[3] = plVar1;
  goto joined_r0x07629978;
  while( true ) {
    if (uVar15 <= uVar12) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07629b88;
    }
    if (*(long *)(lVar14 + lVar4 * 8) == 0) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar9 = System_Threading_WaitHandle__get_SafeWaitHandle();
    lVar14 = lStack_a0;
    if (lVar9 == 0) {
      if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07629b88;
    }
    lVar4 = lVar4 + 1;
    *puVar17 = *(undefined8 *)(lVar9 + 0x10);
    puVar17 = puVar17 + 1;
    if (lVar14 == 0) break;
LAB_076298e4:
    uVar15 = *(uint *)(lVar14 + 0x18);
    uVar12 = (int)lVar4 - 4;
    if ((int)uVar15 <= (int)uVar12) {
      if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar15 = *(uint *)(lVar14 + 0x18);
      }
      iVar2 = FUN_03f6a71c(__s,uVar15,uVar11 & 1,uVar13);
      uStack_ac = uStack_a4;
      plVar3 = aplStack_d0[3];
      goto joined_r0x07629978;
    }
  }
  if (*(long *)(lVar16 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_07629b88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

