// rea decompile_all
// name: AnhPD.FoodOrder.DragInteractionHandler$$PlayMergeBurst
// address: 0x41e9db0
// body: available
// range: 0x41e9db0-0x41ea067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ea064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragInteractionHandler__PlayMergeBurst
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined1 auStack_330 [136];
  undefined1 auStack_2a8 [136];
  undefined1 auStack_220 [136];
  undefined1 auStack_198 [136];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [136];
  
  if ((DAT_09516b16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b16 = 1;
  }
  memset(auStack_d8,0,0x88);
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  memset(auStack_198,0,0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_4,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(param_5,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(DAT_091b4cc8 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar3 = **(undefined8 **)(lVar2 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (param_5 != 0) {
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar1 & 1) == 0) {
            lVar2 = UnityEngine_Component__get_transform(param_5,0);
          }
          else {
            lVar2 = *(long *)(param_5 + 0x20);
          }
          if (lVar2 != 0) {
            uVar4 = UnityEngine_Transform__get_position(lVar2,0);
            lVar2 = *(long *)(DAT_091b4cc8 + 0x20);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_03f95a6c();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_03f95a6c();
            }
            if (**(long **)(lVar2 + 0xb8) != 0) {
              TrungKienPack_Particle_PoolingParticle__Spawn
                        (auStack_220,**(long **)(lVar2 + 0xb8),3,0);
              memcpy(auStack_198,auStack_220,0x88);
              TrungKienPack_Particle_ParticleRequest__Volume(auStack_2a8,0x3dcccccd,auStack_198,0);
              memcpy(auStack_198,auStack_2a8,0x88);
              TrungKienPack_Particle_ParticleRequest__At
                        (auStack_330,uVar4,param_2,param_3,auStack_198,0);
              memcpy(auStack_d8,auStack_330,0x88);
              if (param_4 != 0) {
                uVar1 = AnhPD_FoodOrder_DragItem__TryGetVfxGradient(param_4,&local_110,0);
                if ((uVar1 & 1) != 0) {
                  local_340 = local_e0;
                  uStack_368 = uStack_108;
                  local_370 = local_110;
                  uStack_358 = uStack_f8;
                  uStack_360 = local_100;
                  uStack_348 = uStack_e8;
                  local_350 = local_f0;
                  TrungKienPack_Particle_ParticleRequest__SetColor
                            (auStack_220,auStack_d8,&local_370,0);
                  memcpy(auStack_d8,auStack_220,0x88);
                }
                TrungKienPack_Particle_ParticleRequest__Play(auStack_d8,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

