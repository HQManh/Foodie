// rea decompile_all
// name: CakeOrder.InGame.BackgroundColorGradingControl$$Push
// address: 0x437eeb0
// body: available
// range: 0x437eeb0-0x437f0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437f0a8 to 0x860f4c4 UnityEngine.Shader$$SetGlobalVectorImpl (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437f0ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_BackgroundColorGradingControl__Push(float param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((DAT_09517964 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091819c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09214b28);
    DAT_09517964 = 1;
  }
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_091819c0 + 0xb8) + 0x18) == '\0') {
    uVar2 = UnityEngine_Rendering_GlobalKeyword__Create(DAT_09214b28,0);
    if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091819c0);
    }
    lVar3 = DAT_091819c0;
    *(undefined4 *)(*(long *)(DAT_091819c0 + 0xb8) + 0x14) = uVar2;
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x18) = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  bVar1 = UnityEngine_Object__op_Implicit(param_2,0);
  bVar1 = 0.001 < param_1 & bVar1;
  if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Shader__SetKeyword(*(long *)(DAT_091819c0 + 0xb8) + 0x14,bVar1,0);
  if (bVar1 == 0) {
    if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(DAT_091819c0 + 0xb8);
    uVar5 = 0;
    param_1 = 0.0;
    uVar2 = 0x3f800000;
    uVar4 = 0x3f800000;
  }
  else {
    if (*(int *)(DAT_091819c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Shader__SetGlobalVectorImpl
              (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
               *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
               **(undefined4 **)(DAT_091819c0 + 0xb8),0);
    UnityEngine_Shader__SetGlobalVectorImpl
              (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
               *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
               *(undefined4 *)(*(long *)(DAT_091819c0 + 0xb8) + 4),0);
    UnityEngine_Shader__SetGlobalVectorImpl
              (*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
               *(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
               *(undefined4 *)(*(long *)(DAT_091819c0 + 0xb8) + 8),0);
    UnityEngine_Shader__SetGlobalVectorImpl
              (*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),
               *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
               *(undefined4 *)(*(long *)(DAT_091819c0 + 0xb8) + 0xc),0);
    uVar2 = *(undefined4 *)(param_2 + 0x58);
    uVar4 = *(undefined4 *)(param_2 + 0x5c);
    uVar5 = *(undefined4 *)(param_2 + 0x60);
    lVar3 = *(long *)(DAT_091819c0 + 0xb8);
  }
  UnityEngine_Shader__SetGlobalVectorImpl(uVar2,uVar4,uVar5,param_1,*(undefined4 *)(lVar3 + 0x10),0)
  ;
  return;
}

