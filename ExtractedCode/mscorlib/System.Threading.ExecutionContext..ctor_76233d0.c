// rea decompile_all
// name: System.Threading.ExecutionContext$$.ctor
// address: 0x76233d0
// body: available
// range: 0x76233d0-0x76234e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76234d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76234e0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ExecutionContext___ctor(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_0952214e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187ca0);
    FUN_03f5c2a4(&DAT_09207180);
    DAT_0952214e = 1;
  }
  System_Object___ctor(param_1,0);
  if ((param_2 != 0) &&
     (lVar1 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0), lVar1 != 0))
  {
    uVar2 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar1,0);
    while( true ) {
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = System_Runtime_Serialization_SerializationInfoEnumerator__get_Name(lVar1,0);
      if (lVar3 == 0) break;
      uVar2 = System_String__Equals(lVar3,DAT_09207180,0);
      if ((uVar2 & 1) != 0) {
        plVar4 = (long *)System_Runtime_Serialization_SerializationInfoEnumerator__get_Value
                                   (lVar1,0);
        lVar3 = DAT_09187ca0;
        if (plVar4 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        else if ((*plVar4 != DAT_09187ca0) ||
                (*(long **)(param_1 + 0x20) = plVar4, *plVar4 != lVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        thunk_FUN_03f5d7b8(param_1 + 0x20,plVar4);
      }
      uVar2 = System_Runtime_Serialization_SerializationInfoEnumerator__MoveNext(lVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

