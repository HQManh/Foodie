// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$RefreshParticles
// address: 0x43ffe28
// body: available
// range: 0x43ffe28-0x4400057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4400034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticle__RefreshParticles(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_48;
  
  if ((DAT_09517e75 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5710);
    FUN_03f5c2a4(&DAT_091cdbf0);
    FUN_03f5c2a4(&DAT_091aeec8);
    FUN_03f5c2a4(&DAT_091aeee0);
    FUN_03f5c2a4(&DAT_091aeee8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e75 = 1;
  }
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 != 0) {
    FUN_04b7d09c(param_2,1,*(undefined8 *)(param_1 + 0xf0),DAT_091cdbf0);
    lVar4 = *(long *)(param_1 + 0xf0);
    if (lVar4 != 0) {
      iVar5 = *(int *)(lVar4 + 0x18);
      if (-1 < iVar5 + -1) {
        do {
          if (*(long *)(param_1 + 0xf0) == 0) goto LAB_04400034;
          iVar5 = iVar5 + -1;
          lVar4 = FUN_057e0998(*(long *)(param_1 + 0xf0),iVar5,DAT_091aeee8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar2 & 1) == 0) {
LAB_043fff98:
            if (*(long *)(param_1 + 0xf0) == 0) goto LAB_04400034;
            FUN_057e251c(*(long *)(param_1 + 0xf0),iVar5,DAT_091aeec8);
          }
          else {
            if (lVar4 == 0) goto LAB_04400034;
            uVar3 = FUN_04a6a8a8(lVar4,1,DAT_091c5710);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar3,param_1,0);
            if ((uVar2 & 1) != 0) goto LAB_043fff98;
          }
        } while (0 < iVar5);
        lVar4 = *(long *)(param_1 + 0xf0);
        if (lVar4 == 0) goto LAB_04400034;
      }
      iVar5 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar5) {
          Coffee_UIExtensions_UIParticle__RefreshParticles(param_1);
          return;
        }
        lVar4 = FUN_057e0998(lVar4,iVar5,DAT_091aeee8);
        if (lVar4 == 0) break;
        local_48 = UnityEngine_ParticleSystem__get_textureSheetAnimation(lVar4,0);
        iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_mode(&local_48,0);
        if ((iVar1 == 1) &&
           (iVar1 = UnityEngine_ParticleSystem_TextureSheetAnimationModule__get_uvChannelMask
                              (&local_48,0), iVar1 == 0)) {
          UnityEngine_ParticleSystem_TextureSheetAnimationModule__set_uvChannelMask(&local_48,1,0);
        }
        lVar4 = *(long *)(param_1 + 0xf0);
        iVar5 = iVar5 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_04400034:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

