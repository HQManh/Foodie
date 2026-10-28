// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MethodCall$$.ctor
// address: 0x74a1834
// body: available
// range: 0x74a1834-0x74a1837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_MethodCall___ctor(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  System_Object___ctor(param_1,0);
  (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  if ((param_2 != 0) &&
     (lVar1 = System_Runtime_Serialization_SerializationInfo__GetEnumerator(param_2,0), lVar1 != 0))
  {
    iVar2 = *(int *)(lVar1 + 0x2c);
    if (iVar2 < *(int *)(lVar1 + 0x28)) {
      do {
        *(undefined1 *)(lVar1 + 0x30) = 1;
        *(int *)(lVar1 + 0x2c) = iVar2 + 1;
        System_Runtime_Serialization_SerializationInfoEnumerator__get_Current(&uStack_38,lVar1);
        (**(code **)(*param_1 + 0x268))
                  (param_1,uStack_38,uStack_30,*(undefined8 *)(*param_1 + 0x270));
        iVar2 = *(int *)(lVar1 + 0x2c);
      } while (iVar2 < *(int *)(lVar1 + 0x28));
    }
    *(undefined1 *)(lVar1 + 0x30) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

