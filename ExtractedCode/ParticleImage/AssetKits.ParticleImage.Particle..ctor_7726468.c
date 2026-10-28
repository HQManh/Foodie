// rea decompile_all
// name: AssetKits.ParticleImage.Particle$$.ctor
// address: 0x7726468
// body: available
// range: 0x7726468-0x772696b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7726968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Particle___ctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_09522a31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0450);
    FUN_03f5c2a4(&DAT_091b3590);
    FUN_03f5c2a4(&DAT_091b0448);
    FUN_03f5c2a4(&DAT_091b3588);
    FUN_03f5c2a4(&DAT_0917d620);
    FUN_03f5c2a4(&DAT_0917cca0);
    FUN_03f5c2a4(&DAT_0918cce8);
    DAT_09522a31 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar4 = thunk_FUN_03f9944c(DAT_0917d620);
  FUN_0596e7c4(uVar4,DAT_091b3588);
  *(undefined8 *)(param_8 + 0x158) = uVar4;
  thunk_FUN_03f5d7b8(param_8 + 0x158,uVar4);
  System_Object___ctor(param_8,0);
  *(long *)(param_8 + 0x10) = param_9;
  thunk_FUN_03f5d7b8((long *)(param_8 + 0x10),param_9);
  if (param_9 != 0) {
    lVar5 = UnityEngine_Component__get_transform(param_9,0);
    plVar13 = (long *)(param_8 + 0x98);
    *plVar13 = lVar5;
    thunk_FUN_03f5d7b8(plVar13,lVar5);
    *(undefined4 *)(param_8 + 0x88) = uStack0000000000000000;
    *(undefined4 *)(param_8 + 0x8c) = uStack0000000000000004;
    *(undefined4 *)(param_8 + 0x90) = uStack0000000000000008;
    *(undefined4 *)(param_8 + 0x94) = uStack000000000000000c;
    *(undefined4 *)(param_8 + 0x20) = param_1;
    *(undefined4 *)(param_8 + 0x24) = param_2;
    *(undefined4 *)(param_8 + 0x60) = uStack0000000000000014;
    *(undefined4 *)(param_8 + 100) = in_stack_00000018;
    *(undefined4 *)(param_8 + 0x28) = param_6;
    *(undefined4 *)(param_8 + 0x2c) = param_7;
    *(undefined4 *)(param_8 + 0x50) = param_3;
    *(undefined4 *)(param_8 + 0x54) = param_4;
    *(undefined4 *)(param_8 + 0x58) = param_5;
    *(undefined4 *)(param_8 + 0x5c) = uStack0000000000000010;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xac) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xb0) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xb4) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xb8) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xbc) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xc0) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xd4) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xc4) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 200) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xcc) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xd0) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xd8) = uVar15;
    uVar15 = UnityEngine_Random__get_value(0);
    uVar16 = UnityEngine_Random__get_value(0);
    *(undefined4 *)(param_8 + 0xe8) = uVar15;
    *(undefined4 *)(param_8 + 0xec) = uVar16;
    uVar4 = DAT_0917cca0;
    *(undefined4 *)(param_8 + 0xa8) = in_stack_00000020;
    lVar5 = thunk_FUN_03f9944c(uVar4);
    FUN_05868518(lVar5,DAT_091b0448);
    plVar12 = (long *)(param_8 + 0xa0);
    *plVar12 = lVar5;
    thunk_FUN_03f5d7b8(plVar12,lVar5);
    if (*plVar13 != 0) {
      uVar15 = UnityEngine_Transform__get_position(*plVar13,0);
      *(undefined4 *)(param_8 + 0xf0) = uVar15;
      *(undefined4 *)(param_8 + 0xf4) = param_4;
      *(undefined4 *)(param_8 + 0xf8) = param_6;
      lVar5 = DAT_091b0450;
      if (*(char *)(param_9 + 0x6a0) == '\0') {
        lVar6 = *plVar12;
        if (lVar6 == 0) goto LAB_07726968;
        lVar11 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_07726968;
        uVar9 = *(uint *)(lVar6 + 0x18);
        if (uVar9 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar9 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar9 + 1;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0x3f8000003f800000;
        }
        else {
          FUN_05868dd4(0x3f800000,0x3f800000,0,0,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        uVar7 = *(ulong *)(param_9 + 0x6a4);
        uVar14 = uVar7 >> 0x20;
        uVar9 = (int)(uVar7 >> 0x20) - 1;
        if (-1 < (int)uVar9) {
          do {
            if (0 < (int)uVar7) {
              iVar10 = 0;
              do {
                lVar5 = DAT_091b0450;
                lVar6 = *plVar12;
                if (lVar6 == 0) goto LAB_07726968;
                lVar11 = *(long *)(lVar6 + 0x10);
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_07726968;
                iVar2 = iVar10 + 1;
                fVar17 = 1.0 / (float)(int)uVar7;
                uVar3 = *(uint *)(lVar6 + 0x18);
                fVar18 = 1.0 / (float)(int)(uVar7 >> 0x20);
                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                  *(float *)(lVar11 + 0x20) = fVar17 * (float)iVar2;
                  *(float *)(lVar11 + 0x24) = fVar18 * (float)(int)uVar14;
                  *(float *)(lVar11 + 0x28) = fVar17 * (float)iVar10;
                  *(float *)(lVar11 + 0x2c) = fVar18 * (float)(int)uVar9;
                }
                else {
                  FUN_05868dd4(lVar6,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                uVar7 = *(ulong *)(param_9 + 0x6a4);
                iVar10 = iVar2;
              } while (iVar2 < (int)uVar7);
            }
            bVar1 = 0 < (int)uVar9;
            uVar14 = (ulong)uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar1);
        }
      }
      uStack_98 = *(undefined8 *)(param_9 + 0x6d8);
      local_a0 = *(undefined8 *)(param_9 + 0x6d0);
      uStack_88 = *(undefined8 *)(param_9 + 0x6e8);
      uStack_90 = *(undefined8 *)(param_9 + 0x6e0);
      iVar2 = *(int *)(param_8 + 0x150);
      uVar4 = AssetKits_ParticleImage_Extensions__Remap
                        (*(undefined4 *)(param_8 + 0x74),0,*(undefined4 *)(param_8 + 0xa8),0,
                         0x3f800000,0);
      fVar17 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                (uVar4,*(undefined4 *)(param_8 + 0xd4),&local_a0,0);
      uVar4 = DAT_0918cce8;
      uVar8 = *(undefined8 *)(param_8 + 0x20);
      *(undefined8 *)(param_8 + 0x138) = uVar8;
      *(undefined8 *)(param_8 + 0x18) = uVar8;
      *(undefined8 *)(param_8 + 0x118) = uVar8;
      *(undefined8 *)(param_8 + 0x128) = uVar8;
      iVar10 = -0x80000000;
      if (fVar17 != INFINITY) {
        iVar10 = (int)fVar17;
      }
      *(int *)(param_8 + 0x150) = iVar10 + iVar2;
      uVar4 = thunk_FUN_03f9944c(uVar4);
      UnityEngine_UI_VertexHelper___ctor(uVar4,0);
      *(undefined8 *)(param_8 + 0x160) = uVar4;
      thunk_FUN_03f5d7b8(param_8 + 0x160,uVar4);
      lVar5 = DAT_091b3590;
      if (*(long *)(param_8 + 0x10) != 0) {
        if (*(char *)(*(long *)(param_8 + 0x10) + 0x728) == '\0') {
          return;
        }
        lVar6 = *(long *)(param_8 + 0x158);
        if (lVar6 != 0) {
          lVar11 = *(long *)(lVar6 + 0x10);
          uVar15 = *(undefined4 *)(param_8 + 0x20);
          uVar16 = *(undefined4 *)(param_8 + 0x24);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar9 = *(uint *)(lVar6 + 0x18);
            if (uVar9 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar9 * 0xc;
              *(uint *)(lVar6 + 0x18) = uVar9 + 1;
              *(undefined4 *)(lVar11 + 0x20) = uVar15;
              *(undefined4 *)(lVar11 + 0x24) = uVar16;
              *(undefined4 *)(lVar11 + 0x28) = 0;
              return;
            }
            FUN_0596f08c(uVar15,uVar16,0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_07726968:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

