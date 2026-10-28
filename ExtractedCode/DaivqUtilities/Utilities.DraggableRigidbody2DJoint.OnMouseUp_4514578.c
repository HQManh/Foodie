// rea decompile_all
// name: Utilities.DraggableRigidbody2DJoint$$OnMouseUp
// address: 0x4514578
// body: available
// range: 0x4514578-0x4514723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4514708 to 0x647fad4 FUN_0647fad4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4514720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2DJoint__OnMouseUp
               (undefined1 param_1 [16],float param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_0951855a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be030);
    DAT_0951855a = 1;
  }
  if ((char)param_3[0x16] == '\0') {
    return;
  }
  if (param_3[4] != 0) {
    UnityEngine_Rigidbody2D__set_gravityScale((int)param_3[5],param_3[4],0);
    lVar2 = param_3[7];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (param_3[7] == 0) goto LAB_04514720;
      UnityEngine_Behaviour__set_enabled(param_3[7],0,0);
    }
    *(undefined1 *)(param_3 + 0x16) = 0;
    if (param_3[4] != 0) {
      UnityEngine_Rigidbody2D__set_freezeRotation
                (param_3[4],*(undefined1 *)((long)param_3 + 0x6d),0);
      lVar2 = param_3[4];
      if (lVar2 != 0) {
        fVar3 = (float)UnityEngine_Rigidbody2D__get_linearVelocity(lVar2,0);
        param_2 = param_2 * *(float *)(param_3 + 0x12);
        UnityEngine_Rigidbody2D__set_linearVelocity(fVar3 * *(float *)(param_3 + 0x12),lVar2,0);
        if (0.0 < *(float *)((long)param_3 + 0x94)) {
          if (param_3[4] == 0) goto LAB_04514720;
          fVar3 = (float)UnityEngine_Rigidbody2D__get_linearVelocity(param_3[4],0);
          fVar4 = *(float *)((long)param_3 + 0x94);
          if (DAT_095185d3 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095185d3 = '\x01';
          }
          if ((fVar4 * fVar4 < fVar3 * fVar3 + param_2 * param_2) &&
             (*(int *)(DAT_09187e80 + 0xe4) == 0)) {
            FUN_03f5c424();
          }
        }
        (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
        if (param_3[0x14] != 0) {
          FUN_0647fad4(param_3[0x14],param_3,DAT_091be030);
          return;
        }
      }
    }
  }
LAB_04514720:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

