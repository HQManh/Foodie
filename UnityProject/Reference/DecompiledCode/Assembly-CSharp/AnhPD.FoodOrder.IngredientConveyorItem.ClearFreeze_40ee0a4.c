// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$ClearFreeze
// address: 0x40ee0a4
// body: available
// range: 0x40ee0a4-0x40ee20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ee20c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngredientConveyorItem__ClearFreeze(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_2c8 [136];
  undefined1 auStack_240 [136];
  undefined1 auStack_1b8 [136];
  undefined1 auStack_130 [136];
  undefined1 auStack_a8 [136];
  
  if ((DAT_095160be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4cc8);
    DAT_095160be = 1;
  }
  memset(auStack_a8,0,0x88);
  iVar1 = *(int *)(param_1 + 0x9c);
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    lVar2 = *(long *)(DAT_091b4cc8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      TrungKienPack_Particle_PoolingParticle__Spawn(auStack_130,**(long **)(lVar2 + 0xb8),1,0);
      memcpy(auStack_a8,auStack_130,0x88);
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__get_position(lVar2,0);
        TrungKienPack_Particle_ParticleRequest__At(auStack_1b8,auStack_a8,0);
        memcpy(auStack_a8,auStack_1b8,0x88);
        TrungKienPack_Particle_ParticleRequest__Scale(auStack_240,0x3f000000,auStack_a8,0);
        memcpy(auStack_a8,auStack_240,0x88);
        TrungKienPack_Particle_ParticleRequest__Volume(auStack_2c8,0x3e800000,auStack_a8,0);
        memcpy(auStack_a8,auStack_2c8,0x88);
        TrungKienPack_Particle_ParticleRequest__Play(auStack_a8,0);
        AnhPD_FoodOrder_IngredientConveyorItem__RefreshFreezeVisual(param_1);
        AnhPD_FoodOrder_IngredientConveyorItem__PlayThawHop(param_1);
        goto LAB_040ee1f4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_040ee1f4:
  return 0 < iVar1;
}

