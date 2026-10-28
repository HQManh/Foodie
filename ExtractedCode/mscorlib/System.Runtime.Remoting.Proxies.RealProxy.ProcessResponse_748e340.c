// rea decompile_all
// name: System.Runtime.Remoting.Proxies.RealProxy$$ProcessResponse
// address: 0x748e340
// body: available
// range: 0x748e340-0x748ea37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748e8dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748e8e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748e8e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748e968 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748e9ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748ea34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Proxies_RealProxy__ProcessResponse(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_64;
  
  if ((DAT_095212e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091860a8);
    FUN_03f5c2a4(&DAT_091860b0);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_095212e1 = 1;
  }
  local_64 = 0;
  if (param_2 != 0) {
    plVar17 = *(long **)(param_2 + 0x10);
    if (plVar17 != (long *)0x0) {
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
          DAT_09188228)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar17);
      }
    }
    if (param_1 != (long *)0x0) {
      lVar14 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_091860b0) {
            puVar6 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_0748e454;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860b0,2);
LAB_0748e454:
      lVar14 = (*(code *)*puVar6)(param_1,puVar6[1]);
      if (lVar14 != 0) {
        if (plVar17 == (long *)0x0) goto LAB_0748e8dc;
        plVar7 = (long *)(**(code **)(*plVar17 + 0x3f8))(plVar17,*(undefined8 *)(*plVar17 + 0x400));
        lVar14 = *param_1;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_091860b0) {
              puVar6 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_0748e4d0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860b0,2);
LAB_0748e4d0:
        uVar8 = (*(code *)*puVar6)(param_1,puVar6[1]);
        if (plVar7 == (long *)0x0) goto LAB_0748e8dc;
        uVar15 = (**(code **)(*plVar7 + 0x8d8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x8e0));
        if ((uVar15 & 1) == 0) {
          thunk_FUN_03fc39d4(&DAT_09187090);
          uVar8 = thunk_FUN_03f9944c();
          uVar12 = thunk_FUN_03fc39d4(&DAT_0920bf98);
          System_InvalidCastException___ctor(uVar8,uVar12,0);
          uVar12 = thunk_FUN_03fc39d4(&DAT_091d7038);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,uVar12);
        }
      }
      uVar15 = System_Runtime_Remoting_Messaging_MonoMethodMessage__NeedsOutProcessing
                         (param_2,&local_64,0);
      if ((uVar15 & 1) == 0) {
        plVar17 = (long *)FUN_03f5c394(DAT_09180318,0);
        return plVar17;
      }
      if (plVar17 != (long *)0x0) {
        lVar14 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
        plVar17 = (long *)FUN_03f5c394(DAT_09180318,local_64);
        if (lVar14 != 0) {
          uVar2 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar2 < 1) {
            return plVar17;
          }
          uVar18 = 0;
          uVar19 = 0;
          do {
            if (uVar2 <= uVar18) goto LAB_0748e8e0;
            plVar7 = *(long **)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
            if (plVar7 == (long *)0x0) break;
            uVar15 = System_Reflection_ParameterInfo__get_IsOut(plVar7,0);
            if ((uVar15 & 1) == 0) {
LAB_0748e5b0:
              lVar9 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
              if (lVar9 == 0) break;
              uVar15 = System_Type__get_IsByRef(lVar9,0);
              if ((uVar15 & 1) != 0) {
                iVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                lVar9 = *param_1;
                uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == DAT_091860a8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_0748e684;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,0);
LAB_0748e684:
                iVar4 = (*(code *)*puVar6)(param_1,puVar6[1]);
                if (iVar3 < iVar4) {
                  uVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                  lVar9 = *param_1;
                  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == DAT_091860a8) {
                        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar16 + 8) * 0x10 + 0x138);
                        goto LAB_0748e770;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,8);
LAB_0748e770:
                  lVar9 = (*(code *)*puVar6)(param_1,uVar5,puVar6[1]);
                  if (lVar9 == 0) goto LAB_0748e7e4;
                  plVar10 = (long *)(**(code **)(*plVar7 + 0x1e8))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  if ((plVar10 == (long *)0x0) ||
                     (plVar10 = (long *)(**(code **)(*plVar10 + 0x448))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 0x450)),
                     plVar10 == (long *)0x0)) break;
                  uVar15 = (**(code **)(*plVar10 + 0x8d8))
                                     (plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x8e0));
                  if ((uVar15 & 1) == 0) {
                    FUN_039b1d98(plVar7);
                    uVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    uVar12 = thunk_FUN_03fc39d4(&DAT_0920bf78);
                    uVar13 = thunk_FUN_03fc39d4(&DAT_091f7580);
                    uVar8 = System_String__Concat(uVar12,uVar8,uVar13,0);
                    thunk_FUN_03fc39d4(&DAT_09187090);
                    uVar12 = thunk_FUN_03f9944c();
                    System_InvalidCastException___ctor(uVar12,uVar8,0);
LAB_0748e9d8:
                    uVar8 = thunk_FUN_03fc39d4(&DAT_091d7038);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar12,uVar8);
                  }
                  if (plVar17 == (long *)0x0) break;
                  lVar11 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar17 + 0x40));
                  if (lVar11 == 0) {
                    uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar8,0);
                  }
                }
                else {
LAB_0748e7e4:
                  if (plVar17 == (long *)0x0) break;
                  lVar9 = 0;
                }
                if (*(uint *)(plVar17 + 3) <= uVar19) {
LAB_0748e8e0:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar11 = (long)(int)uVar19;
                lVar1 = (long)(int)uVar19;
                uVar19 = uVar19 + 1;
                plVar17[lVar11 + 4] = lVar9;
                thunk_FUN_03f5d7b8(plVar17 + lVar1 + 4,lVar9);
              }
            }
            else {
              lVar9 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
              if (lVar9 == 0) break;
              uVar15 = System_Type__get_IsByRef(lVar9,0);
              if ((uVar15 & 1) != 0) goto LAB_0748e5b0;
              iVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
              lVar9 = *param_1;
              uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == DAT_091860a8) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0748e6f8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,0);
