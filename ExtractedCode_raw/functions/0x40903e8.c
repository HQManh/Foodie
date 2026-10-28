// rea decompile_all
// name: TrungKienPack.Particle.PoolingParticle$$SpawnFrom
// address: 0x40903e8
// body: available
// range: 0x40903e8-0x4090513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40904a0 to 0x4ca4cc4 FUN_04ca4cc4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40904e4 to 0x4ca5010 FUN_04ca5010 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x409050c to 0x4ca4844 FUN_04ca4844 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4090510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_PoolingParticle__SpawnFrom(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_09515d05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5ed8);
    FUN_03f5c2a4(&DAT_091d5ef0);
    FUN_03f5c2a4(&DAT_091d5ef8);
    DAT_09515d05 = 1;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_3 + 0x39) == '\0') {
      if (param_2 != 0) {
        FUN_04ca4844(param_2,*(undefined8 *)(param_3 + 0x30),DAT_091d5ed8);
        return;
      }
    }
    else if (param_2 != 0) {
      FUN_04ca5010(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                   *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                   *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                   *(undefined4 *)(param_3 + 0x28),param_2,*(undefined8 *)(param_3 + 0x30),
                   *(undefined1 *)(param_3 + 0x38),DAT_091d5ef8);
      return;
    }
  }
  else if (param_2 != 0) {
    FUN_04ca4cc4(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                 *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                 *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                 *(undefined4 *)(param_3 + 0x28),param_2,DAT_091d5ef0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

