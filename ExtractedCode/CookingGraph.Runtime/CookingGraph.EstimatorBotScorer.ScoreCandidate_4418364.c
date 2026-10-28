// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$ScoreCandidate
// address: 0x4418364
// body: available
// range: 0x4418364-0x4418b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4418af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4418af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4418af8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4418afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4418b04 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0441876c) */
/* WARNING: Removing unreachable block (ram,0x04418a4c) */
/* WARNING: Removing unreachable block (ram,0x04418b00) */

undefined1  [16]
CookingGraph_EstimatorBotScorer__ScoreCandidate
          (long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6,
          undefined4 param_7,long *param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int *piVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined4 local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  uint local_98;
  
  lVar5 = param_1;
  if ((DAT_09517f0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a148);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b438);
    FUN_03f5c2a4(&DAT_091ab540);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab570);
    FUN_03f5c2a4(&DAT_091ab548);
    FUN_03f5c2a4(&DAT_09187e80);
    lVar5 = FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f0a = 1;
  }
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  if (param_2 == 0) goto LAB_04418af8;
  fVar16 = 0.0;
  bVar1 = *(char *)(param_2 + 0x30) != '\0';
  if (0 < param_5 && bVar1) {
    lVar9 = *(long *)(param_1 + 0x28);
    if ((param_6 & 1) == 0) {
      if (lVar9 == 0) goto LAB_04418af8;
      pfVar11 = (float *)(lVar9 + 0x24);
    }
    else {
      if (lVar9 == 0) goto LAB_04418af8;
      pfVar11 = (float *)(lVar9 + 0x28);
    }
    fVar16 = *pfVar11;
  }
  plVar6 = (long *)CookingGraph_EstimatorBotScorer__IngredientsOf(lVar5,param_2,param_3);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_0917a598) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04418514;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a598,0);
LAB_04418514:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    local_d8 = (uint)(0 < param_5 && bVar1);
    local_d4 = 0xffffffff;
    fVar15 = fVar16;
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044185b8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_044185b8:
      uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_04418760;
        lVar5 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar12 == 0) goto LAB_04418738;
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_04418720;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917ac48) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0441861c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac48,0);
LAB_0441861c:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar12 & 1) == 0) {
        if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *param_4;
        uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b438) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_044186ac;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b438,1);
LAB_044186ac:
        uVar12 = (*(code *)*puVar7)(param_4,uVar8,&local_a0,puVar7[1]);
        if ((uVar12 & 1) != 0) {
          fVar16 = fVar16 + (float)local_a0;
          if (fVar15 < (float)local_a0) {
            local_d4 = local_a0._4_4_;
            local_d8 = local_98 & 1;
            fVar15 = (float)local_a0;
          }
        }
      }
    } while( true );
  }
LAB_04418af8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04418720:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04418754;
    }
  }
LAB_04418738:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04418754:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_04418760:
  iVar4 = *(int *)(param_2 + 0x10);
  if (-1 < iVar4) {
    if (param_3 == 0) goto LAB_04418af8;
    lVar5 = *(long *)(param_3 + 0x28);
    if (((lVar5 != 0) && (iVar4 < *(int *)(lVar5 + 0x18))) &&
       (lVar5 = FUN_057e0998(lVar5,iVar4,DAT_091ab570), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_044187b0;
    }
  }
  lVar5 = 0;
LAB_044187b0:
  fVar17 = 0.0;
  iVar4 = 1;
  local_e0 = 0xffffffff;
  if (lVar5 == 0) goto LAB_044187cc;
LAB_044187c4:
  uVar3 = *(undefined4 *)(lVar5 + 0x18);
  do {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_Math__Min(param_7,uVar3,0);
    if (iVar2 <= iVar4) {
      uVar3 = CookingGraph_EstimatorBotScorer__EstimateFootprint(param_1,param_2,param_3);
      if (fVar16 == 0.0) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = System_Math__Max(1,uVar3,0);
        lVar5 = *(long *)(param_1 + 0x28);
        if ((param_6 & 1) == 0) {
          if (lVar5 == 0) goto LAB_04418af8;
          pfVar11 = (float *)(lVar5 + 0x5c);
        }
        else {
          if (lVar5 == 0) goto LAB_04418af8;
          pfVar11 = (float *)(lVar5 + 0x60);
        }
        fVar18 = *pfVar11 * (float)iVar4;
      }
      else {
        fVar18 = 0.0;
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Math__Max(0,(fVar16 + fVar17) - fVar18,0);
      if (fVar15 <= 0.0) {
        local_d4 = local_e0;
      }
      auVar20._4_4_ = local_d4;
      auVar20._0_4_ = uVar3;
      uVar12 = 0x100;
      if ((local_d8 & 0.0 < fVar15) == 0) {
        uVar12 = 0;
      }
      auVar20._8_8_ = uVar12 | 0.0 < fVar15;
      return auVar20;
    }
    if (lVar5 == 0) goto LAB_04418af8;
    lVar9 = FUN_057e0998(lVar5,iVar4,DAT_091ab548);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x18) == 0)) {
      uVar8 = *(undefined8 *)(lVar9 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if (((uVar12 & 1) == 0) && (*(int *)(lVar9 + 0x28) != 4)) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_04418af8;
        if ((*(int *)(lVar9 + 0x28) != 1) || (*(char *)(*(long *)(param_1 + 0x28) + 0x7c) == '\0'))
        {
          if (param_8 != (long *)0x0) {
            lVar10 = *param_8;
            uVar8 = *(undefined8 *)(lVar9 + 0x10);
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_0917a148) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                  goto LAB_044188fc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(param_8,DAT_0917a148,4);
LAB_044188fc:
            uVar12 = (*(code *)*puVar7)(param_8,uVar8,puVar7[1]);
            if ((uVar12 & 1) != 0) goto LAB_044189e8;
          }
          if (param_4 == (long *)0x0) goto LAB_04418af8;
          lVar10 = *param_4;
          uVar8 = *(undefined8 *)(lVar9 + 0x20);
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b438) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_04418978;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b438,1);
LAB_04418978:
          uVar12 = (*(code *)*puVar7)(param_4,uVar8,&local_b0,puVar7[1]);
          if (((uVar12 & 1) != 0) && (fVar18 = (float)local_b0, 0.0 < (float)local_b0)) {
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_04418af8;
            fVar19 = *(float *)(*(long *)(param_1 + 0x28) + 0x58);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            dVar14 = (double)System_Math__Pow((double)fVar19,(double)iVar4,0);
            if (fVar17 < fVar18 * (float)dVar14) {
              local_e0 = local_b0._4_4_;
              fVar17 = fVar18 * (float)dVar14;
            }
          }
        }
      }
    }
LAB_044189e8:
    iVar4 = iVar4 + 1;
    if (lVar5 != 0) goto LAB_044187c4;
LAB_044187cc:
    uVar3 = 0;
  } while( true );
}

