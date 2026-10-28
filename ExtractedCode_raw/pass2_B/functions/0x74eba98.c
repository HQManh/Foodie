// rea decompile_all
// name: System.Reflection.CustomAttributeData$$Equals
// address: 0x74eba98
// body: available
// range: 0x74eba98-0x74ec10f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ebecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_CustomAttributeData__Equals(long param_1,long *param_2)

{
  int iVar1;
  int iVar3;
  int iVar2;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_095215e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_09183050);
    FUN_03f5c2a4(&DAT_09183058);
    FUN_03f5c2a4(&DAT_0917a028);
    FUN_03f5c2a4(&DAT_0917a030);
    FUN_03f5c2a4(&DAT_0917b040);
    FUN_03f5c2a4(&DAT_0917b048);
    DAT_095215e7 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_09183040 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09183040 + 0x130) * 8 + -8) ==
        DAT_09183040)) {
      lVar7 = param_2[2];
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Reflection_ConstructorInfo__op_Inequality(lVar7,uVar9);
      if ((uVar4 & 1) == 0) {
        plVar8 = (long *)param_2[3];
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917a030) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_074ebc08;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a030,0);
LAB_074ebc08:
          iVar1 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          plVar8 = *(long **)(param_1 + 0x18);
          if (plVar8 != (long *)0x0) {
            lVar7 = *plVar8;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == DAT_0917a030) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_074ebc6c;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a030,0);
LAB_074ebc6c:
            iVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
            if (iVar1 != iVar2) {
              return 0;
            }
            plVar8 = (long *)param_2[4];
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar4 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_0917a028) {
                    puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_074ebcdc;
                  }
                  uVar4 = uVar4 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a028,0);
LAB_074ebcdc:
              iVar1 = (*(code *)*puVar5)(plVar8,puVar5[1]);
              plVar8 = *(long **)(param_1 + 0x20);
              if (plVar8 != (long *)0x0) {
                lVar7 = *plVar8;
                uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar4 != 0) {
                  piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == DAT_0917a028) {
                      puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_074ebd40;
                    }
                    uVar4 = uVar4 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a028,0);
LAB_074ebd40:
                iVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
                if (iVar1 != iVar2) {
                  return 0;
                }
                plVar8 = *(long **)(param_1 + 0x18);
                if (plVar8 != (long *)0x0) {
                  iVar1 = 0;
                  do {
                    lVar7 = *plVar8;
                    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar4 != 0) {
                      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) == DAT_0917a030) {
                          puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                          goto LAB_074ebdbc;
                        }
                        uVar4 = uVar4 - 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a030,0);
LAB_074ebdbc:
                    iVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
                    auVar10._8_8_ = local_a0._8_8_;
                    auVar10._0_8_ = local_a0._0_8_;
                    if (iVar2 <= iVar1) {
                      plVar8 = *(long **)(param_1 + 0x20);
                      if (plVar8 != (long *)0x0) {
                        iVar1 = 0;
                        goto LAB_074ebeec;
                      }
                      break;
                    }
                    plVar8 = *(long **)(param_1 + 0x18);
                    local_a0 = auVar10;
                    if (plVar8 == (long *)0x0) break;
                    lVar7 = *plVar8;
                    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar4 != 0) {
                      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) == DAT_0917b048) {
                          puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                          goto LAB_074ebe24;
                        }
                        uVar4 = uVar4 - 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b048,0);
LAB_074ebe24:
                    auVar10 = (*(code *)*puVar5)(plVar8,iVar1,puVar5[1]);
                    plVar8 = (long *)param_2[3];
                    local_70 = auVar10;
                    if (plVar8 == (long *)0x0) break;
                    lVar7 = *plVar8;
                    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar4 != 0) {
                      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) == DAT_0917b048) {
                          puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                          goto LAB_074ebe8c;
                        }
                        uVar4 = uVar4 - 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b048,0);
                    auVar10 = local_70;
LAB_074ebe8c:
                    local_70 = auVar10;
                    auVar10 = (*(code *)*puVar5)(plVar8,iVar1,puVar5[1]);
                    local_d0 = auVar10;
                    uVar9 = FUN_03f5c42c(DAT_09183058,local_d0);
                    uVar4 = System_Reflection_CustomAttributeTypedArgument__Equals(local_70,uVar9);
                    if ((uVar4 & 1) != 0) {
                      return 0;
                    }
                    plVar8 = *(long **)(param_1 + 0x18);
                    iVar1 = iVar1 + 1;
                  } while (plVar8 != (long *)0x0);
                }
              }
            }
          }
        }
LAB_074ebecc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return 0;
LAB_074ebeec:
  lVar7 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a028) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_074ebf38;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a028,0);
LAB_074ebf38:
  iVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
  if (iVar2 <= iVar1) {
    return 1;
  }
  plVar8 = (long *)param_2[4];
  if (plVar8 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a028) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_074ebfa4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a028,0);
LAB_074ebfa4:
      iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
      if (iVar3 <= iVar2) {
        return 0;
      }
      plVar8 = *(long **)(param_1 + 0x20);
      if (plVar8 == (long *)0x0) break;
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b040) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_074ec00c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b040,0);
LAB_074ec00c:
      (*(code *)*puVar5)(local_d0,plVar8,iVar1,puVar5[1]);
      uStack_88 = uStack_b8;
      local_90 = uStack_c0;
      uStack_78 = uStack_a8;
      local_80 = local_b0;
      plVar8 = (long *)param_2[4];
      local_a0 = local_d0;
      if (plVar8 == (long *)0x0) break;
      lVar7 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b040) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_074ec084;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b040,0);
LAB_074ec084:
      (*(code *)*puVar5)(&local_100,plVar8,iVar2,puVar5[1]);
      uStack_128 = uStack_f8;
      local_130 = local_100;
      uStack_118 = uStack_e8;
      uStack_120 = uStack_f0;
      uStack_108 = uStack_d8;
      local_110 = local_e0;
      uVar9 = FUN_03f5c42c(DAT_09183050,&local_130);
      uVar4 = System_Reflection_CustomAttributeNamedArgument__Equals(local_a0,uVar9);
      if ((uVar4 & 1) != 0) goto LAB_074ec0d4;
      plVar8 = (long *)param_2[4];
      iVar2 = iVar2 + 1;
      if (plVar8 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_074ebecc;
LAB_074ec0d4:
  plVar8 = *(long **)(param_1 + 0x20);
  iVar1 = iVar1 + 1;
  if (plVar8 == (long *)0x0) goto LAB_074ebecc;
  goto LAB_074ebeec;
}

