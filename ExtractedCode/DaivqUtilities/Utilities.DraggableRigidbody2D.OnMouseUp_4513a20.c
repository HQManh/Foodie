// rea decompile_all
// name: Utilities.DraggableRigidbody2D$$OnMouseUp
// address: 0x4513a20
// body: available
// range: 0x4513a20-0x4513ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4513b88 to 0x8674f54 UnityEngine.Events.UnityEvent$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4513ba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2D__OnMouseUp(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09518553 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518553 = 1;
  }
  if (*(char *)(param_3 + 0x98) == '\0') {
    return;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    UnityEngine_Rigidbody2D__set_gravityScale
              (*(undefined4 *)(param_3 + 0x28),*(long *)(param_3 + 0x20),0);
    uVar2 = *(undefined8 *)(param_3 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x38) == 0) goto LAB_04513ba0;
      UnityEngine_Behaviour__set_enabled(*(long *)(param_3 + 0x38),0,0);
    }
    *(undefined1 *)(param_3 + 0x98) = 0;
    if (*(long *)(param_3 + 0x20) != 0) {
      UnityEngine_Rigidbody2D__set_freezeRotation
                (*(long *)(param_3 + 0x20),*(undefined1 *)(param_3 + 0x99),0);
      lVar3 = *(long *)(param_3 + 0x20);
      if (lVar3 != 0) {
        fVar4 = (float)UnityEngine_Rigidbody2D__get_linearVelocity(lVar3,0);
        param_2 = param_2 * *(float *)(param_3 + 0x78);
        UnityEngine_Rigidbody2D__set_linearVelocity(fVar4 * *(float *)(param_3 + 0x78),lVar3,0);
        if (0.0 < *(float *)(param_3 + 0x7c)) {
          if (*(long *)(param_3 + 0x20) == 0) goto LAB_04513ba0;
          fVar4 = (float)UnityEngine_Rigidbody2D__get_linearVelocity(*(long *)(param_3 + 0x20),0);
          fVar5 = *(float *)(param_3 + 0x7c);
          if (DAT_095185d3 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095185d3 = '\x01';
          }
          if ((fVar5 * fVar5 < fVar4 * fVar4 + param_2 * param_2) &&
             (*(int *)(DAT_09187e80 + 0xe4) == 0)) {
            FUN_03f5c424();
          }
        }
        if (*(long *)(param_3 + 0x88) != 0) {
          UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_3 + 0x88),0);
          return;
        }
      }
    }
  }
LAB_04513ba0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

