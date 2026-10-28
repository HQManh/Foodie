// rea decompile_all
// name: System.RuntimeType$$IsConvertibleToPrimitiveType
// address: 0x75f7c50
// body: available
// range: 0x75f7c50-0x75f82df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f82d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f82dc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_RuntimeType__IsConvertibleToPrimitiveType(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  char *pcVar7;
  uint *puVar8;
  ushort *puVar9;
  int *piVar10;
  byte *pbVar11;
  short *psVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ushort uVar15;
  float fVar16;
  uint uVar17;
  double dVar18;
  double local_28;
  
  if ((param_1 == (long *)0x0) ||
     (plVar3 = (long *)System_Object__GetType(param_1,0), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (**(code **)(*plVar3 + 0x5d8))(plVar3,*(undefined8 *)(*plVar3 + 0x5e0));
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)System_Enum__GetUnderlyingType(plVar3);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar4 = System_Type__op_Equality(plVar3,param_2,0);
    if ((uVar4 & 1) != 0) {
      return param_1;
    }
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_Type__GetTypeCode(plVar3,0);
  iVar2 = System_Type__GetTypeCode(param_2,0);
  if (iVar2 < 10) {
    if (iVar2 < 8) {
      if (iVar2 == 4) {
        if (iVar1 == 8) {
          return param_1;
        }
        if (iVar1 == 6) {
          if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_095353f0 + 0x40)) goto LAB_075f82d8;
          pbVar11 = (byte *)thunk_FUN_03f99594(param_1);
          uVar15 = (ushort)*pbVar11;
          uVar14 = DAT_09535460;
          goto LAB_075f8028;
        }
      }
      else if (iVar2 == 7) {
        if (iVar1 == 5) {
          if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_09535408 + 0x40)) {
LAB_075f82d8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(param_1);
          }
          pcVar7 = (char *)thunk_FUN_03f99594(param_1);
          uVar15 = (ushort)*pcVar7;
          uVar14 = DAT_09535410;
        }
        else {
          if (iVar1 != 6) goto LAB_075f810c;
          if (*(long *)(*param_1 + 0x40) != *(long *)(DAT_095353f0 + 0x40)) goto LAB_075f82d8;
          pbVar11 = (byte *)thunk_FUN_03f99594(param_1);
          uVar15 = (ushort)*pbVar11;
          uVar14 = DAT_09535410;
        }
LAB_075f8028:
        local_28 = (double)CONCAT62(local_28._2_6_,uVar15);
        goto LAB_075f82b4;
      }
    }
    else if (iVar2 == 8) {
      if (iVar1 == 4) {
        return param_1;
      }
      if (iVar1 == 6) {
        pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
        uVar15 = (ushort)*pbVar11;
        uVar14 = DAT_09535418;
        goto LAB_075f8028;
      }
    }
    else if (iVar2 == 9) {
      if (iVar1 < 6) {
        uVar14 = DAT_09535460;
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            pcVar7 = (char *)FUN_039aef84(param_1,DAT_09535408);
            uVar17 = (uint)*pcVar7;
            uVar14 = DAT_09535420;
            goto LAB_075f8164;
          }
          goto LAB_075f810c;
        }
      }
      else {
        uVar14 = DAT_09535418;
        if (iVar1 != 8) {
          if (iVar1 == 7) {
            psVar12 = (short *)FUN_039aef84(param_1,DAT_09535410);
            uVar17 = (uint)*psVar12;
            uVar14 = DAT_09535420;
          }
          else {
            if (iVar1 != 6) goto LAB_075f810c;
            pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
            uVar17 = (uint)*pbVar11;
            uVar14 = DAT_09535420;
          }
          goto LAB_075f8164;
        }
      }
      puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
      uVar17 = (uint)*puVar9;
      uVar14 = DAT_09535420;
      goto LAB_075f8164;
    }
