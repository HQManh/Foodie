// rea decompile_all
// name: ChocDino.UIFX.ColorAdjust$$UpdateMaterials
// address: 0x43c9b04
// body: available
// range: 0x43c9b04-0x43c9f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c9f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorAdjust__UpdateMaterials(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar7;
  ulong uVar6;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09517bd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ebe0);
    FUN_03f5c2a4(&DAT_0920a158);
    DAT_09517bd6 = 1;
  }
  if ((((*(float *)(param_1 + 0x24) < 255.0) || (*(float *)(param_1 + 0x4c) < 255.0)) ||
      (*(float *)(param_1 + 0x50) < 255.0)) ||
     ((*(float *)(param_1 + 0x54) < 255.0 || (*(float *)(param_1 + 0x58) < 255.0)))) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_043c9f60;
    UnityEngine_Material__EnableKeyword(*(long *)(param_1 + 0x60),DAT_0920a158,0);
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_043c9f60;
    UnityEngine_Material__DisableKeyword(*(long *)(param_1 + 0x60),DAT_0920a158,0);
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (1.0 <= *(float *)(param_1 + 0x5c)) {
    if (*(int *)(DAT_0918ebe0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar3 != 0) {
      uStack_78 = *(undefined8 *)(param_1 + 0x80);
      local_80 = *(undefined8 *)(param_1 + 0x78);
      uStack_68 = *(undefined8 *)(param_1 + 0x90);
      uStack_70 = *(undefined8 *)(param_1 + 0x88);
      uStack_58 = *(undefined8 *)(param_1 + 0xa0);
      local_60 = *(undefined8 *)(param_1 + 0x98);
      uStack_48 = *(undefined8 *)(param_1 + 0xb0);
      uStack_50 = *(undefined8 *)(param_1 + 0xa8);
      UnityEngine_Material__SetMatrix(lVar3,**(undefined4 **)(DAT_0918ebe0 + 0xb8),&local_80,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_Material__SetColorImpl
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                   (int)*(float *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                   *(long *)(param_1 + 0x60),*(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 4),0);
        if (*(long *)(param_1 + 0x60) != 0) {
          UnityEngine_Material__SetColorImpl
                    (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                     *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                     *(long *)(param_1 + 0x60),*(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 8),0
                    );
          if (*(long *)(param_1 + 0x60) != 0) {
            UnityEngine_Material__SetColorImpl
                      (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                       *(long *)(param_1 + 0x60),
                       *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 0xc),0);
            lVar3 = *(long *)(param_1 + 0x60);
            if (lVar3 != 0) {
              fVar7 = *(float *)(param_1 + 0x54);
              fVar9 = *(float *)(param_1 + 0x58);
              uVar6 = (ulong)*(uint *)(param_1 + 0x4c);
              fVar11 = *(float *)(param_1 + 0x50);
              uVar1 = *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 0x10);
              goto LAB_043c9f28;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_0918ebe0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = **(undefined4 **)(DAT_0918ebe0 + 0xb8);
    if (DAT_09516ccb == '\0') {
      FUN_03f5c2a4(&DAT_09187ec0);
      DAT_09516ccb = '\x01';
    }
    uStack_138 = *(undefined8 *)(param_1 + 0x80);
    local_140 = *(undefined8 *)(param_1 + 0x78);
    uStack_128 = *(undefined8 *)(param_1 + 0x90);
    uStack_130 = *(undefined8 *)(param_1 + 0x88);
    uStack_118 = *(undefined8 *)(param_1 + 0xa0);
    local_120 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = *(long *)(DAT_09187ec0 + 0xb8);
    uStack_f8 = *(undefined8 *)(lVar2 + 0x48);
    local_100 = *(undefined8 *)(lVar2 + 0x40);
    uStack_e8 = *(undefined8 *)(lVar2 + 0x58);
    uStack_f0 = *(undefined8 *)(lVar2 + 0x50);
    uStack_d8 = *(undefined8 *)(lVar2 + 0x68);
    local_e0 = *(undefined8 *)(lVar2 + 0x60);
    uStack_c8 = *(undefined8 *)(lVar2 + 0x78);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x70);
    uStack_108 = *(undefined8 *)(param_1 + 0xb0);
    uStack_110 = *(undefined8 *)(param_1 + 0xa8);
    ChocDino_UIFX_MathUtils__LerpUnclamped
              (&local_c0,*(undefined4 *)(param_1 + 0x5c),&local_100,&local_140,1,0);
    if (lVar3 != 0) {
      uStack_178 = uStack_b8;
      local_180 = local_c0;
      uStack_168 = uStack_a8;
      uStack_170 = uStack_b0;
      uStack_158 = uStack_98;
      local_160 = local_a0;
      uStack_148 = uStack_88;
      uStack_150 = uStack_90;
      UnityEngine_Material__SetMatrix(lVar3,uVar1,&local_180,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        fVar11 = *(float *)(param_1 + 0x5c);
        UnityEngine_Material__SetColorImpl
                  (fVar11 * *(float *)(param_1 + 0x1c) + 0.0,
                   fVar11 * *(float *)(param_1 + 0x20) + 0.0,
                   (int)(fVar11 * (*(float *)(param_1 + 0x24) + -255.0) + 255.0),
                   (*(float *)(param_1 + 0x28) + -1.0) * fVar11 + 1.0,*(long *)(param_1 + 0x60),
                   *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 4),0);
        lVar3 = *(long *)(param_1 + 0x60);
        uVar1 = *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 8);
        if (DAT_09516627 == '\0') {
          FUN_03f5c2a4(&DAT_0918cc38);
          DAT_09516627 = '\x01';
        }
        if (lVar3 != 0) {
          fVar10 = *(float *)(param_1 + 0x5c);
          uVar8 = (*(undefined8 **)(DAT_0918cc38 + 0xb8))[1];
          uVar5 = **(undefined8 **)(DAT_0918cc38 + 0xb8);
          fVar11 = (float)uVar5;
          fVar7 = (float)((ulong)uVar5 >> 0x20);
          fVar9 = (float)uVar8;
          fVar4 = (float)((ulong)uVar8 >> 0x20);
          fVar7 = fVar7 + ((float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) - fVar7) * fVar10
          ;
          UnityEngine_Material__SetColorImpl
                    (CONCAT44(fVar7,fVar11 + ((float)*(undefined8 *)(param_1 + 0x2c) - fVar11) *
                                             fVar10),fVar7,
                     fVar9 + ((float)*(undefined8 *)(param_1 + 0x34) - fVar9) * fVar10,
                     fVar4 + ((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) - fVar4) *
                             fVar10,lVar3,uVar1,0);
          lVar3 = *(long *)(param_1 + 0x60);
          uVar1 = *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 0xc);
          if (DAT_09516627 == '\0') {
            FUN_03f5c2a4(&DAT_0918cc38);
            DAT_09516627 = '\x01';
          }
          if (lVar3 != 0) {
            fVar10 = *(float *)(param_1 + 0x5c);
            uVar8 = (*(undefined8 **)(DAT_0918cc38 + 0xb8))[1];
            uVar5 = **(undefined8 **)(DAT_0918cc38 + 0xb8);
            fVar11 = (float)uVar5;
            fVar7 = (float)((ulong)uVar5 >> 0x20);
            fVar9 = (float)uVar8;
            fVar4 = (float)((ulong)uVar8 >> 0x20);
            fVar7 = fVar7 + ((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) - fVar7) *
                            fVar10;
            UnityEngine_Material__SetColorImpl
                      (CONCAT44(fVar7,fVar11 + ((float)*(undefined8 *)(param_1 + 0x3c) - fVar11) *
                                               fVar10),fVar7,
                       fVar9 + ((float)*(undefined8 *)(param_1 + 0x44) - fVar9) * fVar10,
                       fVar4 + ((float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20) - fVar4) *
                               fVar10,lVar3,uVar1,0);
            lVar3 = *(long *)(param_1 + 0x60);
            uVar1 = *(undefined4 *)(*(long *)(DAT_0918ebe0 + 0xb8) + 0x10);
            if (DAT_09517caa == '\0') {
              FUN_03f5c2a4(&DAT_0918cc38);
              DAT_09517caa = '\x01';
            }
            if (lVar3 != 0) {
              fVar10 = *(float *)(param_1 + 0x5c);
              uVar8 = *(undefined8 *)(*(long *)(DAT_0918cc38 + 0xb8) + 0x18);
              uVar5 = *(undefined8 *)(*(long *)(DAT_0918cc38 + 0xb8) + 0x10);
              fVar4 = (float)uVar5 * 255.0;
              fVar11 = (float)((ulong)uVar5 >> 0x20) * 255.0;
              fVar7 = (float)uVar8 * 255.0;
              fVar9 = (float)((ulong)uVar8 >> 0x20) * 255.0;
              fVar11 = fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) - fVar11) *
                                fVar10;
              uVar6 = CONCAT44(fVar11,fVar4 + ((float)*(undefined8 *)(param_1 + 0x4c) - fVar4) *
                                              fVar10);
              fVar7 = fVar7 + ((float)*(undefined8 *)(param_1 + 0x54) - fVar7) * fVar10;
              fVar9 = fVar9 + ((float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) - fVar9) *
                              fVar10;
LAB_043c9f28:
              UnityEngine_Material__SetColorImpl(uVar6,fVar11,fVar7,fVar9,lVar3,uVar1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_043c9f60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

