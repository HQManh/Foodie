// rea decompile_all
// name: CookingGraphLegacyFeedbackBridge$$Particle
// address: 0x407aa98
// body: available
// range: 0x407aa98-0x407ad23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407ad20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraphLegacyFeedbackBridge__Particle
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined1 auStack_310 [136];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 auStack_200 [136];
  undefined1 auStack_178 [136];
  undefined1 auStack_f0 [140];
  undefined4 local_64;
  
  if ((DAT_09515c38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091c8fa8);
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_091b4cd0);
    FUN_03f5c2a4(&DAT_09200bc0);
    DAT_09515c38 = 1;
  }
  local_64 = 0;
  memset(auStack_f0,0,0x88);
  memset(auStack_178,0,0x88);
  uVar1 = FUN_05a8f088(DAT_091b4cd0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_04aaf4a8(param_7,&local_64,DAT_091c8fa8);
    if ((uVar1 & 1) != 0) {
      uVar1 = System_String__op_Equality(param_7,DAT_09200bc0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(char *)(*(long *)(DAT_091824f0 + 0xb8) + 0xd) == '\0') {
          return;
        }
      }
      lVar2 = *(long *)(DAT_091b4cc8 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      TrungKienPack_Particle_PoolingParticle__Spawn
                (auStack_200,**(long **)(lVar2 + 0xb8),local_64,0);
      memcpy(auStack_178,auStack_200,0x88);
      TrungKienPack_Particle_ParticleRequest__At(&local_288,param_1,param_2,param_3,auStack_178,0);
      memcpy(auStack_178,&local_288,0x88);
      TrungKienPack_Particle_ParticleRequest__Scale(auStack_310,param_4,auStack_178,0);
      memcpy(auStack_178,auStack_310,0x88);
      TrungKienPack_Particle_ParticleRequest__Volume(auStack_f0,param_5,auStack_178,0);
      if ((param_8 != 0) && (*(long *)(param_8 + 0x18) != 0)) {
        TrungKienPack_Particle_ParticleColor__BuildRandomColorGradient(&local_288,param_8,0);
        local_320 = local_258;
        uStack_348 = uStack_280;
        local_350 = local_288;
        uStack_338 = uStack_270;
        uStack_340 = uStack_278;
        uStack_328 = uStack_260;
        local_330 = local_268;
        TrungKienPack_Particle_ParticleRequest__SetColor(auStack_200,auStack_f0,&local_350,0);
        memcpy(auStack_f0,auStack_200,0x88);
      }
      TrungKienPack_Particle_ParticleRequest__Play(auStack_f0,0);
    }
  }
  return;
}

