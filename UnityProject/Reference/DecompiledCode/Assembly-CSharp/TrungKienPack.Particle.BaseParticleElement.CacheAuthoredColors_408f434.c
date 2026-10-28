// rea decompile_all
// name: TrungKienPack.Particle.BaseParticleElement$$CacheAuthoredColors
// address: 0x408f434
// body: available
// range: 0x408f434-0x408f62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408f624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x408f628 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_BaseParticleElement__CacheAuthoredColors(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  
  if ((DAT_09515cfd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09180b50);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515cfd = 1;
  }
  local_48 = 0;
  plVar5 = (long *)(param_1 + 0x28);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*plVar5 != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_03f5c394(DAT_09180b50,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8(plVar5,uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      uVar6 = 0;
      lVar7 = 0x20;
      do {
        if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
          return;
        }
        lVar8 = *plVar5;
        uVar2 = FUN_057e0998(lVar3,uVar6 & 0xffffffff,DAT_091aeee8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar4 & 1) == 0) {
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          UnityEngine_ParticleSystem_MinMaxGradient___ctor
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&local_d0,0);
          uStack_68 = uStack_a8;
          local_70 = local_b0;
          uStack_88 = uStack_c8;
          local_90 = local_d0;
          uStack_78 = uStack_b8;
          local_80 = local_c0;
          local_60 = local_a0;
        }
        else {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (lVar3 = FUN_057e0998(*(long *)(param_1 + 0x20),uVar6 & 0xffffffff,DAT_091aeee8),
             lVar3 == 0)) break;
          local_48 = UnityEngine_ParticleSystem__get_main(lVar3,0);
          UnityEngine_ParticleSystem_MainModule__get_startColor(&local_90,&local_48,0);
        }
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar1 = (undefined8 *)(lVar8 + lVar7);
        puVar1[6] = local_60;
        puVar1[3] = uStack_78;
        puVar1[2] = local_80;
        puVar1[5] = uStack_68;
        puVar1[4] = local_70;
        puVar1[1] = uStack_88;
        *puVar1 = local_90;
        thunk_FUN_03f5d7b8(puVar1 + 1,0);
        lVar3 = *(long *)(param_1 + 0x20);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

