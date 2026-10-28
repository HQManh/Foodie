// rea decompile_all
// name: Coffee.UIParticleInternal.ParticleSystemExtensions$$IsSubEmitterOf
// address: 0x43fdfac
// body: available
// range: 0x43fdfac-0x43fe0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fe0c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Coffee_UIParticleInternal_ParticleSystemExtensions__IsSubEmitterOf
               (undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_38;
  
  if ((DAT_09517e65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e65 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar4 & 1) != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = UnityEngine_ParticleSystem__get_subEmitters(param_2,0);
      iVar2 = UnityEngine_ParticleSystem_SubEmittersModule__get_subEmittersCount(&local_38,0);
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          uVar5 = UnityEngine_ParticleSystem_SubEmittersModule__GetSubEmitterSystem
                            (&local_38,iVar6,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar5,param_1,0);
        } while (((uVar3 & 1) == 0) && (bVar1 = iVar2 + -1 != iVar6, iVar6 = iVar6 + 1, bVar1));
        goto LAB_043fe0ac;
      }
    }
  }
  uVar3 = 0;
LAB_043fe0ac:
  return uVar3 & 1;
}

