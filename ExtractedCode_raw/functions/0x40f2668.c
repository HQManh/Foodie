// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$OnDrawGizmosSelected
// address: 0x40f2668
// body: available
// range: 0x40f2668-0x40f2b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f2b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__OnDrawGizmosSelected(long param_1)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_s3;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  if ((DAT_095160f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_091abe48);
    DAT_095160f4 = 1;
  }
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Application__get_isPlaying(0);
  if ((uVar2 & 1) == 0) {
LAB_040f270c:
    iVar7 = *(int *)(param_1 + 0x6c);
    if (iVar7 < 2) {
      iVar7 = 1;
    }
  }
  else {
    if (*(long *)(param_1 + 0x198) == 0) goto LAB_040f2b64;
    iVar7 = *(int *)(*(long *)(param_1 + 0x198) + 0x18);
    if (iVar7 < 1) goto LAB_040f270c;
  }
  lVar3 = AnhPD_FoodOrder_IngredientSpawnerController__get_Root(param_1);
  uVar15 = *(undefined4 *)(param_1 + 0xb0);
  UnityEngine_Gizmos__get_matrix(&local_130,0);
  uStack_e8 = uStack_128;
  local_f0 = local_130;
  uStack_d8 = uStack_118;
  uStack_e0 = uStack_120;
  uStack_c8 = uStack_108;
  local_d0 = local_110;
  uStack_b8 = uStack_f8;
  uStack_c0 = uStack_100;
  if (lVar3 != 0) {
    uVar9 = UnityEngine_Transform__get_position(lVar3,0);
    uVar11 = (int)uStack_120;
    uVar13 = (int)uStack_100;
    local_9c = UnityEngine_Transform__get_rotation(lVar3,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    local_a8 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
    local_a0 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
    local_98 = uVar11;
    local_94 = uVar13;
    local_90 = in_s3;
    local_8c = uVar9;
    local_88 = (int)uStack_120;
    local_84 = (int)uStack_100;
    UnityEngine_Matrix4x4__Internal_TRS(&local_170,&local_8c,&local_9c,&local_a8,0);
    uStack_1a8 = uStack_168;
    local_1b0 = local_170;
    uStack_198 = uStack_158;
    uStack_1a0 = uStack_160;
    uStack_188 = uStack_148;
    local_190 = local_150;
    uStack_178 = uStack_138;
    uStack_180 = uStack_140;
    UnityEngine_Gizmos__set_matrix(&local_1b0,0);
    fVar16 = *(float *)(param_1 + 0xa8) +
             (*(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac)) * (float)(iVar7 + -1);
    UnityEngine_Gizmos__set_color(0x3f800000,0x3f19999a,0x3dcccccd,0x3f800000,0);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Gizmos__DrawWireCube(*puVar5,puVar5[1],puVar5[2],fVar16,uVar15,0,0);
    fVar17 = *(float *)(param_1 + 0x38);
    if (DAT_09515cee == '\0') {
      FUN_03f5c2a4(&DAT_09187e98);
      DAT_09515cee = '\x01';
    }
    fVar10 = ABS(fVar17);
    fVar16 = fVar16 + fVar17 + fVar17;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar12 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
    fVar1 = fVar10 * 1e-06;
    if (fVar10 * 1e-06 <= fVar12) {
      fVar1 = fVar12;
    }
    if (fVar1 <= ABS(0.0 - fVar17)) {
      UnityEngine_Gizmos__set_color(0x3f800000,0x3f59999a,0x3ecccccd,0x3f333333,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Gizmos__DrawWireCube(*puVar5,puVar5[1],puVar5[2],fVar16,uVar15,0,0);
    }
    fVar17 = (float)AnhPD_FoodOrder_IngredientSpawnerController__EdgeHalfSpan
                              (param_1,*(undefined8 *)(param_1 + 0x28));
    fVar10 = (float)AnhPD_FoodOrder_IngredientSpawnerController__EdgeHalfSpan
                              (param_1,*(undefined8 *)(param_1 + 0x30));
    if (fVar17 <= fVar10) {
      fVar17 = fVar10;
    }
    if (0.0 < fVar17) {
      UnityEngine_Gizmos__set_color(0x3f19999a,0x3f800000,0x3f000000,0x3f333333,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Gizmos__DrawWireCube
                (*puVar5,puVar5[1],puVar5[2],fVar16 + fVar17 + fVar17,uVar15,0,0);
    }
    uVar15 = *(undefined4 *)(param_1 + 0xb8);
    iVar6 = 0;
    do {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Application__get_isPlaying(0);
      if ((uVar2 & 1) == 0) {
LAB_040f2a68:
        fVar16 = ((float)iVar6 - (float)(iVar7 + -1) * 0.5) *
                 (*(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac));
      }
      else {
        lVar3 = *(long *)(param_1 + 0x198);
        if (lVar3 == 0) break;
        if (*(int *)(lVar3 + 0x18) <= iVar6) goto LAB_040f2a68;
        lVar3 = FUN_057e0998(lVar3,iVar6,DAT_091abe48);
        if (lVar3 == 0) break;
        fVar16 = *(float *)(lVar3 + 0x18);
      }
      uVar4 = *(uint *)(param_1 + 0xb4);
      uVar8 = 0;
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      do {
        uVar14 = 0x3f800000;
        uVar9 = 0x3eb33333;
        uVar11 = 0x3dcccccd;
        uVar13 = 0x3f666666;
        if (uVar8 == uVar4 - 1) {
          uVar13 = 0x3f800000;
          uVar14 = 0x3f000000;
          uVar9 = 0x3f666666;
          uVar11 = 0x3e4ccccd;
        }
        UnityEngine_Gizmos__set_color(uVar11,uVar13,uVar14,uVar9,0);
        UnityEngine_Gizmos__DrawWireCube
                  (fVar16,(*(float *)(param_1 + 0xb0) * 0.5 - *(float *)(param_1 + 0xbc)) -
                          (*(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xb8)) *
                          (float)(int)uVar8,0,uVar15,uVar15,0,0);
        uVar4 = *(uint *)(param_1 + 0xb4);
        uVar8 = uVar8 + 1;
        if ((int)uVar4 < 2) {
          uVar4 = 1;
        }
      } while (uVar8 < uVar4);
      iVar6 = iVar6 + 1;
      if (iVar6 == iVar7) {
        uStack_1e8 = uStack_e8;
        local_1f0 = local_f0;
        uStack_1d8 = uStack_d8;
        uStack_1e0 = uStack_e0;
        uStack_1c8 = uStack_c8;
        local_1d0 = local_d0;
        uStack_1b8 = uStack_b8;
        uStack_1c0 = uStack_c0;
        UnityEngine_Gizmos__set_matrix(&local_1f0,0);
        return;
      }
    } while( true );
  }
LAB_040f2b64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

