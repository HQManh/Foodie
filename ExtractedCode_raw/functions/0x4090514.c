// rea decompile_all
// name: TrungKienPack.Particle.PoolingParticle$$Despawn
// address: 0x4090514
// body: available
// range: 0x4090514-0x4090643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40905c8 to 0x408b458 TrungKienPack.PoolCtrlObject$$DeSpawn (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4090640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_PoolingParticle__Despawn(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  if ((DAT_09515d07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919db68);
    FUN_03f5c2a4(&DAT_0919db78);
    FUN_03f5c2a4(&DAT_09226408);
    DAT_09515d07 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x38);
    uVar2 = FUN_06ef0700(*(long *)(param_1 + 0x28),uVar1,DAT_0919db68);
    if ((uVar2 & 1) == 0) {
      local_24 = uVar1;
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      uVar4 = System_String__Format(DAT_09226408,param_2,uVar4,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar4,0);
      return;
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar3 = FUN_06ef046c(*(long *)(param_1 + 0x28),uVar1,DAT_0919db78), lVar3 != 0)) {
      TrungKienPack_PoolCtrlObject__DeSpawn(lVar3,param_2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

