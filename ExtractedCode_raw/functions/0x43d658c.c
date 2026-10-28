// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$RenderToTexture
// address: 0x43d658c
// body: available
// range: 0x43d658c-0x43d6b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d6b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43d6b38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
ChocDino_UIFX_FilterBase__RenderToTexture
          (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09517c91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce8);
    FUN_03f5c2a4(&DAT_091827a0);
    FUN_03f5c2a4(&DAT_09184e48);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f3968);
    FUN_03f5c2a4(&DAT_091807e8);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09517c91 = 1;
  }
  uVar2 = UnityEngine_RenderTexture__GetActive(0);
  ChocDino_UIFX_FilterBase__GetResolutionScalingFactor(param_1);
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,param_2,*(undefined8 *)(*param_1 + 0x360));
  (**(code **)(*param_1 + 0x378))(param_1,param_2,uVar3,*(undefined8 *)(*param_1 + 0x380));
  if ((param_4 & 1) == 0) {
LAB_043d6b08:
    UnityEngine_RenderTexture__set_active(uVar2,0);
    return 1;
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (1.0 <= fVar8) {
    UnityEngine_RenderTexture__set_active(param_3,0);
    UnityEngine_GL__Clear(0,0,0,0,0,1,0);
    lVar6 = param_1[0xe];
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Graphics__Blit(param_2,param_3,lVar6,0);
    goto LAB_043d6b08;
  }
  lVar6 = param_1[0x30];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(lVar6,0);
    param_1[0x30] = lVar6;
    thunk_FUN_03f5d7b8(param_1 + 0x30,lVar6);
    lVar7 = param_1[0x30];
    lVar6 = FUN_03f5c394(DAT_091807f8,4);
    if (lVar6 == 0) goto LAB_043d6b34;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 == 0) goto LAB_043d6b38;
    *(undefined4 *)(lVar6 + 0x28) = 0xbf800000;
    *(undefined8 *)(lVar6 + 0x20) = 0x3f800000bf800000;
    if (uVar1 == 1) goto LAB_043d6b38;
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(lVar6 + 0x34) = 0xbf800000;
    *(undefined8 *)(lVar6 + 0x2c) = uVar3;
    if (uVar1 < 3) goto LAB_043d6b38;
    *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
    *(undefined8 *)(lVar6 + 0x38) = 0xbf8000003f800000;
    if (uVar1 == 3) goto LAB_043d6b38;
    uVar10 = NEON_fmov(0xbf800000,4);
    *(undefined4 *)(lVar6 + 0x4c) = 0xbf800000;
    *(undefined8 *)(lVar6 + 0x44) = uVar10;
    if (lVar7 == 0) goto LAB_043d6b34;
    UnityEngine_Mesh__set_vertices(lVar7,lVar6,0);
    lVar7 = param_1[0x30];
    lVar6 = FUN_03f5c394(DAT_091807e8,4);
    if (lVar6 == 0) goto LAB_043d6b34;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((((uVar1 == 0) || (*(undefined8 *)(lVar6 + 0x20) = 0x3f80000000000000, uVar1 == 1)) ||
        (*(undefined8 *)(lVar6 + 0x28) = uVar3, uVar1 < 3)) ||
       (*(undefined8 *)(lVar6 + 0x30) = 0x3f800000, uVar1 == 3)) goto LAB_043d6b38;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (lVar7 == 0) goto LAB_043d6b34;
    UnityEngine_Mesh__set_uv(lVar7,lVar6,0);
    lVar6 = param_1[0x30];
    uVar3 = FUN_03f5c394(DAT_091801b8,6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar3,DAT_091f3968,0);
    if (lVar6 == 0) goto LAB_043d6b34;
    UnityEngine_Mesh__set_triangles(lVar6,uVar3,0);
  }
  uVar9 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  uVar9 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,uVar9,0);
  lVar7 = param_1[0x30];
  lVar6 = FUN_03f5c394(DAT_0917fce8,4);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (((uVar1 == 0) || (*(undefined4 *)(lVar6 + 0x20) = uVar9, uVar1 == 1)) ||
       ((*(undefined4 *)(lVar6 + 0x24) = uVar9, uVar1 < 3 ||
        (*(undefined4 *)(lVar6 + 0x28) = uVar9, uVar1 == 3)))) {
LAB_043d6b38:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined4 *)(lVar6 + 0x2c) = uVar9;
    if (lVar7 != 0) {
      UnityEngine_Mesh__set_colors32(lVar7,lVar6,0);
      lVar6 = param_1[0x31];
      if (lVar6 == 0) {
        lVar6 = thunk_FUN_03f9944c(DAT_091827a0);
        UnityEngine_Rendering_CommandBuffer___ctor(lVar6,0);
        param_1[0x31] = lVar6;
        thunk_FUN_03f5d7b8(param_1 + 0x31,lVar6);
        lVar6 = param_1[0x31];
        if (lVar6 == 0) goto LAB_043d6b34;
      }
      UnityEngine_Rendering_CommandBuffer__Clear(lVar6,0);
      lVar6 = param_1[0x31];
      local_60 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      UnityEngine_Rendering_RenderTargetIdentifier___ctor(&local_80,param_3,0);
      if (lVar6 != 0) {
        uStack_a8 = uStack_78;
        local_b0 = local_80;
        uStack_98 = uStack_68;
        uStack_a0 = uStack_70;
        local_90 = local_60;
        UnityEngine_Rendering_CommandBuffer__SetRenderTarget(lVar6,&local_b0,0);
        if (param_1[0x31] != 0) {
          UnityEngine_Rendering_CommandBuffer__ClearRenderTarget(0,0,0,0,0,param_1[0x31],0,1,0);
          lVar6 = param_1[0x31];
          if (DAT_09516ccb == '\0') {
            FUN_03f5c2a4(&DAT_09187ec0);
            DAT_09516ccb = '\x01';
          }
          if (lVar6 != 0) {
            lVar7 = *(long *)(DAT_09187ec0 + 0xb8);
            uStack_e8 = *(undefined8 *)(lVar7 + 0x48);
            local_f0 = *(undefined8 *)(lVar7 + 0x40);
            uStack_d8 = *(undefined8 *)(lVar7 + 0x58);
            uStack_e0 = *(undefined8 *)(lVar7 + 0x50);
            uStack_c8 = *(undefined8 *)(lVar7 + 0x68);
            local_d0 = *(undefined8 *)(lVar7 + 0x60);
            uStack_b8 = *(undefined8 *)(lVar7 + 0x78);
            uStack_c0 = *(undefined8 *)(lVar7 + 0x70);
            UnityEngine_Rendering_CommandBuffer__SetViewMatrix(lVar6,&local_f0,0);
            lVar6 = param_1[0x31];
            if (DAT_09516ccb == '\0') {
              FUN_03f5c2a4(&DAT_09187ec0);
              DAT_09516ccb = '\x01';
            }
            if (lVar6 != 0) {
              lVar7 = *(long *)(DAT_09187ec0 + 0xb8);
              uStack_128 = *(undefined8 *)(lVar7 + 0x48);
              local_130 = *(undefined8 *)(lVar7 + 0x40);
              uStack_118 = *(undefined8 *)(lVar7 + 0x58);
              uStack_120 = *(undefined8 *)(lVar7 + 0x50);
              uStack_108 = *(undefined8 *)(lVar7 + 0x68);
              local_110 = *(undefined8 *)(lVar7 + 0x60);
              uStack_f8 = *(undefined8 *)(lVar7 + 0x78);
              uStack_100 = *(undefined8 *)(lVar7 + 0x70);
              UnityEngine_Rendering_CommandBuffer__SetProjectionMatrix(lVar6,&local_130,0);
              lVar6 = param_1[0x30];
              lVar7 = param_1[0x31];
              if (DAT_09516ccb == '\0') {
                FUN_03f5c2a4(&DAT_09187ec0);
                DAT_09516ccb = '\x01';
              }
              if (lVar7 != 0) {
                lVar5 = *(long *)(DAT_09187ec0 + 0xb8);
                uStack_168 = *(undefined8 *)(lVar5 + 0x48);
                local_170 = *(undefined8 *)(lVar5 + 0x40);
                uStack_158 = *(undefined8 *)(lVar5 + 0x58);
                uStack_160 = *(undefined8 *)(lVar5 + 0x50);
                uStack_148 = *(undefined8 *)(lVar5 + 0x68);
                local_150 = *(undefined8 *)(lVar5 + 0x60);
                uStack_138 = *(undefined8 *)(lVar5 + 0x78);
                uStack_140 = *(undefined8 *)(lVar5 + 0x70);
                UnityEngine_Rendering_CommandBuffer__DrawMesh(lVar7,lVar6,&local_170,param_1[0xe],0)
                ;
                lVar6 = param_1[0x31];
                if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_Graphics__ExecuteCommandBuffer(lVar6,0);
                goto LAB_043d6b08;
              }
            }
          }
        }
      }
    }
  }
LAB_043d6b34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

