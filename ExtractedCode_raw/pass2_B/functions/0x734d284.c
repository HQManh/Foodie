// rea decompile_all
// name: Lean.Touch.LeanScreenDepth$$TryConvert
// address: 0x734d284
// body: available
// range: 0x734d284-0x734dad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734dad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x734dad4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Lean_Touch_LeanScreenDepth__TryConvert
          (undefined4 param_1,float param_2,float param_3,int *param_4,float *param_5,long param_6,
          undefined8 param_7)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined8 uVar11;
  ulong uVar12;
  float extraout_s0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130 [4];
  undefined8 local_110 [3];
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  long local_e0;
  undefined8 local_d8;
  float local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  if ((DAT_0952073f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091876e8);
    FUN_03f5c2a4(&DAT_091d2338);
    FUN_03f5c2a4(&DAT_091d2340);
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189070);
    FUN_03f5c2a4(&DAT_09202468);
    DAT_0952073f = 1;
  }
  local_c8 = 0;
  local_d0 = 0.0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar11 = *(undefined8 *)(param_4 + 2);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_b0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = CW_Common_CwHelper__GetCamera(uVar11,param_6,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09202468,param_6,0);
    return 0;
  }
  iVar4 = *param_4;
  uVar6 = 0;
  if (iVar4 < 3) {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        if (lVar5 != 0) {
          UnityEngine_Camera__ScreenPointToRay(&local_f8,param_1,param_2,0,lVar5,0);
          cVar3 = DAT_09515ce7;
          if (fStack_e4 == 0.0) {
            return 0;
          }
          fVar20 = (fStack_f0 - (float)param_4[7]) / -fStack_e4;
          *(ulong *)param_5 =
               CONCAT44((float)((ulong)local_f8 >> 0x20) + fStack_e8 * fVar20,
                        (float)local_f8 + fStack_ec * fVar20);
          param_5[2] = fStack_f0 + fStack_e4 * fVar20;
          if (cVar3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce7 = '\x01';
          }
          iVar4 = *(int *)(DAT_091876f0 + 0xe4);
          uVar11 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x54);
          uVar21 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x5c);
          goto joined_r0x0734dac8;
        }
      }
      else {
        if (iVar4 != 2) {
          return 0;
        }
        if (lVar5 != 0) {
          uVar19 = 0;
          UnityEngine_Camera__ScreenPointToRay(&local_f8,param_1,param_2,lVar5,0);
          if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = *(undefined8 *)(*(long *)(DAT_091876f0 + 0xb8) + 0x10);
          uVar21 = UnityEngine_LayerMask__op_Implicit(param_4[6],0);
          if (*(int *)(DAT_09189070 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189070);
          }
          local_110[0] = local_f8;
          iVar4 = UnityEngine_Physics__RaycastNonAlloc(0x7f800000,local_110,uVar11,uVar21,0);
          uVar2 = iVar4 - 1;
          if ((int)uVar2 < 0) {
            return 0;
          }
          fVar22 = 0.0;
          fVar24 = 0.0;
          fVar14 = 0.0;
          fVar20 = INFINITY;
          lVar5 = (ulong)uVar2 * 0x2c + 0x20;
          uVar12 = (ulong)uVar2;
          while( true ) {
            if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = *(long *)(*(long *)(DAT_091876f0 + 0xb8) + 0x10);
            uVar6 = DAT_091876f0;
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            puVar8 = (undefined8 *)(lVar7 + lVar5);
            uStack_b8 = puVar8[1];
            local_c0 = *puVar8;
            uVar11 = puVar8[2];
            uStack_98 = *(undefined4 *)(puVar8 + 5);
            uStack_a0 = (undefined4)puVar8[4];
            uStack_9c = (undefined4)((ulong)puVar8[4] >> 0x20);
            uStack_a8 = (undefined4)puVar8[3];
            local_a4 = (undefined4)((ulong)puVar8[3] >> 0x20);
            uStack_b0 = uVar11;
            fVar13 = (float)UnityEngine_RaycastHit__get_distance(&local_c0,0);
            fVar16 = (float)uVar11;
            if (fVar13 < fVar20) {
              uVar11 = UnityEngine_RaycastHit__get_transform(&local_c0,0);
              if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091876f0);
              }
              uVar6 = Lean_Touch_LeanScreenDepth__IsChildOf(uVar11,param_7);
              fVar17 = (float)uVar19;
              if ((uVar6 & 1) == 0) {
                fVar14 = (float)UnityEngine_RaycastHit__get_point(&local_c0,0);
                fVar24 = fVar16;
                fVar18 = fVar17;
                fVar15 = (float)UnityEngine_RaycastHit__get_normal(&local_c0,0);
                fVar23 = (float)param_4[7];
                fVar20 = fVar24;
                fVar22 = fVar18;
                uVar21 = UnityEngine_RaycastHit__get_normal(&local_c0,0);
                if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar19 = (ulong)(uint)(fVar18 * fVar23);
                puVar9 = *(undefined4 **)(DAT_091876f0 + 0xb8);
                puVar9[2] = fVar22;
                fVar14 = fVar14 + fVar15 * fVar23;
                *puVar9 = uVar21;
                puVar9[1] = fVar20;
                fVar24 = fVar16 + fVar24 * fVar23;
                fVar22 = fVar17 + fVar18 * fVar23;
                fVar20 = fVar13;
              }
            }
            lVar5 = lVar5 + -0x2c;
            bVar1 = (long)uVar12 < 1;
            uVar12 = uVar12 - 1;
            if (bVar1) {
              if (INFINITY <= fVar20) {
                return 0;
              }
              *param_5 = fVar14;
              param_5[1] = fVar24;
              param_5[2] = fVar22;
              return 1;
            }
          }
        }
      }
      goto LAB_0734dad0;
    }
    if (lVar5 == 0) goto LAB_0734dad0;
    param_3 = (float)param_4[7];
  }
  else {
    if (iVar4 < 5) {
      if (iVar4 != 3) {
        if (iVar4 != 4) {
          return 0;
        }
        local_e0 = 0;
        if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = FUN_04be1714(param_4,param_6,&local_e0,DAT_091d2338);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        if (lVar5 != 0) {
          UnityEngine_Camera__ScreenPointToRay(&local_f8,param_1,param_2,0,lVar5,0);
          lVar5 = local_e0;
          local_140 = CONCAT44(fStack_e4,fStack_e8);
          uStack_148 = CONCAT44(fStack_ec,fStack_f0);
          fVar20 = (float)param_4[7];
          local_150 = local_f8;
          uVar6 = UnityEngine_Time__get_deltaTime(0);
          if (lVar5 != 0) {
            uStack_168 = uStack_148;
            local_170 = local_150;
            local_160 = local_140;
            uVar6 = Lean_Common_LeanPath__TryGetClosest
                              (fVar20 * extraout_s0,lVar5,&local_170,param_5,0xffffffff,0);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            if (*(int *)(DAT_091876e8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_f8 = **(undefined8 **)(DAT_091876e8 + 0xb8);
            fStack_f0 = *(float *)(*(undefined8 **)(DAT_091876e8 + 0xb8) + 1);
            if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar8 = *(undefined8 **)(DAT_091876f0 + 0xb8);
            *puVar8 = local_f8;
            *(float *)(puVar8 + 1) = fStack_f0;
            return 1;
          }
        }
        goto LAB_0734dad0;
      }
      local_c8 = 0;
      if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = FUN_04be1714(param_4,param_6,&local_c8,DAT_091d2340);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      if (lVar5 == 0) goto LAB_0734dad0;
      param_3 = 0.0;
      UnityEngine_Camera__ScreenPointToRay(&local_f8,param_1,param_2,lVar5,0);
      local_d0 = 0.0;
      local_d8 = 0;
      uVar6 = 0;
      if (local_c8 == 0) goto LAB_0734dad0;
      local_130[0] = local_f8;
      uVar6 = Lean_Common_LeanPlane__TryRaycast(param_4[7],local_c8,local_130,&local_d8,1,0);
      param_2 = (float)local_f8;
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      *(undefined8 *)param_5 = local_d8;
      param_5[2] = local_d0;
      uVar6 = 0;
      if (local_c8 == 0) goto LAB_0734dad0;
      lVar5 = UnityEngine_Component__get_transform(local_c8,0);
      uVar6 = 0;
      if (lVar5 == 0) goto LAB_0734dad0;
      fVar20 = (float)UnityEngine_Transform__get_forward(lVar5,0);
      if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      goto LAB_0734da0c;
    }
    if (iVar4 != 5) {
      if (iVar4 != 6) {
        return 0;
      }
      if (lVar5 != 0) {
        UnityEngine_Camera__ScreenPointToRay(&local_f8,param_1,param_2,0,lVar5,0);
        cVar3 = DAT_0951615d;
        if (fStack_e8 == 0.0) {
          return 0;
        }
        fVar14 = (float)((ulong)local_f8 >> 0x20);
        fVar20 = (fVar14 - (float)param_4[7]) / -fStack_e8;
        *(ulong *)param_5 =
             CONCAT44(fVar14 + fStack_e8 * fVar20,(float)local_f8 + fStack_ec * fVar20);
        param_5[2] = fStack_f0 + fStack_e4 * fVar20;
        if (cVar3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951615d = '\x01';
        }
        iVar4 = *(int *)(DAT_091876f0 + 0xe4);
        uVar11 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x24);
        uVar21 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x2c);
joined_r0x0734dac8:
        if (iVar4 == 0) {
          FUN_03f5c424();
        }
        puVar8 = *(undefined8 **)(DAT_091876f0 + 0xb8);
        *puVar8 = uVar11;
        *(undefined4 *)(puVar8 + 1) = uVar21;
        return 1;
      }
      goto LAB_0734dad0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Inequality(param_6,0,0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (param_6 == 0) goto LAB_0734dad0;
    lVar7 = UnityEngine_GameObject__get_transform(param_6,0);
    uVar6 = 0;
    if ((lVar7 == 0) || (uVar6 = UnityEngine_Transform__get_position(lVar7,0), lVar5 == 0))
    goto LAB_0734dad0;
    UnityEngine_Camera__WorldToScreenPoint(lVar5,0);
    param_3 = param_3 + (float)param_4[7];
  }
  fVar20 = (float)UnityEngine_Camera__ScreenToWorldPoint(param_1,lVar5,0);
  *param_5 = fVar20;
  param_5[1] = param_2;
  param_5[2] = param_3;
  lVar5 = UnityEngine_Component__get_transform(lVar5,0);
  uVar6 = 0;
  if (lVar5 != 0) {
    fVar20 = (float)UnityEngine_Transform__get_forward(lVar5,0);
    fVar20 = -fVar20;
    param_2 = -param_2;
    param_3 = -param_3;
    if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
LAB_0734da0c:
    pfVar10 = *(float **)(DAT_091876f0 + 0xb8);
    *pfVar10 = fVar20;
    pfVar10[1] = param_2;
    pfVar10[2] = param_3;
    return 1;
  }
LAB_0734dad0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar6);
}

