// rea decompile_all
// name: TrungKienPack.Particle.BaseParticleElement$$InitColor
// address: 0x408f2fc
// body: available
// range: 0x408f2fc-0x408f433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408f418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_BaseParticleElement__InitColor(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_09515cfb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515cfb = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  TrungKienPack_Particle_BaseParticleElement__CacheAuthoredColors(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar4) {
        return;
      }
      uVar2 = FUN_057e0998(lVar1,iVar4,DAT_091aeee8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x20),iVar4,DAT_091aeee8), lVar1 == 0)) break;
        local_38 = UnityEngine_ParticleSystem__get_main(lVar1,0);
        uStack_78 = param_2[1];
        local_80 = *param_2;
        uStack_68 = param_2[3];
        uStack_70 = param_2[2];
        uStack_58 = param_2[5];
        local_60 = param_2[4];
        local_50 = param_2[6];
        UnityEngine_ParticleSystem_MainModule__set_startColor(&local_38,&local_80,0);
      }
      lVar1 = *(long *)(param_1 + 0x20);
      iVar4 = iVar4 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

