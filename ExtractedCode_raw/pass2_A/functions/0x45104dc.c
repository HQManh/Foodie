// rea decompile_all
// name: Utilities.DraggableObject$$OnMouseDown
// address: 0x45104dc
// body: available
// range: 0x45104dc-0x45105df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45105d8 to 0x8674f54 UnityEngine.Events.UnityEvent$$Invoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x45105dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableObject__OnMouseDown
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_4[6] != 0) {
    if ((*(char *)(param_4[6] + 0x18) != '\0') || ((char)param_4[10] != '\0')) {
      return;
    }
    lVar1 = UnityEngine_Camera__get_main(0);
    lVar2 = UnityEngine_Component__get_gameObject(param_4,0);
    if ((lVar2 != 0) &&
       ((lVar2 = UnityEngine_GameObject__get_transform(lVar2,0), lVar2 != 0 &&
        (UnityEngine_Transform__get_position(lVar2,0), lVar1 != 0)))) {
      UnityEngine_Camera__WorldToScreenPoint(lVar1,0);
      *(float *)((long)param_4 + 0x2c) = param_3;
      lVar1 = UnityEngine_Component__get_gameObject(param_4,0);
      if ((lVar1 != 0) && (lVar1 = UnityEngine_GameObject__get_transform(lVar1,0), lVar1 != 0)) {
        fVar3 = (float)UnityEngine_Transform__get_position(lVar1,0);
        fVar5 = param_2;
        fVar6 = param_3;
        fVar4 = (float)(**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
        *(undefined1 *)(param_4 + 10) = 1;
        *(float *)(param_4 + 4) = fVar3 - fVar4;
        *(float *)((long)param_4 + 0x24) = param_2 - fVar5;
        *(float *)(param_4 + 5) = param_3 - fVar6;
        if (param_4[7] != 0) {
          UnityEngine_Events_UnityEvent__Invoke(param_4[7],0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

