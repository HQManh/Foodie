// rea decompile_all
// name: AnhPD.FoodOrder.StationOrchestrator$$HandleComplete
// address: 0x4104804
// body: available
// range: 0x4104804-0x4104a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4104a64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4104a68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationOrchestrator__HandleComplete(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_260 [136];
  undefined1 auStack_1d8 [136];
  undefined1 auStack_150 [136];
  undefined1 auStack_c8 [136];
  
  if ((DAT_09516187 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516187 = 1;
  }
  memset(auStack_c8,0,0x88);
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar5 = *(long *)(param_1 + 0x18), lVar5 == 0))
  goto LAB_04104a64;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x14);
  if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_04104a68:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) == 0) goto LAB_04104a64;
  lVar5 = AnhPD_FoodOrder_StationInteractGroup__get_View();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b4cc8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04104a64;
    TrungKienPack_Particle_PoolingParticle__Spawn(auStack_150,**(long **)(lVar4 + 0xb8),5,0);
    memcpy(auStack_c8,auStack_150,0x88);
    if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar5,0), lVar5 == 0))
    goto LAB_04104a64;
    UnityEngine_Transform__get_position(lVar5,0);
    TrungKienPack_Particle_ParticleRequest__At(auStack_1d8,auStack_c8,0);
    memcpy(auStack_c8,auStack_1d8,0x88);
    TrungKienPack_Particle_ParticleRequest__Volume(auStack_260,0x3dcccccd,auStack_c8,0);
    memcpy(auStack_c8,auStack_260,0x88);
    TrungKienPack_Particle_ParticleRequest__Play(auStack_c8,0);
  }
  if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Lofelt_NiceVibrations_HapticPatterns__PlayPreset(4,0);
  if ((param_2 & 1) == 0) {
LAB_041049fc:
    AnhPD_FoodOrder_StationOrchestrator__DoReset(param_1,uVar1);
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x11) != '\0') {
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar1,1,0,*(undefined8 *)(lVar5 + 0x28));
      }
      goto LAB_041049fc;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x54) = uVar1;
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_04104a68;
      lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar5 + 0x28);
        *(undefined1 *)(param_1 + 0x5c) = 0;
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        *(int *)(param_1 + 0x58) = iVar2;
        AnhPD_FoodOrder_StationOrchestrator__PumpPending(param_1);
        return;
      }
    }
  }
LAB_04104a64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

