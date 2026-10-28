// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.<>c__DisplayClass140_0$$<ServePlateTo>b__1
// address: 0x40d1474
// body: available
// range: 0x40d1474-0x40d17db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d17d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass140_0__<ServePlateTo>b__1(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_2d8 [136];
  undefined1 auStack_250 [136];
  undefined1 auStack_1c8 [136];
  undefined4 local_140 [34];
  undefined1 auStack_b8 [136];
  
  if ((DAT_09515fe1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f7ac8);
    FUN_03f5c2a4(&DAT_09213cb8);
    FUN_03f5c2a4(&DAT_091f82c8);
    DAT_09515fe1 = 1;
  }
  memset(auStack_b8,0,0x88);
  if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_091824f0 + 0xb8) + 0xd) != '\0') {
    lVar2 = *(long *)(DAT_091b4cc8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_040d17d8;
    TrungKienPack_Particle_PoolingParticle__Spawn(local_140,**(long **)(lVar2 + 0xb8),2,0);
    memcpy(auStack_b8,local_140,0x88);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_040d17d8;
    UnityEngine_Transform__get_position(*(long *)(param_1 + 0x20),0);
    TrungKienPack_Particle_ParticleRequest__At(auStack_1c8,auStack_b8,0);
    memcpy(auStack_b8,auStack_1c8,0x88);
    TrungKienPack_Particle_ParticleRequest__Scale(auStack_250,0x3f000000,auStack_b8,0);
    memcpy(auStack_b8,auStack_250,0x88);
    TrungKienPack_Particle_ParticleRequest__Volume(auStack_2d8,0x3f000000,auStack_b8,0);
    memcpy(auStack_b8,auStack_2d8,0x88);
    TrungKienPack_Particle_ParticleRequest__Play(auStack_b8,0);
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_040d17d8;
  bVar1 = AnhPD_FoodOrder_ServeService__CanDeliver
                    (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x18),0);
  *(byte *)(param_1 + 0x28) = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_040d17d8;
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar3 & 1) == 0) goto LAB_040d17c0;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_040d17d8;
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_040d17d8;
      local_140[0] = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0xb4);
      uVar7 = FUN_03f5c42c(DAT_09535420,local_140);
      uVar7 = System_String__Format(DAT_09213cb8,uVar7,0);
      plVar6 = *(long **)(param_1 + 0x18);
      if (plVar6 == (long *)0x0) goto LAB_040d17d8;
      uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      uVar7 = System_String__Concat(uVar7,DAT_091f82c8,uVar4,DAT_091f7ac8,0);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar7,uVar4,0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x80);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_040d17d8;
        lVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(param_1 + 0x18),0);
      }
      else {
        lVar5 = *(long *)(param_1 + 0x20);
      }
      if (lVar5 != 0) {
        UnityEngine_Transform__get_position(lVar5,0);
        if ((*(long *)(param_1 + 0x48) != 0) && (lVar2 != 0)) {
          AnhPD_FoodOrder_GridIngController__SpawnDirtyPlateAt
                    (lVar2,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xb8),0);
          goto LAB_040d17c0;
        }
      }
    }
LAB_040d17d8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_040d17c0:
  return *(undefined1 *)(param_1 + 0x28);
}