LAB_0748e6f8:
              iVar4 = (*(code *)*puVar6)(param_1,puVar6[1]);
              if (iVar3 < iVar4) {
                uVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                lVar9 = *param_1;
                uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == DAT_091860a8) {
                      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar16 + 8) * 0x10 + 0x138);
                      goto LAB_0748e834;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091860a8,8);
LAB_0748e834:
                lVar9 = (*(code *)*puVar6)(param_1,uVar5,puVar6[1]);
                if (lVar9 != 0) {
                  uVar5 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
                  lVar11 = System_Runtime_Remoting_Messaging_MonoMethodMessage__GetArg
                                     (param_2,uVar5,0);
                  if (lVar11 == 0) {
                    FUN_039b1d98(plVar7);
                    uVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    uVar12 = thunk_FUN_03fc39d4(&DAT_09211de0);
                    uVar13 = thunk_FUN_03fc39d4(&DAT_091f7320);
                    uVar8 = System_String__Concat(uVar12,uVar8,uVar13,0);
                    thunk_FUN_03fc39d4(&DAT_09189ec8);
                    uVar12 = thunk_FUN_03f9944c();
                    System_Runtime_Remoting_RemotingException___ctor(uVar12,uVar8);
                    goto LAB_0748e9d8;
                  }
                  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  System_Runtime_Remoting_RemotingServices__UpdateOutArgObject(plVar7,lVar11,lVar9);
                }
              }
            }
            uVar2 = *(uint *)(lVar14 + 0x18);
            uVar18 = uVar18 + 1;
            if ((int)uVar2 <= (int)uVar18) {
              return plVar17;
            }
          } while( true );
        }
      }
    }
  }
LAB_0748e8dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

