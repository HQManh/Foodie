// rea decompile_all
// name: _GAME.Utils.Helper$$SetRotationFromTwoTransforms
// address: 0x7740a78
// body: available
// range: 0x7740a78-0x7740b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7740b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_Helper__SetRotationFromTwoTransforms
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  if ((param_5 != 0) &&
     (fVar1 = (float)UnityEngine_Transform__get_position(param_5,0), param_6 != 0)) {
    fVar2 = param_2;
    fVar3 = param_3;
    local_3c = (float)UnityEngine_Transform__get_position(param_6,0);
    local_3c = fVar1 - local_3c;
    fStack_38 = param_2 - fVar2;
    local_34 = param_3 - fVar3;
    local_40 = 0;
    local_48 = 0;
    if (DAT_09515faa == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515faa = '\x01';
    }
    local_48 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
    local_40 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20);
    UnityEngine_Quaternion__Internal_LookRotation(&local_3c,&local_48,0);
    if (param_4 != 0) {
      UnityEngine_Transform__set_rotation(param_4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

