// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$ModifyMesh
// address: 0x43ef46c
// body: available
// range: 0x43ef46c-0x43ef8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ef8f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext__ModifyMesh
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
               uint param_10)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  ulong local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  
  if ((DAT_09517dea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e30);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517dea = 1;
  }
  uVar10 = *(undefined4 *)(param_5 + 0x1e8);
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_11c = 0;
  uStack_120 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  uStack_168 = 0;
  local_170 = 0;
  if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Coffee_UIEffects_UIEffectContext__ApplyFlipWithoutEffect(param_9,uVar10);
  if (param_9 == 0) {
LAB_043ef8f4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_9,0);
  uVar4 = Coffee_UIEffects_UIEffectContext__get_willModifyMaterial(param_5);
  if (((uVar4 & 1) != 0) && (iVar3 != 0)) {
    if (*(int *)(DAT_09184e30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar5 = (long *)Coffee_UIEffects_GraphicProxy__Find(param_6,0);
    if (plVar5 == (long *)0x0) goto LAB_043ef8f4;
    uVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,param_6,*(undefined8 *)(*plVar5 + 400));
    (**(code **)(*plVar5 + 0x198))(plVar5,param_6,param_7,*(undefined8 *)(*plVar5 + 0x1a0));
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 8);
    Coffee_UIEffects_UIEffectContext__GetExpandSize(param_5,param_10 & 1);
    uVar10 = (**(code **)(*plVar5 + 0x1b8))(plVar5,param_6,*(undefined8 *)(*plVar5 + 0x1c0));
    UnityEngine_UI_VertexHelper__GetUIVertexStream(param_9,lVar8,0);
    iVar1 = 6;
    if ((uVar4 & 1) == 0) {
      iVar1 = iVar3;
    }
    if (0 < iVar3) {
      iVar9 = 0;
      do {
        Coffee_UIEffects_UIVertexUtil__GetBounds(lVar8,iVar9,iVar1,&local_100,&local_110,0);
        Coffee_UIEffects_UIVertexUtil__Expand
                  (uVar10,param_2,param_3,param_4,local_100 & 0xffffffff,local_100._4_4_,
                   (undefined4)local_f8,local_f8._4_4_,lVar8,iVar9,iVar1,0);
        if (lVar8 == 0) goto LAB_043ef8f4;
        iVar7 = 0;
        do {
          FUN_05894708(&local_f0,lVar8,iVar9 + iVar7,DAT_091b1750);
          uVar2 = uStack_ac;
          uVar4 = local_b4;
          uStack_128 = uStack_c8;
          uStack_130 = local_d0;
          uStack_148 = uStack_e8;
          local_150 = local_f0;
          uStack_138 = uStack_d8;
          local_140 = local_e0;
          uStack_11c = uStack_bc;
          local_124 = uStack_c4;
          uStack_120 = uStack_c0;
          uStack_168 = uStack_9c;
          local_170 = local_a4;
          uStack_158 = uStack_8c;
          local_160 = local_94;
          if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x148);
          if (lVar6 == 0) {
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uStack_ac = CONCAT44((float)(local_110 >> 0x20) + (float)(local_108 >> 0x20),
                                 (float)local_110 + (float)local_108);
            local_b4 = local_110;
          }
          else {
            if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
              FUN_03f5c424();
              uStack_1a8 = uStack_148;
              local_1b0 = local_150;
              uStack_198 = uStack_138;
              local_1a0 = local_140;
              local_190 = uStack_130;
              lVar6 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x148);
              uStack_17c = uStack_11c;
              uStack_1c8 = uStack_168;
              local_1d0 = local_170;
              uStack_1b8 = uStack_158;
              uStack_1c0 = local_160;
              if (lVar6 == 0) goto LAB_043ef8f4;
            }
            uStack_bc = uStack_11c;
            uStack_d8 = uStack_138;
            local_e0 = local_140;
            local_d0 = uStack_130;
            uStack_e8 = uStack_148;
            local_f0 = local_150;
            uStack_9c = uStack_168;
            local_a4 = local_170;
            uStack_8c = uStack_158;
            local_94 = local_160;
            local_1d0 = local_170;
            uStack_1c8 = uStack_168;
            uStack_1c0 = local_160;
            uStack_1b8 = uStack_158;
            local_1b0 = local_150;
            uStack_1a8 = uStack_148;
            local_1a0 = local_140;
            uStack_198 = uStack_138;
            local_190 = uStack_130;
            uStack_17c = uStack_11c;
            local_b4 = uVar4;
            uStack_ac = uVar2;
            (**(code **)(lVar6 + 0x18))
                      (&local_23c,local_110 & 0xffffffff,local_110._4_4_,local_108 & 0xffffffff,
                       local_108._4_4_,*(undefined8 *)(lVar6 + 0x40),&local_f0,
                       *(undefined8 *)(lVar6 + 0x28));
            uStack_148 = uStack_234;
            local_150 = local_23c;
            uStack_138 = uStack_224;
            local_140 = local_22c;
            uStack_128 = uStack_214;
            uStack_130 = local_21c;
            uStack_11c = uStack_208;
            local_124 = uStack_210;
            uStack_120 = uStack_20c;
            uStack_168 = uStack_1e8;
            local_170 = local_1f0;
            uStack_158 = uStack_1d8;
            local_160 = local_1e0;
            local_b4 = uStack_200;
            uStack_ac = uStack_1f8;
          }
          uStack_e8 = uStack_148;
          local_f0 = local_150;
          uStack_d8 = uStack_138;
          local_e0 = local_140;
          uStack_c8 = uStack_128;
          local_d0 = uStack_130;
          uStack_bc = uStack_11c;
          uStack_c4 = local_124;
          uStack_c0 = uStack_120;
          uStack_9c = uStack_168;
          local_a4 = local_170;
          uStack_8c = uStack_158;
          local_94 = local_160;
          FUN_0589476c(lVar8,iVar9 + iVar7,&local_f0,DAT_091b1760);
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
        iVar9 = iVar9 + iVar1;
      } while (iVar9 < iVar3);
    }
    uVar10 = *(undefined4 *)(param_5 + 0x1e8);
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Coffee_UIEffects_UIEffectContext__ApplyFlipWithEffect(lVar8,uVar10);
    Coffee_UIEffects_UIEffectContext__ApplyShadow
              (param_5,lVar8,param_8,*(undefined4 *)(param_5 + 0x1e8));
    UnityEngine_UI_VertexHelper__Clear(param_9,0);
    UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(param_9,lVar8,0);
  }
  return;
}

