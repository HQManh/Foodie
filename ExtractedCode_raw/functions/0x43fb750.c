// rea decompile_all
// name: Coffee.UIParticleInternal.Color32Extensions$$LinearToGamma
// address: 0x43fb750
// body: available
// range: 0x43fb750-0x43fb8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fb8e0 to 0x8626edc UnityEngine.Mesh$$SetColors (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fb8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIParticleInternal_Color32Extensions__LinearToGamma(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((DAT_09517e38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091826d0);
    FUN_03f5c2a4(&DAT_091abad0);
    FUN_03f5c2a4(&DAT_091abad8);
    FUN_03f5c2a4(&DAT_091abae0);
    DAT_09517e38 = 1;
  }
  if (*(int *)(DAT_091826d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 != 0) {
    UnityEngine_Mesh__GetColors(param_1,**(undefined8 **)(DAT_091826d0 + 0xb8),0);
    if (**(long **)(DAT_091826d0 + 0xb8) != 0) {
      iVar1 = *(int *)(**(long **)(DAT_091826d0 + 0xb8) + 0x18);
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (*(int *)(DAT_091826d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091826d0 + 0xb8) == 0) goto LAB_043fb8e4;
          uVar5 = FUN_057311b8(**(long **)(DAT_091826d0 + 0xb8),iVar6,DAT_091abad8);
          uVar2 = Coffee_UIParticleInternal_Color32Extensions__LinearToGamma();
          uVar3 = Coffee_UIParticleInternal_Color32Extensions__LinearToGamma(uVar5 >> 8 & 0xffffff);
          uVar4 = Coffee_UIParticleInternal_Color32Extensions__LinearToGamma(uVar5 >> 0x10 & 0xffff)
          ;
          if (**(long **)(DAT_091826d0 + 0xb8) == 0) goto LAB_043fb8e4;
          FUN_0573120c(**(long **)(DAT_091826d0 + 0xb8),iVar6,
                       (uint)uVar5 & 0xff000000 | (uVar4 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                       uVar2 & 0xff,DAT_091abae0);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      if (*(int *)(DAT_091826d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Mesh__SetColors(param_1,**(undefined8 **)(DAT_091826d0 + 0xb8),0);
      return;
    }
  }
LAB_043fb8e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

