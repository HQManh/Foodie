// rea decompile_all
// name: CakeOrder.InGame.IngredientDropPositionCalculator$$GetColliderPolygon
// address: 0x42b108c
// body: available
// range: 0x42b108c-0x42b16cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b16c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b16cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_IngredientDropPositionCalculator__GetColliderPolygon
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_88;
  float fStack_84;
  float local_7c;
  float fStack_78;
  float local_38;
  float fStack_34;
  
  if ((DAT_095172b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f88);
    FUN_03f5c2a4(&DAT_09182548);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19b0);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_09189430);
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_095172b2 = 1;
  }
  if (param_4 != (long *)0x0) {
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    lVar4 = *param_4;
    if (lVar4 == DAT_09189430) {
      lVar4 = UnityEngine_PolygonCollider2D__GetPath(param_4,0,0);
      if (lVar4 != 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_0917d050);
        FUN_058abdf4(lVar5,*(undefined4 *)(lVar4 + 0x18),DAT_091b19b0);
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar9 = 0;
          uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          puVar10 = (undefined4 *)(lVar4 + 0x24);
          do {
            if (uVar6 <= uVar9) goto LAB_042b16cc;
            if (lVar3 == 0) goto LAB_042b16c8;
            uVar13 = *puVar10;
            uVar12 = UnityEngine_Transform__TransformPoint(puVar10[-1],uVar13,0,lVar3,0);
            lVar2 = DAT_091b19b8;
            if (lVar5 == 0) goto LAB_042b16c8;
            lVar7 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_042b16c8;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar1 * 8;
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar7 + 0x20) = uVar12;
              *(undefined4 *)(lVar7 + 0x24) = uVar13;
            }
            else {
              FUN_058ac614(lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 2;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        return lVar5;
      }
    }
    else if (lVar4 == DAT_09181f88) {
      fVar16 = (float)UnityEngine_BoxCollider2D__get_size(param_4,0);
      fVar15 = param_2;
      fVar17 = (float)UnityEngine_Collider2D__get_offset(param_4,0);
      lVar4 = FUN_03f5c394(DAT_091807e8,4);
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 != 0) {
          fVar11 = fVar17 - fVar16 * 0.5;
          fVar14 = fVar15 - param_2 * 0.5;
          *(float *)(lVar4 + 0x20) = fVar11;
          *(float *)(lVar4 + 0x24) = fVar14;
          if (uVar1 != 1) {
            fVar17 = fVar16 * 0.5 + fVar17;
            *(float *)(lVar4 + 0x28) = fVar17;
            *(float *)(lVar4 + 0x2c) = fVar14;
            if (2 < uVar1) {
              fVar15 = param_2 * 0.5 + fVar15;
              *(float *)(lVar4 + 0x30) = fVar17;
              *(float *)(lVar4 + 0x34) = fVar15;
              if (uVar1 != 3) {
                *(float *)(lVar4 + 0x38) = fVar11;
                *(float *)(lVar4 + 0x3c) = fVar15;
                lVar5 = thunk_FUN_03f9944c(DAT_0917d050);
                FUN_058abdf4(lVar5,4,DAT_091b19b0);
                if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
                  return lVar5;
                }
                uVar9 = 0;
                uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
                puVar10 = (undefined4 *)(lVar4 + 0x24);
                while (uVar9 < uVar6) {
                  if (lVar3 == 0) goto LAB_042b16c8;
                  uVar13 = *puVar10;
                  uVar12 = UnityEngine_Transform__TransformPoint(puVar10[-1],uVar13,0,lVar3,0);
                  lVar2 = DAT_091b19b8;
                  if (lVar5 == 0) goto LAB_042b16c8;
                  lVar7 = *(long *)(lVar5 + 0x10);
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar7 == 0) goto LAB_042b16c8;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    lVar7 = lVar7 + (long)(int)uVar1 * 8;
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar7 + 0x20) = uVar12;
                    *(undefined4 *)(lVar7 + 0x24) = uVar13;
                  }
                  else {
                    FUN_058ac614(lVar5,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
                  uVar9 = uVar9 + 1;
                  puVar10 = puVar10 + 2;
                  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar9) {
                    return lVar5;
                  }
                }
              }
            }
          }
        }
LAB_042b16cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
    else if (lVar4 == DAT_09182548) {
      UnityEngine_Collider2D__get_offset(param_4,0);
      if (lVar3 != 0) {
        fVar15 = (float)UnityEngine_Transform__TransformPoint(lVar3,0);
        fVar16 = (float)UnityEngine_CircleCollider2D__get_radius(param_4,0);
        fVar17 = (float)UnityEngine_Transform__get_lossyScale(lVar3,0);
        lVar3 = thunk_FUN_03f9944c(DAT_0917d050);
        FUN_058abdf4(lVar3,0x20,DAT_091b19b0);
        if (lVar3 != 0) {
          iVar8 = 0;
          while( true ) {
            sincosf(((float)iVar8 * 3.1415927 + (float)iVar8 * 3.1415927) * 0.03125,&fStack_34,
                    &local_38);
            lVar5 = DAT_091b19b8;
            lVar4 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 == 0) break;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar1 * 8;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(float *)(lVar4 + 0x20) = fVar15 + fVar16 * fVar17 * local_38;
              *(float *)(lVar4 + 0x24) = param_2 + fVar16 * fVar17 * fStack_34;
            }
            else {
              FUN_058ac614(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            iVar8 = iVar8 + 1;
            if (iVar8 == 0x20) {
              return lVar3;
            }
          }
        }
      }
    }
    else {
      UnityEngine_Collider2D__get_bounds(&local_88,param_4,0);
      lVar4 = thunk_FUN_03f9944c(DAT_0917d050);
      FUN_058abd7c(lVar4,DAT_091b19a0);
      lVar3 = DAT_091b19b8;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          fVar15 = local_88 - local_7c;
          fVar16 = fStack_84 - fStack_78;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 8;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(float *)(lVar5 + 0x20) = fVar15;
            *(float *)(lVar5 + 0x24) = fVar16;
          }
          else {
            FUN_058ac614(fVar15,fVar16,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          lVar5 = DAT_091b19b8;
          lVar3 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar3 != 0) {
            fVar17 = local_88 + local_7c;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (long)(int)uVar1 * 8;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(float *)(lVar3 + 0x20) = fVar17;
              *(float *)(lVar3 + 0x24) = fVar16;
            }
            else {
              FUN_058ac614(fVar17,fVar16,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = DAT_091b19b8;
            lVar3 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar3 != 0) {
              fVar16 = fStack_84 + fStack_78;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                lVar3 = lVar3 + (long)(int)uVar1 * 8;
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(float *)(lVar3 + 0x20) = fVar17;
                *(float *)(lVar3 + 0x24) = fVar16;
              }
              else {
                FUN_058ac614(fVar17,fVar16,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = DAT_091b19b8;
              lVar3 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar3 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                  lVar3 = lVar3 + (long)(int)uVar1 * 8;
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(float *)(lVar3 + 0x20) = fVar15;
                  *(float *)(lVar3 + 0x24) = fVar16;
                  return lVar4;
                }
                FUN_058ac614(fVar15,fVar16,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                return lVar4;
              }
            }
          }
        }
      }
    }
  }
LAB_042b16c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

