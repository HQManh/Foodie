// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$Set
// address: 0x440047c
// body: available
// range: 0x440047c-0x440081f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440081c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__Set
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
               long param_5,long param_6,byte param_7,long param_8)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09517e92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5948);
    FUN_03f5c2a4(&DAT_091ae618);
    FUN_03f5c2a4(&DAT_091ae638);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c440);
    DAT_09517e92 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  param_4[0x22] = param_5;
  thunk_FUN_03f5d7b8(param_4 + 0x22,param_5);
  if (param_5 != 0) {
    UnityEngine_UI_MaskableGraphic__set_maskable(param_4,*(undefined1 *)(param_5 + 0xb8),0);
    lVar4 = UnityEngine_Component__get_gameObject(param_4,0);
    lVar5 = UnityEngine_Component__get_gameObject(param_5,0);
    if ((lVar5 != 0) && (uVar2 = UnityEngine_GameObject__get_layer(lVar5,0), lVar4 != 0)) {
      UnityEngine_GameObject__set_layer(lVar4,uVar2,0);
      param_4[0x23] = param_6;
      thunk_FUN_03f5d7b8(param_4 + 0x23,param_6);
      if (param_4[0x23] != 0) {
        local_50 = UnityEngine_ParticleSystem__get_main(param_4[0x23],0);
        bVar1 = UnityEngine_ParticleSystem_MainModule__get_prewarm(&local_50,0);
        *(byte *)((long)param_4 + 0x144) = bVar1 & 1;
        if (param_4[0x23] != 0) {
          uVar6 = UnityEngine_ParticleSystem__get_isPlaying(param_4[0x23],0);
          if (((uVar6 & 1) != 0) || (*(char *)((long)param_4 + 0x144) != '\0')) {
            if (param_4[0x23] == 0) goto LAB_0440081c;
            UnityEngine_ParticleSystem__Clear(param_4[0x23],0);
            if (param_4[0x23] == 0) goto LAB_0440081c;
            UnityEngine_ParticleSystem__Pause(param_4[0x23],0);
          }
          if (param_6 != 0) {
            FUN_04a6b048(param_6,param_4 + 0x29,DAT_091c5948);
            if (param_4[0x29] != 0) {
              UnityEngine_Renderer__set_enabled(param_4[0x29],0,0);
              lVar4 = DAT_0918c440;
              lVar5 = param_4[0x29];
              *(byte *)((long)param_4 + 0xe1) = param_7 & 1;
              if (*(int *)(lVar4 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (lVar5 != 0) {
                UnityEngine_Renderer__GetSharedMaterials
                          (lVar5,*(undefined8 *)(*(long *)(DAT_0918c440 + 0xb8) + 8),0);
                lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 8);
                if (lVar4 != 0) {
                  uVar7 = FUN_057e0998(lVar4,param_7 & 1,DAT_091ae638);
                  (**(code **)(*param_4 + 0x348))(param_4,uVar7,*(undefined8 *)(*param_4 + 0x350));
                  if (*(int *)(DAT_0918c440 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar4 = *(long *)(*(long *)(DAT_0918c440 + 0xb8) + 8);
                  if (lVar4 != 0) {
                    iVar3 = *(int *)(lVar4 + 0x18);
                    *(undefined4 *)(lVar4 + 0x18) = 0;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (0 < iVar3) {
                      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar3,0);
                    }
                    local_48 = UnityEngine_ParticleSystem__get_textureSheetAnimation(param_6,0);
                    iVar3 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_mode
                                      (&local_48,0);
                    if ((iVar3 == 1) &&
                       (iVar3 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_uvChannelMask
                                          (&local_48,0), iVar3 == 0)) {
                      UnityEngine_ParticleSystem_TextureSheetAnimationModule__set_uvChannelMask
                                (&local_48,1,0);
                    }
                    uVar2 = Coffee_UIExtensions_UIParticleRenderer__GetWorldScale(param_4);
                    *(undefined4 *)(param_4 + 0x26) = uVar2;
                    *(undefined4 *)((long)param_4 + 0x134) = param_2;
                    *(undefined4 *)(param_4 + 0x27) = param_3;
                    if ((param_4[0x23] != 0) &&
                       (lVar4 = UnityEngine_Component__get_transform(param_4[0x23],0), lVar4 != 0))
                    {
                      uVar2 = UnityEngine_Transform__get_position(lVar4,0);
                      *(undefined4 *)((long)param_4 + 0x124) = uVar2;
                      *(undefined4 *)(param_4 + 0x25) = param_2;
                      *(undefined4 *)((long)param_4 + 300) = param_3;
                      uVar6 = UnityEngine_Screen__get_width(0);
                      lVar4 = UnityEngine_Screen__get_height(0);
                      *(ulong *)((long)param_4 + 0x13c) = uVar6 & 0xffffffff | lVar4 << 0x20;
                      uVar7 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09188ad0);
                      }
                      uVar6 = UnityEngine_Object__op_Implicit(uVar7,0);
                      uVar2 = 0x3f800000;
                      if ((uVar6 & 1) != 0) {
                        lVar4 = UnityEngine_UI_Graphic__get_canvas(param_4,0);
                        if (lVar4 == 0) goto LAB_0440081c;
                        uVar2 = UnityEngine_Canvas__get_scaleFactor(lVar4,0);
                      }
                      *(undefined4 *)(param_4 + 0x24) = uVar2;
                      *(undefined1 *)(param_4 + 0x1b) = 1;
                      param_4[0x2a] = param_8;
                      thunk_FUN_03f5d7b8(param_4 + 0x2a,param_8);
                      lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(param_4,0);
                      if (lVar4 != 0) {
                        UnityEngine_CanvasRenderer__SetTexture(lVar4,0,0);
                        UnityEngine_Behaviour__set_enabled(param_4,1,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0440081c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

