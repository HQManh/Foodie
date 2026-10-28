// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$SetEnablePreview
// address: 0x43f1870
// body: available
// range: 0x43f1870-0x43f1a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f1a7c to 0x8619714 UnityEngine.Material$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f1a80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext__SetEnablePreview(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09517de7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517de7 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x48);
    if ((param_2 & 1) == 0) {
      if (DAT_09516627 == '\0') {
        FUN_03f5c2a4(&DAT_0918cc38);
        DAT_09516627 = '\x01';
      }
      puVar2 = *(undefined4 **)(DAT_0918cc38 + 0xb8);
      puVar3 = puVar2 + 1;
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x68);
      puVar3 = (undefined4 *)(param_1 + 0x6c);
    }
    if (param_3 != 0) {
      UnityEngine_Material__SetColorImpl(*puVar2,*puVar3,param_3,uVar4,0);
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = *(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0xc0);
      if ((param_2 & 1) == 0) {
        if (DAT_09516627 == '\0') {
          FUN_03f5c2a4(&DAT_0918cc38);
          DAT_09516627 = '\x01';
        }
        puVar2 = *(undefined4 **)(DAT_0918cc38 + 0xb8);
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = puVar2 + 1;
      }
      else {
        uVar5 = 0;
        uVar6 = 0;
        puVar2 = (undefined4 *)(param_1 + 0x1e0);
        puVar3 = (undefined4 *)(param_1 + 0x1e4);
      }
      UnityEngine_Material__SetColorImpl(*puVar2,*puVar3,uVar5,uVar6,param_3,uVar4,0);
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = 0;
      if ((param_2 & 1) != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0xa0);
      }
      UnityEngine_Material__SetFloat
                (uVar4,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x68),0);
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = 0;
      if ((param_2 & 1) != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x130);
      }
      UnityEngine_Material__SetFloat
                (uVar4,param_3,*(undefined4 *)(*(long *)(DAT_0918c380 + 0xb8) + 0x9c),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