LAB_075f810c:
    plVar3 = (long *)0x0;
  }
  else {
    if (iVar2 < 0xc) {
      if (iVar2 != 10) {
        if (iVar2 == 0xb) {
          if (iVar1 < 7) {
            uVar14 = DAT_09535460;
            if (iVar1 == 4) {
LAB_075f8170:
              puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
              local_28 = (double)(ulong)*puVar9;
              uVar14 = DAT_09535440;
            }
            else if (iVar1 == 5) {
              pcVar7 = (char *)FUN_039aef84(param_1,DAT_09535408);
              local_28 = (double)(long)*pcVar7;
              uVar14 = DAT_09535440;
            }
            else {
              if (iVar1 != 6) goto LAB_075f810c;
              pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
              local_28 = (double)(ulong)*pbVar11;
              uVar14 = DAT_09535440;
            }
          }
          else if (iVar1 < 9) {
            if (iVar1 != 7) {
              uVar14 = DAT_09535418;
              if (iVar1 == 8) goto LAB_075f8170;
              goto LAB_075f810c;
            }
            psVar12 = (short *)FUN_039aef84(param_1,DAT_09535410);
            local_28 = (double)(long)*psVar12;
            uVar14 = DAT_09535440;
          }
          else if (iVar1 == 9) {
            piVar10 = (int *)FUN_039aef84(param_1,DAT_09535420);
            local_28 = (double)(long)*piVar10;
            uVar14 = DAT_09535440;
          }
          else {
            if (iVar1 != 10) goto LAB_075f810c;
            puVar8 = (uint *)FUN_039aef84(param_1,DAT_09535428);
            local_28 = (double)(ulong)*puVar8;
            uVar14 = DAT_09535440;
          }
          goto LAB_075f82b4;
        }
        goto LAB_075f810c;
      }
      uVar14 = DAT_09535460;
      if ((iVar1 == 4) || (uVar14 = DAT_09535418, iVar1 == 8)) {
        puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
        uVar17 = (uint)*puVar9;
        uVar14 = DAT_09535428;
      }
      else {
        if (iVar1 != 6) goto LAB_075f810c;
        pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
        uVar17 = (uint)*pbVar11;
        uVar14 = DAT_09535428;
      }
LAB_075f8164:
      local_28 = (double)CONCAT44(local_28._4_4_,uVar17);
    }
    else {
      if (iVar2 != 0xc) {
        if (iVar2 == 0xd) {
          if (7 < iVar1) {
            if (iVar1 < 10) {
              uVar14 = DAT_09535418;
              if (iVar1 == 8) goto LAB_075f81f8;
              if (iVar1 != 9) goto LAB_075f810c;
              piVar10 = (int *)FUN_039aef84(param_1,DAT_09535420);
              fVar16 = (float)*piVar10;
            }
            else {
              if (iVar1 == 10) {
                puVar8 = (uint *)FUN_039aef84(param_1,DAT_09535428);
                uVar17 = *puVar8;
                goto LAB_075f8204;
              }
              if (iVar1 == 0xb) {
                plVar3 = (long *)FUN_039aef84(param_1,DAT_09535440);
                fVar16 = (float)*plVar3;
              }
              else {
                if (iVar1 != 0xc) goto LAB_075f810c;
                puVar5 = (undefined8 *)FUN_039aef84(param_1,DAT_09535448);
                dVar18 = (double)NEON_ucvtf(*puVar5);
                fVar16 = (float)dVar18;
              }
            }
LAB_075f8208:
            local_28 = (double)CONCAT44(local_28._4_4_,fVar16);
            uVar14 = DAT_09535450;
            goto LAB_075f82b4;
          }
          if (iVar1 < 6) {
            uVar14 = DAT_09535460;
            if (iVar1 == 4) {
LAB_075f81f8:
              puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
              uVar17 = (uint)*puVar9;
LAB_075f8204:
              fVar16 = (float)NEON_ucvtf(uVar17);
              goto LAB_075f8208;
            }
            if (iVar1 == 5) {
              pcVar7 = (char *)FUN_039aef84(param_1,DAT_09535408);
              iVar1 = (int)*pcVar7;
LAB_075f8094:
              fVar16 = (float)iVar1;
              goto LAB_075f8208;
            }
          }
          else {
            if (iVar1 == 6) {
              pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
              uVar17 = (uint)*pbVar11;
              goto LAB_075f8204;
            }
            if (iVar1 == 7) {
              psVar12 = (short *)FUN_039aef84(param_1,DAT_09535410);
              iVar1 = (int)*psVar12;
              goto LAB_075f8094;
            }
          }
        }
        else if (iVar2 == 0xe) {
          if (iVar1 < 9) {
            if (iVar1 < 6) {
              uVar14 = DAT_09535460;
              if (iVar1 != 4) {
                if (iVar1 == 5) {
                  pcVar7 = (char *)FUN_039aef84(param_1,DAT_09535408);
                  iVar1 = (int)*pcVar7;
                  goto LAB_075f8290;
                }
                goto LAB_075f810c;
              }
            }
            else {
              if (iVar1 == 6) {
                pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
                uVar4 = (ulong)*pbVar11;
                goto LAB_075f82a8;
              }
              if (iVar1 == 7) {
                psVar12 = (short *)FUN_039aef84(param_1,DAT_09535410);
                iVar1 = (int)*psVar12;
LAB_075f8290:
                local_28 = (double)iVar1;
                uVar14 = DAT_09535458;
                goto LAB_075f82b4;
              }
              uVar14 = DAT_09535418;
              if (iVar1 != 8) goto LAB_075f810c;
            }
            puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
            uVar4 = (ulong)*puVar9;
LAB_075f82a8:
            local_28 = (double)NEON_ucvtf(uVar4);
            uVar14 = DAT_09535458;
          }
          else {
            if (iVar1 < 0xb) {
              if (iVar1 == 9) {
                piVar10 = (int *)FUN_039aef84(param_1,DAT_09535420);
                iVar1 = *piVar10;
                goto LAB_075f8290;
              }
              if (iVar1 == 10) {
                puVar8 = (uint *)FUN_039aef84(param_1,DAT_09535428);
                uVar4 = (ulong)*puVar8;
                goto LAB_075f82a8;
              }
              goto LAB_075f810c;
            }
            if (iVar1 == 0xb) {
              plVar3 = (long *)FUN_039aef84(param_1,DAT_09535440);
              local_28 = (double)*plVar3;
              uVar14 = DAT_09535458;
            }
            else {
              if (iVar1 == 0xc) {
                puVar13 = (ulong *)FUN_039aef84(param_1,DAT_09535448);
                uVar4 = *puVar13;
                goto LAB_075f82a8;
              }
              if (iVar1 != 0xd) goto LAB_075f810c;
              pfVar6 = (float *)FUN_039aef84(param_1,DAT_09535450);
              local_28 = (double)*pfVar6;
              uVar14 = DAT_09535458;
            }
          }
          goto LAB_075f82b4;
        }
        goto LAB_075f810c;
      }
      if (iVar1 < 8) {
        uVar14 = DAT_09535460;
        if (iVar1 == 4) {
LAB_075f8120:
          puVar9 = (ushort *)FUN_039aef84(param_1,uVar14);
          local_28 = (double)(ulong)*puVar9;
          uVar14 = DAT_09535448;
        }
        else {
          if (iVar1 != 6) goto LAB_075f810c;
          pbVar11 = (byte *)FUN_039aef84(param_1,DAT_095353f0);
          local_28 = (double)(ulong)*pbVar11;
          uVar14 = DAT_09535448;
        }
      }
      else {
        uVar14 = DAT_09535418;
        if (iVar1 == 8) goto LAB_075f8120;
        if (iVar1 != 10) goto LAB_075f810c;
        puVar8 = (uint *)FUN_039aef84(param_1,DAT_09535428);
        local_28 = (double)(ulong)*puVar8;
        uVar14 = DAT_09535448;
      }
    }
LAB_075f82b4:
    plVar3 = (long *)FUN_03f5c42c(uVar14,&local_28);
  }
  return plVar3;
}

